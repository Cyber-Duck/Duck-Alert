// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Short4;}}

namespace g{
namespace Uno{

// public intrinsic struct Short4 :6536
// {
uStructType* Short4_typeof();
void Short4__ctor_1_fn(Short4* __this, int16_t* x, int16_t* y, int16_t* z, int16_t* w);
void Short4__Equals_fn(Short4* __this, uType* __type, uObject* o, bool* __retval);
void Short4__GetHashCode_fn(Short4* __this, uType* __type, int* __retval);
void Short4__New2_fn(int16_t* x, int16_t* y, int16_t* z, int16_t* w, Short4* __retval);
void Short4__ToString_fn(Short4* __this, uType* __type, uString** __retval);

struct Short4
{
    int16_t X;
    int16_t Y;
    int16_t Z;
    int16_t W;

    void ctor_1(int16_t x, int16_t y, int16_t z, int16_t w);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Short4__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Short4__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Short4__ToString_fn(this, __type, &__retval), __retval; }
};

Short4 Short4__New2(int16_t x, int16_t y, int16_t z, int16_t w);
// }

}} // ::g::Uno
