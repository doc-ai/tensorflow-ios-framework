#! /bin/sh

TENSORIO_BUILD_URL=https://storage.googleapis.com/tensorio-build/r1.15

# ordered newest to oldest
# library is stored on google with name tensorflow_tf.version_our.version

TENSORFLOW_1_15_1=tensorflow_1.15_1     # adds _FusedMatMul op
TENSORFLOW_1_15_0=tensorflow_1.15_0     # initial 1.15 build


LIB_TENSORFLOW_URL=$TENSORIO_BUILD_URL/$TENSORFLOW_1_15_1
# LIB_PROTOBUF_URL=$TENSORIO_BUILD_URL/libprotobuf
# LIB_NSYNC_URL=$TENSORIO_BUILD_URL/nsync


SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FRAMEWORK_DIR=tensorflow.framework


echo "Downloading tensorflow static lib to $FRAMEWORK_DIR/tensorflow"
cd $SCRIPT_DIR/$FRAMEWORK_DIR
curl -O $LIB_TENSORFLOW_URL


echo "Download complete"