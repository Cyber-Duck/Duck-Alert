// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.40.8/layouts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Column :856
// {
uType* Column_typeof();
void Column__ctor_2_fn(Column* __this);
void Column__ctor_3_fn(Column* __this, float* width, int* metric);
void Column__get_ActualWidth_fn(Column* __this, float* __retval);
void Column__set_ActualWidth_fn(Column* __this, float* value);
void Column__CloneDef_fn(Column* __this, Column** __retval);
void Column__New2_fn(Column** __retval);
void Column__New3_fn(float* width, int* metric, Column** __retval);
void Column__Parse_fn(uString* data, Column** __retval);
void Column__Parse1_fn(uString* data, uObject* output);
void Column__Serialize_fn(Column* __this, uString** __retval);
void Column__Serialize1_fn(uObject* columns, uString** __retval);
void Column__get_Width_fn(Column* __this, float* __retval);
void Column__set_Width_fn(Column* __this, float* value);
void Column__get_WidthMetric_fn(Column* __this, int* __retval);
void Column__set_WidthMetric_fn(Column* __this, int* value);

struct Column : ::g::Fuse::Layouts::DefinitionBase
{
    float _actualWidth;
    float _width;
    int _widthMetric;

    void ctor_2();
    void ctor_3(float width, int metric);
    float ActualWidth();
    void ActualWidth(float value);
    Column* CloneDef();
    uString* Serialize();
    float Width();
    void Width(float value);
    int WidthMetric();
    void WidthMetric(int value);
    static Column* New2();
    static Column* New3(float width, int metric);
    static Column* Parse(uString* data);
    static void Parse1(uString* data, uObject* output);
    static uString* Serialize1(uObject* columns);
};
// }

}}} // ::g::Fuse::Layouts
