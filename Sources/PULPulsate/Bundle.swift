import Foundation
import SDWebImage

public enum PULPulsateBundle {
    /// Returns the resource bundle containing Pulsate resources
    public static var resourceBundle: Bundle? {
        let bundleName = "PULPulsateBasic"
        let candidates = [
            // Bundle should be present here when the package is linked into an App
            Bundle.main.resourceURL,
            // Bundle should be present here when the package is linked into a framework
            Bundle(for: BundleToken.self).resourceURL,
            // For command-line tools
            Bundle.main.bundleURL,
        ]

        for candidate in candidates {
            let bundlePath = candidate?.appendingPathComponent(bundleName + ".bundle")
            if let bundle = bundlePath.flatMap(Bundle.init(url:)) {
                return bundle
            }
        }
        return nil
    }
}

// This is a helper class used to locate the bundles
private final class BundleToken {} 