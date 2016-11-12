// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Entities.Component.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float3.h>
namespace g{namespace Fuse{namespace Entities{struct Light;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public abstract class Light :705
// {
struct Light_type : ::g::Fuse::Node_type
{
    void(*fp_Accept)(::g::Fuse::Entities::Light*, uObject*);
};

Light_type* Light_typeof();
void Light__ctor_4_fn(Light* __this);
void Light__Accept_fn(Light* __this, uObject* visitor);
void Light__get_CastShadow_fn(Light* __this, bool* __retval);
void Light__set_CastShadow_fn(Light* __this, bool* value);
void Light__get_Color_fn(Light* __this, ::g::Uno::Float3* __retval);
void Light__set_Color_fn(Light* __this, ::g::Uno::Float3* value);
void Light__get_Multiplier_fn(Light* __this, float* __retval);
void Light__set_Multiplier_fn(Light* __this, float* value);
void Light__get_Range_fn(Light* __this, float* __retval);
void Light__set_Range_fn(Light* __this, float* value);
void Light__get_ShadowMapDepthBias_fn(Light* __this, float* __retval);
void Light__set_ShadowMapDepthBias_fn(Light* __this, float* value);
void Light__get_ShadowMapNearPlane_fn(Light* __this, float* __retval);
void Light__set_ShadowMapNearPlane_fn(Light* __this, float* value);
void Light__get_ShadowMapResolution_fn(Light* __this, int* __retval);
void Light__set_ShadowMapResolution_fn(Light* __this, int* value);
void Light__get_ShowDesignerSprite_fn(Light* __this, bool* __retval);
void Light__set_ShowDesignerSprite_fn(Light* __this, bool* value);

struct Light : ::g::Fuse::Entities::Component
{
    bool showSprite;
    bool _CastShadow;
    ::g::Uno::Float3 _Color;
    float _Multiplier;
    float _Range;
    float _ShadowMapDepthBias;
    float _ShadowMapNearPlane;
    int _ShadowMapResolution;

    void ctor_4();
    void Accept(uObject* visitor) { (((Light_type*)__type)->fp_Accept)(this, visitor); }
    bool CastShadow();
    void CastShadow(bool value);
    ::g::Uno::Float3 Color();
    void Color(::g::Uno::Float3 value);
    float Multiplier();
    void Multiplier(float value);
    float Range();
    void Range(float value);
    float ShadowMapDepthBias();
    void ShadowMapDepthBias(float value);
    float ShadowMapNearPlane();
    void ShadowMapNearPlane(float value);
    int ShadowMapResolution();
    void ShadowMapResolution(int value);
    bool ShowDesignerSprite();
    void ShowDesignerSprite(bool value);
    static void Accept(Light* __this, uObject* visitor) { Light__Accept_fn(__this, visitor); }
};
// }

}}} // ::g::Fuse::Entities
