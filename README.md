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
4. Xcode will handle the dependencies automatically

You can also add it directly to your Package.swift file:

```swift
dependencies: [
    .package(url: "https://github.com/PulsateHQ/pulsate-ios-sdk.git", from: "4.7.1")
]
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
The package now provides two separate libraries to avoid integration issues:

1. `PULPulsate` - The main binary framework
2. `PULPulsateResources` - Helper module with resource bundle access

In your Swift file, import the modules you need:

```swift
// For the main SDK functionality
import PULPulsate

// Needed for SDK's internal image handling
import SDWebImage

// Optional: Only if you need resource bundle access
import PULPulsateResources
```

When using both libraries, make sure to initialize the compatibility helpers:

```swift
// Call this in your AppDelegate or early in your app's lifecycle
PULPulsateCompat.ensureDependenciesLinked()
```

Then use the PULPulsate SDK normally according to its documentation.

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
2. Add it directly to your project (drag & drop)
3. Add SDWebImage via Swift Package Manager separately
4. In your code:
   ```swift
   import PULPulsate
   import SDWebImage
   ```

This direct approach avoids any Swift Package Manager integration issues.

## License
See the LICENSE file for more info.

