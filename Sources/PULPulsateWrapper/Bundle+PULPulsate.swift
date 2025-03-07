import Foundation

/// Extension on Bundle to make accessing the PULPulsate resource bundle easier
public extension Bundle {
    /// Returns the resource bundle associated with the PULPulsate framework.
    static var pulsateResourceBundle: Bundle? {
        return PULPulsateCompat.resourceBundle
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