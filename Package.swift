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
            targets: ["PULPulsate", "PULPulsateBundle"])
    ],
    dependencies: [
        .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "PULPulsate",
            path: "PULPulsateBeta/PULPulsate.xcframework"
        ),
        .target(
            name: "PULPulsateBundle",
            dependencies: [],
            path: "PULPulsateBeta",
            resources: [
                .copy("PULPulsateBasic.bundle")
            ]
        )
    ]
) 