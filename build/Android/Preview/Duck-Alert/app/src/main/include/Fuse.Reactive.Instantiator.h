// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.ITemplateObserver.h>
#include <Fuse.Scripting.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Instantiator;}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class Instantiator :820
// {
struct Instantiator_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Scripting::IObserver interface4;
    ::g::Fuse::ITemplateObserver interface5;
};

Instantiator_type* Instantiator_typeof();
void Instantiator__ctor_3_fn(Instantiator* __this);
void Instantiator__ctor_4_fn(Instantiator* __this, uObject* templates);
void Instantiator__AddNew_fn(Instantiator* __this);
void Instantiator__AddTemplate_fn(Instantiator* __this, ::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements);
void Instantiator__FuseITemplateObserverOnTemplatesChangedWileRooted_fn(Instantiator* __this);
void Instantiator__FuseScriptingIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue);
void Instantiator__FuseScriptingIObserverOnClear_fn(Instantiator* __this);
void Instantiator__FuseScriptingIObserverOnFailed_fn(Instantiator* __this, uString* message);
void Instantiator__FuseScriptingIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseScriptingIObserverOnNewAll_fn(Instantiator* __this, ::g::Fuse::Scripting::ListMirror* values);
void Instantiator__FuseScriptingIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value);
void Instantiator__FuseScriptingIObserverOnRemoveAt_fn(Instantiator* __this, int* index);
void Instantiator__FuseScriptingIObserverOnSet_fn(Instantiator* __this, uObject* newValue);
void Instantiator__GetData_fn(Instantiator* __this, int* index, uObject** __retval);
void Instantiator__GetImplicitDataForChild_fn(Instantiator* __this, ::g::Fuse::Node* n, ::g::Uno::Collections::List* result);
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* index, ::g::Fuse::Node** __retval);
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval);
void Instantiator__GetMatchKey_fn(Instantiator* __this, int* index, uString** __retval);
void Instantiator__IndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int* __retval);
void Instantiator__InsertNew_fn(Instantiator* __this, int* index);
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value);
void Instantiator__New2_fn(Instantiator** __retval);
void Instantiator__New3_fn(uObject* templates, Instantiator** __retval);
void Instantiator__OnItemsChanged_fn(Instantiator* __this);
void Instantiator__OnRooted_fn(Instantiator* __this);
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory);
void Instantiator__OnUnrooted_fn(Instantiator* __this);
void Instantiator__RemoveAll_fn(Instantiator* __this);
void Instantiator__RemoveAt_fn(Instantiator* __this, int* index);
void Instantiator__ReplaceAll_fn(Instantiator* __this, uArray* dcs);
void Instantiator__Repopulate_fn(Instantiator* __this);
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message);
void Instantiator__SetValid_fn(Instantiator* __this);
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval);
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value);
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval);
void Instantiator__get_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual** __retval);
void Instantiator__set_TemplateSource_fn(Instantiator* __this, ::g::Fuse::Visual* value);

struct Instantiator : ::g::Fuse::Behavior
{
    int _count;
    uStrong<uObject*> _items;
    bool _listening;
    uStrong<uString*> _matchKey;
    uStrong< ::g::Uno::Collections::List*> _nodes;
    uStrong<uObject*> _subscription;
    uStrong<uObject*> _templates;
    uStrong<uString*> _TemplateKey;
    uStrong< ::g::Fuse::Visual*> _TemplateSource;

    void ctor_3();
    void ctor_4(uObject* templates);
    void AddNew();
    void AddTemplate(::g::Uno::UX::Template* f, ::g::Uno::Collections::List* newElements);
    uObject* GetData(int index);
    ::g::Fuse::Node* GetLastNodeFromIndex(int index);
    uString* GetMatchKey(int index);
    int IndexOfChild(::g::Fuse::Node* child);
    void InsertNew(int index);
    uString* MatchKey();
    void MatchKey(uString* value);
    void OnItemsChanged();
    void OnTemplatesChanged(::g::Uno::UX::Template* factory);
    void RemoveAll();
    void RemoveAt(int index);
    void ReplaceAll(uArray* dcs);
    void Repopulate();
    void SetFailed(uString* message);
    void SetValid();
    uString* TemplateKey();
    void TemplateKey(uString* value);
    uObject* Templates();
    ::g::Fuse::Visual* TemplateSource();
    void TemplateSource(::g::Fuse::Visual* value);
    static Instantiator* New2();
    static Instantiator* New3(uObject* templates);
};
// }

}}} // ::g::Fuse::Reactive
