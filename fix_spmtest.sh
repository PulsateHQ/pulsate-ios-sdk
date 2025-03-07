#!/bin/bash

echo "PULPulsate SPM Integration Helper"
echo "--------------------------------"
echo "This script will help you integrate PULPulsate in your Xcode project."
echo

# Check if xcodeproj is provided
if [ -z "$1" ]; then
  echo "Please provide the path to your .xcodeproj file:"
  echo "Example: ./fix_spmtest.sh /path/to/YourProject.xcodeproj"
  exit 1
fi

XCODEPROJ="$1"

# Verify the .xcodeproj exists
if [ ! -d "$XCODEPROJ" ]; then
  echo "Error: $XCODEPROJ not found"
  exit 1
fi

echo "Adding dependencies to your project..."

# 1. Add Swift Package dependencies using xcodebuild
echo "Adding PULPulsate package..."
xcodebuild -project "$XCODEPROJ" -command-line-tool yes -resolvePackageDependencies -package-url https://github.com/PulsateHQ/pulsate-ios-sdk.git -minimum-severity warning

echo "Adding SDWebImage package..."
xcodebuild -project "$XCODEPROJ" -command-line-tool yes -resolvePackageDependencies -package-url https://github.com/SDWebImage/SDWebImage.git -minimum-severity warning

echo
echo "Dependencies added! Please follow these additional steps:"
echo
echo "1. In your AppDelegate.swift, add:"
echo "   import PULPulsate"
echo "   import SDWebImage"
echo "   import PULPulsateResources  // Only if you need resource bundle access"
echo
echo "2. Initialize the compatibility helpers:"
echo "   PULPulsateCompat.ensureDependenciesLinked()"
echo
echo "3. Clean and rebuild your project:"
echo "   - File > Packages > Reset Package Caches"
echo "   - Product > Clean Build Folder"
echo "   - Build again"
echo
echo "If you still encounter issues, consider using the manual integration method"
echo "described in the README.md file."
echo
echo "Integration completed!" 