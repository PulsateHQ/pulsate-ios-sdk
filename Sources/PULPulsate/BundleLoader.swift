import Foundation

public enum PULPulsate {
    private static var bundleURL: URL? {
        Bundle.main.url(forResource: "PULPulsateBasic", withExtension: "bundle")
    }
    
    public static var bundle: Bundle? {
        if let bundleURL = bundleURL {
            return Bundle(url: bundleURL)
        }
        return nil
    }
} 