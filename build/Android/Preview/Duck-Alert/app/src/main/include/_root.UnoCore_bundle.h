// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/.uno/package.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{struct UnoCore_bundle;}

namespace g{

// public static generated class UnoCore_bundle :0
// {
uClassType* UnoCore_bundle_typeof();

struct UnoCore_bundle : uObject
{
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> SdfFontShaderc4d110ba_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& SdfFontShaderc4d110ba() { return UnoCore_bundle_typeof()->Init(), SdfFontShaderc4d110ba_; }
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> SpriteFontShader901b6a86_;
    static uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*>& SpriteFontShader901b6a86() { return UnoCore_bundle_typeof()->Init(), SpriteFontShader901b6a86_; }
};
// }

} // ::g
