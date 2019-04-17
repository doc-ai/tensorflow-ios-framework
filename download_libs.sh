#! /bin/sh

TENSORIO_BUILD_URL=https://storage.googleapis.com/tensorio-build/
LIB_TENSORFLOW_URL=$TENSORIO_BUILD_URL/tensorflow
# LIB_PROTOBUF_URL=$TENSORIO_BUILD_URL/libprotobuf
# LIB_NSYNC_URL=$TENSORIO_BUILD_URL/nsync

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FRAMEWORK_DIR=tensorflow.framework

echo "Downloading tensorflow static lib to $FRAMEWORK_DIR/tensorflow"
cd $SCRIPT_DIR/$FRAMEWORK_DIR
curl -O $LIB_TENSORFLOW_URL

echo "Download complete"