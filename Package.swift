// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "PULPulsate",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "PULPulsateKit", 
            targets: ["PULPulsateKit"])
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
            name: "PULPulsateDeps",
            dependencies: [
                .product(name: "SDWebImage", package: "SDWebImage")
            ]
        ),
        .target(
            name: "PULPulsateKit",
            dependencies: ["PULPulsate", "PULPulsateDeps"],
            linkerSettings: [
                .linkedFramework("SDWebImage")
            ]
        )
    ]
) 
