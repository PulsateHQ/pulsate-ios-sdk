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
            targets: ["PULPulsateWrapper", "PULPulsateResources"])
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
            ]
        ),
        .target(
            name: "PULPulsateResources",
            resources: [
                .copy("Resources/PULPulsateBasic.bundle")
            ]
        )
    ]
) 