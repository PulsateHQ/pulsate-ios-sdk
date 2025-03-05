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
            targets: ["PULPulsateFramework"])
    ],
    dependencies: [
        .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0")
    ],
    targets: [
        .binaryTarget(
            name: "PULPulsateFramework",
            path: "PULPulsateBeta/PULPulsate.xcframework"
        ),
        .target(
            name: "PULPulsate",
            dependencies: [
                .product(name: "SDWebImage", package: "SDWebImage"),
                "PULPulsateFramework"
            ],
            resources: [
                .copy("Resources/PULPulsateBasic.bundle")
            ]
        )
    ]
) 