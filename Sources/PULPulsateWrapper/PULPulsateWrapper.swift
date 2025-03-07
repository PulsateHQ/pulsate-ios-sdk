import Foundation
import SDWebImage

// This file serves as a compatibility layer to ensure SDWebImage is properly linked 
// when someone uses the PULPulsate SDK.
//
// Do not import PULPulsate here to avoid circular dependency issues.

/// Helper class to ensure dependencies are properly linked
public class PULPulsateCompat {
    /// Ensures SDWebImage is properly linked
    public static func ensureDependenciesLinked() {
        // Just reference SDWebImage to ensure it's linked
        let _ = SDWebImage.SDImageCache.shared
    }
    
    // Bundle helper
    public static var resourceBundle: Bundle? {
        let bundleName = "PULPulsateBasic"
        
        let candidates = [
            // Bundle should be present here when the package is linked into an App.
            Bundle.main.resourceURL,
            
            // Bundle should be present here when the package is linked into a framework.
            Bundle(for: PULPulsateCompat.self).resourceURL,
            
            // For command-line tools.
            Bundle.main.bundleURL,
        ]
        
        for candidate in candidates {
            let bundlePath = candidate?.appendingPathComponent(bundleName + ".bundle")
            if let bundle = bundlePath.flatMap(Bundle.init(url:)) {
                return bundle
            }
        }
        
        return Bundle(for: PULPulsateCompat.self)
    }
} 