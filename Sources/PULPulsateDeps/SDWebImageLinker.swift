import Foundation
import SDWebImage

/// This class ensures SDWebImage is properly linked when PULPulsate is used.
/// SDWebImage is a required dependency for PULPulsate.
public class SDWebImageLinker {
    /// Call this method to ensure SDWebImage is properly linked
    public static func ensureLinked() {
        // Reference SDWebImage classes to ensure they're linked
        let _ = SDWebImage.SDImageCache.shared
    }
} 