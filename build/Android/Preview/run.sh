#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/targets/android/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Android Studio"
    open -a"Android Studio" "Duck-Alert"
    exit $?
    ;;
esac

/Applications/Fuse.app/Contents/Mono/bin/mono /Applications/Fuse.app/Contents/Uno/uno.exe launch-apk "Duck-Alert.apk" \
    --package=com.apps.duckalert \
    --activity=DuckAlert \
    --sym-dir="Duck-Alert/app/src/main/.uno" \
    "$@"
