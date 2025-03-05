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
2. Enter the repository URL: `https://github.com/yourusername/pulsate-ios-sdk.git`
3. Select the version you want to use

## Usage

### Basic Setup
In your Swift file, import the module:

```swift
// Option 1: Import the binary framework directly
import PULPulsate

// Option 2: Import the wrapper that includes SDWebImage dependency
import PULPulsateWrapper
```

### Common Issue Resolution
If you encounter build errors when importing PULPulsate directly, try using PULPulsateWrapper instead, which includes all necessary dependencies.

## Problem Solving Import Issues
If you see the error: "Failed to build module 'PULPulsate' for importation" or "No such module 'PULPulsateWrapper'", follow these steps:

### Fix for SPmTest Project

1. In your SPmTest Xcode project, navigate to your project settings
2. Under "Build Phases", add SDWebImage.framework to the "Link Binary With Libraries" section:
   - Click on the "+" button
   - Select "Add Other..." and then "Add Package Dependency..."
   - Select SDWebImage from the list
3. In your AppDelegate.swift, use the direct import:
   ```swift
   import PULPulsate
   import SDWebImage
   ```
4. Clean your project (Product > Clean Build Folder)
5. Rebuild your project

This approach ensures that your project directly links against both PULPulsate and its required dependency SDWebImage.

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

