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
            targets: ["PULPulsate"]),
        .library(
            name: "PULPulsateWrapper",
            targets: ["PULPulsateWrapper"])
    ],
    dependencies: [
        .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "PULPulsate",
            path: "Frameworks/PULPulsate.xcframework"
        ),
        .target(
            name: "PULPulsateWrapper",
            dependencies: [
                "PULPulsate",
                .product(name: "SDWebImage", package: "SDWebImage")
            ],
            path: "Sources/PULPulsateWrapper"
        )
    ]
) 