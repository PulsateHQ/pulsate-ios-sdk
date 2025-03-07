import Foundation

public extension Bundle {
    /// Returns the resource bundle associated with the PULPulsate framework.
    static var pulsateResourceBundle: Bundle {
        let bundleName = "PULPulsateBasic"
        
        let candidates = [
            // Bundle should be present here when the package is linked into an App.
            Bundle.main.resourceURL,
            
            // Bundle should be present here when the package is linked into a framework.
            Bundle(for: BundleToken.self).resourceURL,
            
            // For command-line tools.
            Bundle.main.bundleURL,
        ]
        
        for candidate in candidates {
            let bundlePath = candidate?.appendingPathComponent(bundleName + ".bundle")
            if let bundle = bundlePath.flatMap(Bundle.init(url:)) {
                return bundle
            }
        }
        
        // If bundle still not found, attempt to use the module bundle directly
        return Bundle(for: BundleToken.self)
    }
}

// A private class used to locate the bundle
private final class BundleToken {
    static let bundle: Bundle = {
        #if SWIFT_PACKAGE
        return Bundle.module
        #else
        return Bundle(for: BundleToken.self)
        #endif
    }()
} 