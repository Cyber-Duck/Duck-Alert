// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.40.8/layouts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Row :953
// {
uType* Row_typeof();
void Row__ctor_2_fn(Row* __this);
void Row__ctor_3_fn(Row* __this, float* height, int* metric);
void Row__get_ActualHeight_fn(Row* __this, float* __retval);
void Row__set_ActualHeight_fn(Row* __this, float* value);
void Row__CloneDef_fn(Row* __this, Row** __retval);
void Row__get_Height_fn(Row* __this, float* __retval);
void Row__set_Height_fn(Row* __this, float* value);
void Row__get_HeightMetric_fn(Row* __this, int* __retval);
void Row__set_HeightMetric_fn(Row* __this, int* value);
void Row__New2_fn(Row** __retval);
void Row__New3_fn(float* height, int* metric, Row** __retval);
void Row__Parse_fn(uString* data, Row** __retval);
void Row__Parse1_fn(uString* data, uObject* output);
void Row__Serialize_fn(Row* __this, uString** __retval);
void Row__Serialize1_fn(uObject* rows, uString** __retval);

struct Row : ::g::Fuse::Layouts::DefinitionBase
{
    float _actualHeight;
    float _height;
    int _heightMetric;

    void ctor_2();
    void ctor_3(float height, int metric);
    float ActualHeight();
    void ActualHeight(float value);
    Row* CloneDef();
    float Height();
    void Height(float value);
    int HeightMetric();
    void HeightMetric(int value);
    uString* Serialize();
    static Row* New2();
    static Row* New3(float height, int metric);
    static Row* Parse(uString* data);
    static void Parse1(uString* data, uObject* output);
    static uString* Serialize1(uObject* rows);
};
// }

}}} // ::g::Fuse::Layouts
