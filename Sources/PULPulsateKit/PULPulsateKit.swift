import Foundation
import PULPulsateDeps

#if canImport(PULPulsate)
import PULPulsate
@_exported import PULPulsate
#endif

@_exported import SDWebImage

/// PULPulsateKit is a wrapper module that includes both PULPulsate and its dependency SDWebImage.
/// Use this module to avoid dependency issues when working with PULPulsate.
public enum PULPulsateKit {
    /// Initialize SDWebImage to ensure it's properly linked.
    /// Call this method in your app initialization code.
    public static func initialize() {
        // Ensure SDWebImage is properly linked
        SDWebImageLinker.ensureLinked()
    }
} 