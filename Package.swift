// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "DocuSign",
    products: [
        .library(
            name: "DocuSign",
            targets: ["DocuSignSDK"]
        ),
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(
            name: "DocuSignSDK",
            url: "https://github.com/docusign/native-ios-sdk/raw/release/2.10.1/DocuSignSDK.zip",
            checksum: "c63d61494038e3c0c0498d70f4c7e0c8095993ea58140e2cb0291a224d647f0d"
        ),
    ]
)
