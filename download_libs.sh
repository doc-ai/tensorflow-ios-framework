#! /bin/sh

LIB_URL=https://storage.googleapis.com/tensorio-build/ios/release/2.0/xcodebuild/12B45b/tag/2.0.6/lib

LIB_TENSORFLOW_URL=$LIB_URL/libtensorflow-core.a    # -> tensorflow
# LIB_PROTOBUF_URL=$LIB_URL/libprotobuf.a           # -> libprotobuf.a
# LIB_NSYNC_URL=$LIB_URL/nsync.a                    # -> libnsync.a

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FRAMEWORK_DIR=tensorflow.framework

echo "Downloading tensorflow static lib at $LIB_TENSORFLOW_URL to $FRAMEWORK_DIR/tensorflow"
cd $SCRIPT_DIR/$FRAMEWORK_DIR
curl -o tensorflow $LIB_TENSORFLOW_URL

echo "Download complete"
