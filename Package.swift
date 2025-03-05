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
            targets: ["PULPulsateResources"])
    ],
    dependencies: [
        .package(url: "https://github.com/SDWebImage/SDWebImage.git", from: "5.0.0")
    ],
    targets: [
        .target(
            name: "PULPulsateResources",
            dependencies: [
                .product(name: "SDWebImage", package: "SDWebImage")
            ],
            path: "Sources/PULPulsateResources",
            resources: [
                .copy("../../Resources/PULPulsateBasic.bundle"),
                .copy("../../Frameworks/PULPulsate.xcframework")
            ]
        )
    ]
) 