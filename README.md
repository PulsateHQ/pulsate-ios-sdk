<p align="center">
  <img src="https://raw.githubusercontent.com/PulsateHQ/pulsate-ios-sdk/master/pulsate-logo.png" alt="Pulsate's Logo"/>
</p>

# Pulsate iOS SDK

• [iOS SDK Installation & Documentation](http://pulsate.readme.io/v2.0/docs/installing-the-pulsate-sdk)

# Installation with CocoaPods

The easiest way to install the Pulsate iOS SDK is through [CocoaPods](http://cocoapods.org) dependency manager.

```pod "PULPulsate"```

# Installation with Swift Package Manager

From Xcode 11 onwards, you can use [Swift Package Manager](https://swift.org/package-manager/) to add the Pulsate SDK to your project.

1. Select File > Swift Packages > Add Package Dependency
2. Enter the repository URL: https://github.com/PulsateHQ/pulsate-ios-sdk.git
3. Specify the version: Version 4.7.1 or later

## Important: Manual SDWebImage Integration Required

The PULPulsate SDK requires SDWebImage to function properly. You need to add SDWebImage to your project separately:

1. Select File > Swift Packages > Add Package Dependency
2. Enter the repository URL: https://github.com/SDWebImage/SDWebImage.git
3. Specify the version (5.0.0 or later is recommended)

## Usage with Swift Package Manager

After adding both packages, import them in your code:

```swift
import PULPulsate
import SDWebImage

// Then use PULPulsate normally according to the documentation
```

## Troubleshooting Swift Package Manager Issues

If you encounter build errors, try these steps:

1. Clean your project (Product > Clean Build Folder)
2. Reset Package Caches (File > Packages > Reset Package Caches)
3. Make sure both PULPulsate and SDWebImage are properly imported
4. Rebuild your project

If you still encounter issues with the Swift Package Manager integration, try the manual approach:

1. Download the PULPulsate.xcframework from this repository
2. Add it directly to your project (drag & drop into Xcode)
3. Add SDWebImage via Swift Package Manager separately
4. Import both in your code:
   ```swift
   import PULPulsate
   import SDWebImage
   ```

# PULPulsate SDK for iOS

## Overview
This repository contains the Swift Package Manager distribution of the PULPulsate SDK for iOS.

## Requirements
- iOS 13.0+
- Swift 5.3+
- Xcode 12.0+

## Installation

### Swift Package Manager

1. In Xcode, select "File" → "Swift Packages" → "Add Package Dependency..."
2. Enter the repository URL: `https://github.com/PulsateHQ/pulsate-ios-sdk.git`
3. Select the version you want to use

The package will automatically include all necessary dependencies (including SDWebImage) and resources.

## Usage

### Basic Setup
To use PULPulsate with its required dependency:

```swift
// Import both required packages
import PULPulsate
import SDWebImage

// In your AppDelegate
func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
    // Configure PULPulsate as normal
    // PULPulsate.sharedInstance.startPulsateSession(...)
    
    return true
}
```

Make sure to add both PULPulsate and SDWebImage to your project to avoid build errors.

### Resource Bundle Support

If you need to access resources from the SDK's bundle:

```swift
// Import the resources library
import PULPulsateResources

// Then access the bundle
if let pulsateBundle = Bundle.pulsateResourceBundle {
    // Use the bundle resources
    if let imagePath = pulsateBundle.path(forResource: "imageName", ofType: "png") {
        let image = UIImage(contentsOfFile: imagePath)
        // Use the image
    }
}
```

## Problem Solving Import Issues
If you see the error: "Failed to build module 'PULPulsate' for importation", follow these steps:

### Automatic Integration Helper

We've included a helper script to make integration easier. To use it:

1. Download the `fix_spmtest.sh` script from this repository
2. Make it executable: `chmod +x fix_spmtest.sh`
3. Run it with your Xcode project path:
   ```
   ./fix_spmtest.sh /path/to/YourProject.xcodeproj
   ```
4. Follow the on-screen instructions

The script will automatically add both PULPulsate and SDWebImage as dependencies to your project.

### Fix for SPmTest Project - UPDATED SOLUTION

Due to Swift Package Manager limitations with binary frameworks, we've separated the dependencies into standalone libraries. To use them:

1. First, add both libraries in your `Package.swift` dependencies:
   ```swift
   dependencies: [
       .package(url: "https://github.com/PulsateHQ/pulsate-ios-sdk.git", from: "4.7.1"),
       .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0")
   ]
   ```

2. In your Xcode project, navigate to Project Settings > Build Phases
   - Under "Link Binary With Libraries" add:
     - PULPulsate.framework
     - SDWebImage.framework
     - PULPulsateResources.framework (if needed for resources)

3. In your AppDelegate.swift, add:
   ```swift
   import PULPulsate
   import SDWebImage
   import PULPulsateResources // Only if you need resource bundle access
   
   // In didFinishLaunchingWithOptions:
   PULPulsateCompat.ensureDependenciesLinked()
   ```

4. If you need resources, access them with:
   ```swift
   if let bundle = Bundle.pulsateResourceBundle {
       // Use the bundle
   }
   ```

5. Clean and rebuild your project:
   - File > Packages > Reset Package Caches
   - Product > Clean Build Folder
   - Build again

### Troubleshooting Last Resort

If all other approaches fail, the most reliable solution is to manually download both dependencies:

1. Download the PULPulsate.xcframework from this repository
2. Add it directly to your project (drag & drop into Xcode)
3. Add SDWebImage via Swift Package Manager separately
4. Import both in your code:
   ```swift
   import PULPulsate
   import SDWebImage
   ```

This direct approach avoids any Swift Package Manager integration issues.

## License
See the LICENSE file for more info.

