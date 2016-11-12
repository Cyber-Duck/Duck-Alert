#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/targets/ios/run.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

##if #(Cocoapods:Defined)
#pod install
##endif

case $1 in
debug)
    echo "Opening Xcode"
##if #(Cocoapods:Defined)
#    open -aXcode "#(Project.Name).xcworkspace"
##else
    open -aXcode "Duck-Alert.xcodeproj"
##endif
    exit $?
    ;;
esac

##if #(Cocoapods:Defined)
#"#(Base.Directory)/bin/ios-deploy" --noninteractive --debug --bundle "build/Build/Products/#(Pbxproj.Configuration)-iphoneos/#(Project.Name).app" "$#"
##else
"/usr/local/share/uno/Packages/UnoCore/0.40.2/prebuilt/iOS/bin/ios-deploy" --noninteractive --debug --bundle "build/Release-iphoneos/Duck-Alert.app" "$@"
##endif
