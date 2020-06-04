# TensorFlow iOS Framework

A full build of TensorFlow for iOS. Unofficial. Latest is v2.0.1 based on Tensorflow r2.0, v2.0.2.

Framework targets simluator and arm64 devices only (iOS 12.0+) with full support for training MobileNetV2 models on device.

## Notes

This repository contains only the required header files for a portable build of tensorflow for iOS. The tensorflow static library must be added to the root directory of the framework.

To create this framework, first run *build_all_ios.sh* from *tensorflow/contrib/makefile* on branch *r2.0.doc.ai* in our custom [tensorflow repository](https://github.com/doc-ai/tensorflow/tree/r2.0.doc.ai) and then run *create_full_ios_frameworks.sh* in the same directory.

The following static library must be added to the root directory of this framework. Remove the *.a* extension:

- [tensorflow.a](https://storage.googleapis.com/tensorio-build/r2.0/tensorflow)

You may also run the *download_libs.sh* script in this repository to download and add the tensorflow static library to the framework.

The following additional static libraries must be added as dependencies to any project which uses this framework:

- [protobuf.a](https://storage.googleapis.com/tensorio-build/r2.0/libprotobuf)
- [nsync.a](https://storage.googleapis.com/tensorio-build/r2.0/nsync)

## Usage

The framework must be added to the "Embedded Binaries" and "Linked Frameworks and Libraries" section of your Xcode project, in the General build setting.

Add the protobuf and nsync static libraries to the "Linked Frameworks and Libraries".

Add `-force_load $(PROJECT_DIR)/tensorflow.framework/tensorflow` to the Other Linker Flags in the projects Build Settings.

## Pod

This framework is wrapped in the [TensorIOTensorFlow pod](https://github.com/doc-ai/tensorio-tensorflow-ios). The cocoapod is the simplest way to include this framework in your project. It vends the tensorflow, protobuf, and nsync libraries as well as all the required headers.

Include the pod with:

```
pod 'TensorIOTensorFlow'
```

## Learn More

Learn more about [compiling tensorflow on your machine](https://github.com/doc-ai/tensorflow-ios-framework/wiki).

Learn more about [customizing the ops in your build](https://github.com/doc-ai/tensorflow-ios-framework/wiki/Add-and-Remove-Ops).

## Author

doc.ai

## License

TensorIOTensorFlow is available under the Apache 2.0 license. See the LICENSE file for more info.
