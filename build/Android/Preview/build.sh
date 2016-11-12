#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/targets/android/build.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`/Duck-Alert/app/src/main"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_40.jdk/Contents/Home"
##endif
export SUPPORT_JAR="/Users/JLMacAir/Library/Application Support/Fusetools/Fuse/Android/AndroidSDK/extras/android/support/v4/android-support-v4.jar"

##if #(Ant.Directory:IsSet)
PATH="/Users/JLMacAir/Library/Application Support/Fusetools/Fuse/Android/Ant/bin:$PATH"
##endif

echo "## 1/2: libDuckAlert.so"

if [ -f /proc/cpuinfo ]; then
    JOB_COUNT=`grep processor /proc/cpuinfo | wc -l`
else
    JOB_COUNT=`sysctl hw.ncpu | cut -d " " -f 2`
fi

./makew -s -j $JOB_COUNT "$@"

echo ""
echo "## 2/2: Duck-Alert.apk"

if [ -e "$SUPPORT_JAR" ]
then
    cp "$SUPPORT_JAR" "./libs/android-support-v4.jar"
else
    echo "ERROR: supportv4.jar was not found. Please run 'fuse install android' in your shell and then restart your build"
    echo "ERROR: expected jar at $SUPPORT_JAR"
    exit 1
fi

if ! which ant > /dev/null 2>&1; then
    echo "ERROR: 'ant' was not found." >&2
    exit 1
fi

ant debug

cd "`dirname "$0"`"
ln -sf Duck-Alert/app/src/main/bin/Duck-Alert-debug.apk Duck-Alert.apk
