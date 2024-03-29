// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "KochavaEngagementExtension",
    platforms: [
        .iOS("12.4"),
        .macOS("10.14"),
        .tvOS("12.4"),
        .watchOS("5.2")
    ],
    products:
    [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "KochavaEngagementExtension",
            targets:
            [
                "KochavaEngagementExtension"
            ]
        ),
    ],
    dependencies:
    [
        // Dependencies declare other packages that this package depends on.
        // .package(name: "KochavaCore", path: "../Apple-SwiftPackage-KochavaCore"),
        .package(
            name: "KochavaCore",
            url: "https://github.com/Kochava/Apple-SwiftPackage-KochavaCore",
            from: "7.4.0"
        ),
    ],
    targets:
    [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .binaryTarget(
            name: "KochavaEngagementExtension",
            path: "KochavaEngagementExtension.xcframework"
        ),
        .testTarget(
            name: "KochavaEngagementExtensionTests",
            dependencies:
            [
                "KochavaCore",
                "KochavaEngagementExtension"
            ]
        ),
    ]
)
