#! /bin/sh

TENSORIO_BUILD_URL=https://storage.googleapis.com/tensorio-build/r2.0

# ordered newest to oldest
# library is stored on google with name tensorflow_tf.version_our.version

TENSORFLOW_2_0_2=tensorflow_2.0_2     # include SavedModel in build
TENSORFLOW_2_0_1=tensorflow_2.0_1     # workaround for RegexFullMatch ops
TENSORFLOW_2_0_0=tensorflow_2.0_0     # initial 2.0 build


LIB_TENSORFLOW_URL=$TENSORIO_BUILD_URL/$TENSORFLOW_2_0_2
# LIB_PROTOBUF_URL=$TENSORIO_BUILD_URL/libprotobuf
# LIB_NSYNC_URL=$TENSORIO_BUILD_URL/nsync


SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FRAMEWORK_DIR=tensorflow.framework


echo "Downloading tensorflow static lib to $FRAMEWORK_DIR/tensorflow"
cd $SCRIPT_DIR/$FRAMEWORK_DIR
curl -O $LIB_TENSORFLOW_URL


echo "Download complete"