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
In your Swift file, import both modules:

```swift
import PULPulsate
import PULPulsateWrapper
```

Initialize the compatibility layer to ensure all dependencies are properly linked:

```swift
// Call this in your AppDelegate or early in your app's lifecycle
PULPulsateCompat.ensureDependenciesLinked()
```

Then use the PULPulsate SDK normally according to its documentation.

### Resource Bundle Support

The package includes proper support for the PULPulsateBasic.bundle resource bundle. You can access resources from the SDK like this:

```swift
// Get the resource bundle
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

### Fix for SPmTest Project

To resolve import issues, you need to import both modules separately in your code:

```swift
import PULPulsate
import PULPulsateWrapper  // Contains compatibility helpers and ensures SDWebImage is linked

// Initialize the compatibility layer (optional, but recommended)
PULPulsateCompat.ensureDependenciesLinked()

// Use the SDK normally from this point...
```

For resource access, use:

```swift
// Get the resource bundle
if let pulsateBundle = Bundle.pulsateResourceBundle {
    // Use the bundle resources
    let imagePath = pulsateBundle.path(forResource: "imageName", ofType: "png")
    // ...
}
```

If you encounter build errors, try the following:

1. Clean your project (Product > Clean Build Folder)
2. Reset Package Caches (File > Packages > Reset Package Caches)
3. Rebuild your project

### Alternative Solution

If the above solution doesn't work, you may need to include the XCFramework directly in your project:

1. Download the PULPulsate.xcframework from this repository
2. In Xcode, right-click on your project in the navigator and select "Add Files to..."
3. Select the PULPulsate.xcframework you downloaded
4. Make sure "Copy items if needed" is checked
5. Add SDWebImage using Swift Package Manager separately
6. In your code, use:
   ```swift
   import PULPulsate
   import SDWebImage
   ```

## License
See the LICENSE file for more info.

