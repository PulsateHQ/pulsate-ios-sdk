// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PULPulsate",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "PULPulsate",
            targets: ["PULPulsate"])
    ],
    dependencies: [
        .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0")
    ],
    targets: [
        .target(
            name: "PULPulsate",
            dependencies: [],
            resources: [
                .copy("../../PULPulsateBeta/PULPulsateBasic.bundle")
            ]
        ),
        .binaryTarget(
            name: "PULPulsateFramework",
            path: "PULPulsateBeta/PULPulsate.xcframework"
        )
    ]
) 