// This file was generated based on /usr/local/share/uno/Packages/Fuse.Gestures/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
namespace g{namespace Fuse{namespace Entities{struct Transform3D;}}}
namespace g{namespace Fuse{namespace Gestures{struct Trackball;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class Trackball :1522
// {
::g::Fuse::Node_type* Trackball_typeof();
void Trackball__ctor_3_fn(Trackball* __this);
void Trackball__BringToFront_fn(Trackball* __this, ::g::Uno::Float3* normal);
void Trackball__CheckNeedUpdate_fn(Trackball* __this);
void Trackball__get_ForwardVector_fn(Trackball* __this, ::g::Uno::Float3* __retval);
void Trackball__set_ForwardVector_fn(Trackball* __this, ::g::Uno::Float3* value);
void Trackball__get_InverseViewProjection_fn(Trackball* __this, ::g::Uno::Float4x4* __retval);
void Trackball__New2_fn(Trackball** __retval);
void Trackball__OnLostCapture_fn(Trackball* __this);
void Trackball__OnPointerMoved_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerMovedArgs* args);
void Trackball__OnPointerPressed_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerPressedArgs* args);
void Trackball__OnPointerReleased_fn(Trackball* __this, uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args);
void Trackball__OnRooted_fn(Trackball* __this);
void Trackball__OnUnrooted_fn(Trackball* __this);
void Trackball__OnUpdate_fn(Trackball* __this);
void Trackball__get_Viewport_fn(Trackball* __this, uObject** __retval);
void Trackball__set_Viewport_fn(Trackball* __this, uObject* value);

struct Trackball : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _angularVelocity;
    uStrong<uObject*> _attractor;
    bool _captured;
    ::g::Uno::Float3 _forwardVector;
    uStrong<uObject*> _friction;
    ::g::Uno::Float4 _frictionQ;
    ::g::Uno::Float3 _frictionVector;
    bool _hasViewport;
    bool _haveUpdate;
    int _moveMode;
    int _pressIndex;
    ::g::Uno::Float4x4 _pressInvView;
    ::g::Uno::Float2 _pressLoc;
    ::g::Uno::Float4 _pressQ;
    float _prevAngular;
    float _radius;
    bool _soft;
    uStrong< ::g::Fuse::Entities::Transform3D*> _transform;
    uStrong<uObject*> _viewport;

    void ctor_3();
    void BringToFront(::g::Uno::Float3 normal);
    void CheckNeedUpdate();
    ::g::Uno::Float3 ForwardVector();
    void ForwardVector(::g::Uno::Float3 value);
    ::g::Uno::Float4x4 InverseViewProjection();
    void OnLostCapture();
    void OnPointerMoved(uObject* s, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* s, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* s, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnUpdate();
    uObject* Viewport();
    void Viewport(uObject* value);
    static Trackball* New2();
};
// }

}}} // ::g::Fuse::Gestures
