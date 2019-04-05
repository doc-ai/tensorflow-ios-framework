# TensorFlow iOS Framework

A full build version of TensorFlow for iOS. Unofficial.

Build: 1.13rc2

## Notes

This repository contains only the required header files for a portable build of tensorflow for ios. The tensorflow static library must be added to the root directory of the framework.

To create this framework, first run *build_all_ios.sh* from *tensorflow/contrib/makefile* in our custom [tensorflow repository](https://github.com/doc-ai/tensorflow/tree/v1.13.0-rc2-ios-fixes) and then run *create_full_ios_frameworks.sh* in the same directory.

The following static library must be added to the root directory of this framework. Remove the *.a* extension:

- [tensorflow.a](https://storage.googleapis.com/tensorio-build/tensorflow)

You may also run the *download_libs.sh* script in this repository to download and add the tensorflow static library to the framework.

The following additional static libraries must be added as dependencies to any project which uses this framework:

- [protobuf.a](https://storage.googleapis.com/tensorio-build/libprotobuf)
- [nsync.a](https://storage.googleapis.com/tensorio-build/nsync)

## Usage

The framework must be added to the "Embedded Binaries" and "Linked Frameworks and Libraries" section of your Xcode project, in the General build setting.

Add the protobuf and nsync static libraries to the "Linked Frameworks and Libraries".

Add `-force_load $(PROJECT_DIR)/tensorflow.framework/tensorflow` to the Other Linker Flags in the projects Build Settings.