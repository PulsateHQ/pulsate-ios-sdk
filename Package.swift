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
            targets: ["PULPulsateWrapper"])
    ],
    dependencies: [
        .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "PULPulsate",
            path: "Sources/PULPulsate/PULPulsate.xcframework"
        ),
        .target(
            name: "PULPulsateWrapper",
            dependencies: [
                "PULPulsate",
                .product(name: "SDWebImage", package: "SDWebImage")
            ],
            path: "Sources/PULPulsate",
            exclude: ["PULPulsate.xcframework"],
            resources: [
                .copy("../../Resources/PULPulsateBasic.bundle")
            ]
        )
    ]
) 