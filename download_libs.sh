#! /bin/sh

TENSORIO_BUILD_URL=https://storage.googleapis.com/tensorio-build/


# ordered newest to oldest
# library is stored on google with name tensorflow_tf.version_our.version

TENSORFLOW_1_13_4=tensorflow_1.13_4     # identicial to 1.13_4, and identical to 0.3
TENSORFLOW_1_13_0=tensorflow_1.13_4     # begin new version scheme, identical to 0.3
TENSORFLOW_0_3=tensorflow_0.3.0         # last 0.x version


LIB_TENSORFLOW_URL=$TENSORIO_BUILD_URL/$TENSORFLOW_1_13_4
# LIB_PROTOBUF_URL=$TENSORIO_BUILD_URL/libprotobuf
# LIB_NSYNC_URL=$TENSORIO_BUILD_URL/nsync


SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
FRAMEWORK_DIR=tensorflow.framework


echo "Downloading tensorflow static lib to $FRAMEWORK_DIR/tensorflow"
cd $SCRIPT_DIR/$FRAMEWORK_DIR
curl -O $LIB_TENSORFLOW_URL


echo "Download complete"