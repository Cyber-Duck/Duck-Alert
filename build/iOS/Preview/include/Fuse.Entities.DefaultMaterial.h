// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Entities.Material.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Entities{struct DefaultMaterial;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class DefaultMaterial :24
// {
uType* DefaultMaterial_typeof();
void DefaultMaterial__ctor_2_fn(DefaultMaterial* __this);
void DefaultMaterial__get_DiffuseColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval);
void DefaultMaterial__set_DiffuseColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value);
void DefaultMaterial__get_DiffuseMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval);
void DefaultMaterial__set_DiffuseMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value);
void DefaultMaterial__get_EmissiveColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval);
void DefaultMaterial__set_EmissiveColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value);
void DefaultMaterial__get_EmissiveMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval);
void DefaultMaterial__set_EmissiveMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value);
void DefaultMaterial__get_IsEmissive_fn(DefaultMaterial* __this, bool* __retval);
void DefaultMaterial__set_IsEmissive_fn(DefaultMaterial* __this, bool* value);
void DefaultMaterial__New2_fn(DefaultMaterial** __retval);
void DefaultMaterial__get_NormalMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval);
void DefaultMaterial__set_NormalMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value);
void DefaultMaterial__get_Offset_fn(DefaultMaterial* __this, ::g::Uno::Float2* __retval);
void DefaultMaterial__set_Offset_fn(DefaultMaterial* __this, ::g::Uno::Float2* value);
void DefaultMaterial__get_Shininess_fn(DefaultMaterial* __this, float* __retval);
void DefaultMaterial__set_Shininess_fn(DefaultMaterial* __this, float* value);
void DefaultMaterial__get_SpecularColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* __retval);
void DefaultMaterial__set_SpecularColor_fn(DefaultMaterial* __this, ::g::Uno::Float3* value);
void DefaultMaterial__get_SpecularMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D** __retval);
void DefaultMaterial__set_SpecularMap_fn(DefaultMaterial* __this, ::g::Uno::Graphics::Texture2D* value);
void DefaultMaterial__get_Tiling_fn(DefaultMaterial* __this, ::g::Uno::Float2* __retval);
void DefaultMaterial__set_Tiling_fn(DefaultMaterial* __this, ::g::Uno::Float2* value);

struct DefaultMaterial : ::g::Fuse::Entities::Material
{
    ::g::Uno::Float3 _DiffuseColor;
    uStrong< ::g::Uno::Graphics::Texture2D*> _DiffuseMap;
    ::g::Uno::Float3 _EmissiveColor;
    uStrong< ::g::Uno::Graphics::Texture2D*> _EmissiveMap;
    bool _IsEmissive;
    uStrong< ::g::Uno::Graphics::Texture2D*> _NormalMap;
    ::g::Uno::Float2 _Offset;
    float _Shininess;
    ::g::Uno::Float3 _SpecularColor;
    uStrong< ::g::Uno::Graphics::Texture2D*> _SpecularMap;
    ::g::Uno::Float2 _Tiling;

    void ctor_2();
    ::g::Uno::Float3 DiffuseColor();
    void DiffuseColor(::g::Uno::Float3 value);
    ::g::Uno::Graphics::Texture2D* DiffuseMap();
    void DiffuseMap(::g::Uno::Graphics::Texture2D* value);
    ::g::Uno::Float3 EmissiveColor();
    void EmissiveColor(::g::Uno::Float3 value);
    ::g::Uno::Graphics::Texture2D* EmissiveMap();
    void EmissiveMap(::g::Uno::Graphics::Texture2D* value);
    bool IsEmissive();
    void IsEmissive(bool value);
    ::g::Uno::Graphics::Texture2D* NormalMap();
    void NormalMap(::g::Uno::Graphics::Texture2D* value);
    ::g::Uno::Float2 Offset();
    void Offset(::g::Uno::Float2 value);
    float Shininess();
    void Shininess(float value);
    ::g::Uno::Float3 SpecularColor();
    void SpecularColor(::g::Uno::Float3 value);
    ::g::Uno::Graphics::Texture2D* SpecularMap();
    void SpecularMap(::g::Uno::Graphics::Texture2D* value);
    ::g::Uno::Float2 Tiling();
    void Tiling(::g::Uno::Float2 value);
    static DefaultMaterial* New2();
};
// }

}}} // ::g::Fuse::Entities
