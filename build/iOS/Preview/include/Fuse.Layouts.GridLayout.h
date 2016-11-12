// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/0.40.8/layouts/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.Layout.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Layouts{struct GridLayout;}}}
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class GridLayout :1049
// {
::g::Fuse::Layouts::Layout_type* GridLayout_typeof();
void GridLayout__ctor_2_fn(GridLayout* __this);
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp);
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value);
void GridLayout__Changed_fn(GridLayout* __this);
void GridLayout__ColumnAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::Column* c);
void GridLayout__get_ColumnCount_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ColumnCount_fn(GridLayout* __this, int* value);
void GridLayout__get_ColumnData_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_ColumnData_fn(GridLayout* __this, uString* value);
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval);
void GridLayout__ColumnRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::Column* c);
void GridLayout__get_Columns_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_Columns_fn(GridLayout* __this, uString* value);
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int* value);
void GridLayout__get_DefaultColumn_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_DefaultColumn_fn(GridLayout* __this, uString* value);
void GridLayout__get_DefaultRow_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_DefaultRow_fn(GridLayout* __this, uString* value);
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval);
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int* __retval);
void GridLayout__GenDefaultColumn_fn(GridLayout* __this, ::g::Fuse::Layouts::Column** __retval);
void GridLayout__GenDefaultRow_fn(GridLayout* __this, ::g::Fuse::Layouts::Row** __retval);
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetActualPositions_fn(GridLayout* __this, uObject* elements);
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetColumn_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetColumnData_fn(GridLayout* __this, int* column, ::g::Fuse::Layouts::Column** __retval);
void GridLayout__GetColumnSpan_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetContentSize_fn(GridLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void GridLayout__GetRow_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__GetRowData_fn(GridLayout* __this, int* row, ::g::Fuse::Layouts::Row** __retval);
void GridLayout__GetRowSpan_fn(::g::Fuse::Visual* elm, int* __retval);
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* __retval);
void GridLayout__Measure_fn(GridLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void GridLayout__New2_fn(GridLayout** __retval);
void GridLayout__ResetColumn_fn(::g::Fuse::Visual* elm);
void GridLayout__ResetColumnSpan_fn(::g::Fuse::Visual* elm);
void GridLayout__ResetRow_fn(::g::Fuse::Visual* elm);
void GridLayout__ResetRowSpan_fn(::g::Fuse::Visual* elm);
void GridLayout__RowAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::Row* r);
void GridLayout__get_RowCount_fn(GridLayout* __this, int* __retval);
void GridLayout__set_RowCount_fn(GridLayout* __this, int* value);
void GridLayout__get_RowData_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_RowData_fn(GridLayout* __this, uString* value);
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval);
void GridLayout__RowRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::Row* r);
void GridLayout__get_Rows_fn(GridLayout* __this, uString** __retval);
void GridLayout__set_Rows_fn(GridLayout* __this, uString* value);
void GridLayout__SetColumn_fn(::g::Fuse::Visual* elm, int* col);
void GridLayout__SetColumnSpan_fn(::g::Fuse::Visual* elm, int* span);
void GridLayout__SetRow_fn(::g::Fuse::Visual* elm, int* row);
void GridLayout__SetRowSpan_fn(::g::Fuse::Visual* elm, int* span);

struct GridLayout : ::g::Fuse::Layouts::Layout
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualColumnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualColumnProperty() { return GridLayout_typeof()->Init(), _actualColumnProperty_; }
    static uSStrong< ::g::Fuse::PropertyHandle*> _actualRowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _actualRowProperty() { return GridLayout_typeof()->Init(), _actualRowProperty_; }
    float _cellSpacing;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnProperty() { return GridLayout_typeof()->Init(), _columnProperty_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _columns;
    static uSStrong< ::g::Fuse::PropertyHandle*> _columnSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _columnSpanProperty() { return GridLayout_typeof()->Init(), _columnSpanProperty_; }
    int _contentAlignment;
    uStrong< ::g::Fuse::Layouts::Column*> _defaultColumn;
    uStrong< ::g::Fuse::Layouts::Row*> _defaultRow;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowProperty() { return GridLayout_typeof()->Init(), _rowProperty_; }
    uStrong< ::g::Uno::Collections::ObservableList*> _rows;
    static uSStrong< ::g::Fuse::PropertyHandle*> _rowSpanProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _rowSpanProperty() { return GridLayout_typeof()->Init(), _rowSpanProperty_; }
    static uSStrong< ::g::Fuse::Layouts::Column*> _staticDefaultColumn_;
    static uSStrong< ::g::Fuse::Layouts::Column*>& _staticDefaultColumn() { return GridLayout_typeof()->Init(), _staticDefaultColumn_; }
    static uSStrong< ::g::Fuse::Layouts::Row*> _staticDefaultRow_;
    static uSStrong< ::g::Fuse::Layouts::Row*>& _staticDefaultRow() { return GridLayout_typeof()->Init(), _staticDefaultRow_; }

    void ctor_2();
    float CellSpacing();
    void CellSpacing(float value);
    void Changed();
    void ColumnAdded(::g::Fuse::Layouts::Column* c);
    int ColumnCount();
    void ColumnCount(int value);
    uString* ColumnData();
    void ColumnData(uString* value);
    uObject* ColumnList();
    void ColumnRemoved(::g::Fuse::Layouts::Column* c);
    uString* Columns();
    void Columns(uString* value);
    int ContentAlignment();
    void ContentAlignment(int value);
    uString* DefaultColumn();
    void DefaultColumn(uString* value);
    uString* DefaultRow();
    void DefaultRow(uString* value);
    float EffectiveCellSpacing();
    int EffectiveContentAlignment();
    ::g::Fuse::Layouts::Column* GenDefaultColumn();
    ::g::Fuse::Layouts::Row* GenDefaultRow();
    int GetActualColumn(::g::Fuse::Visual* elm);
    void GetActualPositions(uObject* elements);
    int GetActualRow(::g::Fuse::Visual* elm);
    ::g::Fuse::Layouts::Column* GetColumnData(int column);
    ::g::Fuse::Layouts::Row* GetRowData(int row);
    ::g::Uno::Float2 Measure(uObject* elements, ::g::Fuse::LayoutParams lp);
    void RowAdded(::g::Fuse::Layouts::Row* r);
    int RowCount();
    void RowCount(int value);
    uString* RowData();
    void RowData(uString* value);
    uObject* RowList();
    void RowRemoved(::g::Fuse::Layouts::Row* r);
    uString* Rows();
    void Rows(uString* value);
    static int GetColumn(::g::Fuse::Visual* elm);
    static int GetColumnSpan(::g::Fuse::Visual* elm);
    static int GetRow(::g::Fuse::Visual* elm);
    static int GetRowSpan(::g::Fuse::Visual* elm);
    static GridLayout* New2();
    static void ResetColumn(::g::Fuse::Visual* elm);
    static void ResetColumnSpan(::g::Fuse::Visual* elm);
    static void ResetRow(::g::Fuse::Visual* elm);
    static void ResetRowSpan(::g::Fuse::Visual* elm);
    static void SetColumn(::g::Fuse::Visual* elm, int col);
    static void SetColumnSpan(::g::Fuse::Visual* elm, int span);
    static void SetRow(::g::Fuse::Visual* elm, int row);
    static void SetRowSpan(::g::Fuse::Visual* elm, int span);
};
// }

}}} // ::g::Fuse::Layouts
