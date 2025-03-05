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
    dependencies: [ ],
    targets: [
        .binaryTarget(
            name: "PULPulsate",
            path: "Frameworks/PULPulsate.xcframework"
        ),
        .target(
            name: "PULPulsateBundle",
            path: "Sources/PULPulsateBundle",
            resources: [
                .copy("../../Resources/PULPulsateBasic.bundle")
            ]
        )
    ]
) 