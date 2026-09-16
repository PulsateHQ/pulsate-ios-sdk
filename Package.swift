// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "PULPulsate",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "PULPulsate", 
            targets: ["PULPulsate"])
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(
            name: "PULPulsate",
            path: "Frameworks/PULPulsate.xcframework"
        )
    ]
) 
