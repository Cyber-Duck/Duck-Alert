// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Collision2D.h>
#include <Uno.Geometry.CubicBezier.h>
#include <Uno.Geometry.Frustum.h>
#include <Uno.Geometry.Plane.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Geometry.Sphere.h>
#include <Uno.Geometry.Triangle.h>
#include <Uno.Geometry.Triangle2D.h>
#include <Uno.Geometry.Vertex.h>
#include <Uno.Geometry.VertexEnumerable.h>
#include <Uno.Geometry.VertexEnumerator.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Vector.h>

namespace g{
namespace Uno{
namespace Geometry{

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public struct Box :5
// {
static void Box_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Minimum), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Maximum), 0);
    type->Reflection.SetFields(2,
        new uField("Maximum", 1),
        new uField("Minimum", 0));
    type->Reflection.SetFunctions(2,
        new uFunction("get_Center", NULL, (void*)Box__get_Center_fn, 0, false, ::g::Uno::Float3_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Box__New1_fn, 0, true, Box_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()));
}

uStructType* Box_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Box);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Box", options);
    type->fp_build_ = Box_build;
    return type;
}

// public Box(float3 min, float3 max) :9
void Box__ctor__fn(Box* __this, ::g::Uno::Float3* min, ::g::Uno::Float3* max)
{
    __this->ctor_(*min, *max);
}

// public float3 get_Center() :17
void Box__get_Center_fn(Box* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Center();
}

// public Box New(float3 min, float3 max) :9
void Box__New1_fn(::g::Uno::Float3* min, ::g::Uno::Float3* max, Box* __retval)
{
    *__retval = Box__New1(*min, *max);
}

// public Box(float3 min, float3 max) [instance] :9
void Box::ctor_(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    uStackFrame __("Uno.Geometry.Box", ".ctor(float3,float3)");
    Minimum = min;
    Maximum = max;
}

// public float3 get_Center() [instance] :17
::g::Uno::Float3 Box::Center()
{
    uStackFrame __("Uno.Geometry.Box", "get_Center()");
    return ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Addition2(Minimum, Maximum), 0.5f);
}

// public Box New(float3 min, float3 max) [static] :9
Box Box__New1(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Box obj9;
    obj9.ctor_(min, max);
    return obj9;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public static class Collision :42
// {
static void Collision_build(uType* type)
{
    type->Reflection.SetFunctions(3,
        new uFunction("RayIntersectsBox", NULL, (void*)Collision__RayIntersectsBox_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Geometry::Ray_typeof(), ::g::Uno::Geometry::Box_typeof(), ::g::Uno::Float_typeof()->ByRef()),
        new uFunction("RayIntersectsSphere", NULL, (void*)Collision__RayIntersectsSphere_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Geometry::Ray_typeof(), ::g::Uno::Geometry::Sphere_typeof(), ::g::Uno::Float_typeof()->ByRef()),
        new uFunction("RayIntersectsTriangle", NULL, (void*)Collision__RayIntersectsTriangle_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Geometry::Ray_typeof(), ::g::Uno::Geometry::Triangle_typeof(), ::g::Uno::Float_typeof()->ByRef()));
}

uClassType* Collision_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Geometry.Collision", options);
    type->fp_build_ = Collision_build;
    return type;
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) :431
void Collision__RayIntersectsBox_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Box* box, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsBox(*ray, *box, distance);
}

// public static bool RayIntersectsSphere(Uno.Geometry.Ray ray, Uno.Geometry.Sphere sphere, float& distance) :548
void Collision__RayIntersectsSphere_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Sphere* sphere, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsSphere(*ray, *sphere, distance);
}

// public static bool RayIntersectsTriangle(Uno.Geometry.Ray ray, Uno.Geometry.Triangle triangle, float& distance) :343
void Collision__RayIntersectsTriangle_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Triangle* triangle, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsTriangle(*ray, *triangle, distance);
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) [static] :431
bool Collision::RayIntersectsBox(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Box box, float* distance)
{
    uStackFrame __("Uno.Geometry.Collision", "RayIntersectsBox(Uno.Geometry.Ray,Uno.Geometry.Box,float&)");
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::g::Uno::Math::Abs1(ray.Direction.X) < 1e-05f)
    {
        if ((ray.Position.X < box.Minimum.X) || (ray.Position.X > box.Maximum.X))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else 
    {
        float inverse = 1.0f / ray.Direction.X;
        float t1 = (box.Minimum.X - ray.Position.X) * inverse;
        float t2 = (box.Maximum.X - ray.Position.X) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::g::Uno::Math::Max1(t1, *distance);
        tmax = ::g::Uno::Math::Min1(t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else 
    {
        float inverse1 = 1.0f / ray.Direction.Y;
        float t11 = (box.Minimum.Y - ray.Position.Y) * inverse1;
        float t21 = (box.Maximum.Y - ray.Position.Y) * inverse1;

        if (t11 > t21)
        {
            float temp1 = t11;
            t11 = t21;
            t21 = temp1;
        }

        *distance = ::g::Uno::Math::Max1(t11, *distance);
        tmax = ::g::Uno::Math::Min1(t21, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else 
    {
        float inverse2 = 1.0f / ray.Direction.Z;
        float t12 = (box.Minimum.Z - ray.Position.Z) * inverse2;
        float t22 = (box.Maximum.Z - ray.Position.Z) * inverse2;

        if (t12 > t22)
        {
            float temp2 = t12;
            t12 = t22;
            t22 = temp2;
        }

        *distance = ::g::Uno::Math::Max1(t12, *distance);
        tmax = ::g::Uno::Math::Min1(t22, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}

// public static bool RayIntersectsSphere(Uno.Geometry.Ray ray, Uno.Geometry.Sphere sphere, float& distance) [static] :548
bool Collision::RayIntersectsSphere(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Sphere sphere, float* distance)
{
    uStackFrame __("Uno.Geometry.Collision", "RayIntersectsSphere(Uno.Geometry.Ray,Uno.Geometry.Sphere,float&)");
    ::g::Uno::Float3 v = ::g::Uno::Float3__op_Subtraction2(ray.Position, sphere.Center);
    float b = ::g::Uno::Vector::Dot1(v, ray.Direction);
    float c = ::g::Uno::Vector::Dot1(v, v) - (sphere.Radius * sphere.Radius);

    if ((c > 0.0f) && (b > 0.0f))
    {
        *distance = 0.0f;
        return false;
    }

    float discriminant = (b * b) - c;

    if (discriminant < 0.0f)
    {
        *distance = 0.0f;
        return false;
    }

    *distance = -b - ::g::Uno::Math::Sqrt1(discriminant);

    if (*distance < 0.0f)
        *distance = 0.0f;

    return true;
}

// public static bool RayIntersectsTriangle(Uno.Geometry.Ray ray, Uno.Geometry.Triangle triangle, float& distance) [static] :343
bool Collision::RayIntersectsTriangle(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Triangle triangle, float* distance)
{
    uStackFrame __("Uno.Geometry.Collision", "RayIntersectsTriangle(Uno.Geometry.Ray,Uno.Geometry.Triangle,float&)");
    ::g::Uno::Float3 edge1 = ::g::Uno::Float3__op_Subtraction2(triangle.B, triangle.A);
    ::g::Uno::Float3 edge2 = ::g::Uno::Float3__op_Subtraction2(triangle.C, triangle.A);
    ::g::Uno::Float3 directioncrossedge2 = ::g::Uno::Vector::Cross(ray.Direction, edge2);
    float determinant;
    determinant = ::g::Uno::Vector::Dot1(edge1, directioncrossedge2);

    if ((determinant > -1e-05f) && (determinant < 1e-05f))
    {
        *distance = 0.0f;
        return false;
    }

    float inversedeterminant = 1.0f / determinant;
    ::g::Uno::Float3 distanceVector = ::g::Uno::Float3__op_Subtraction2(ray.Position, triangle.A);
    float triangleU;
    triangleU = ::g::Uno::Vector::Dot1(distanceVector, directioncrossedge2);
    triangleU = triangleU * inversedeterminant;

    if ((triangleU < 0.0f) || (triangleU > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    ::g::Uno::Float3 distancecrossedge1 = ::g::Uno::Vector::Cross(distanceVector, edge1);
    float triangleV;
    triangleV = ::g::Uno::Vector::Dot1(ray.Direction, distancecrossedge1);
    triangleV = triangleV * inversedeterminant;

    if ((triangleV < 0.0f) || ((triangleU + triangleV) > 1.0f))
    {
        *distance = 0.0f;
        return false;
    }

    float raydistance;
    raydistance = ::g::Uno::Vector::Dot1(edge2, distancecrossedge1);
    raydistance = raydistance * inversedeterminant;

    if (raydistance < 0.0f)
    {
        *distance = 0.0f;
        return false;
    }

    *distance = raydistance;
    return true;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public static class Collision2D :1195
// {
static void Collision2D_build(uType* type)
{
    type->Reflection.SetFunctions(3,
        new uFunction("AngleBetween", NULL, (void*)Collision2D__AngleBetween_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("LineIntersectionPointVector", NULL, (void*)Collision2D__LineIntersectionPointVector_fn, 0, true, ::g::Uno::Float2_typeof(), 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("TriangleContainsPoint", NULL, (void*)Collision2D__TriangleContainsPoint_fn, 0, true, ::g::Uno::Bool_typeof(), 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()));
}

uClassType* Collision2D_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Geometry.Collision2D", options);
    type->fp_build_ = Collision2D_build;
    return type;
}

// public static float AngleBetween(float2 a, float2 b) :1302
void Collision2D__AngleBetween_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = Collision2D::AngleBetween(*a, *b);
}

// public static float2 LineIntersectionPointVector(float2 ps1, float2 v1, float2 ps2, float2 v2) :1272
void Collision2D__LineIntersectionPointVector_fn(::g::Uno::Float2* ps1, ::g::Uno::Float2* v1, ::g::Uno::Float2* ps2, ::g::Uno::Float2* v2, ::g::Uno::Float2* __retval)
{
    *__retval = Collision2D::LineIntersectionPointVector(*ps1, *v1, *ps2, *v2);
}

// public static bool TriangleContainsPoint(float2 A, float2 B, float2 C, float2 P) :1246
void Collision2D__TriangleContainsPoint_fn(::g::Uno::Float2* A, ::g::Uno::Float2* B, ::g::Uno::Float2* C, ::g::Uno::Float2* P, bool* __retval)
{
    *__retval = Collision2D::TriangleContainsPoint(*A, *B, *C, *P);
}

// public static float AngleBetween(float2 a, float2 b) [static] :1302
float Collision2D::AngleBetween(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    uStackFrame __("Uno.Geometry.Collision2D", "AngleBetween(float2,float2)");
    float d = ::g::Uno::Vector::Dot(a, b);
    float l = ::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b);

    if (l < 1e-05f)
        return 0.0f;

    return ::g::Uno::Math::Acos1(d / l);
}

// public static float2 LineIntersectionPointVector(float2 ps1, float2 v1, float2 ps2, float2 v2) [static] :1272
::g::Uno::Float2 Collision2D::LineIntersectionPointVector(::g::Uno::Float2 ps1, ::g::Uno::Float2 v1, ::g::Uno::Float2 ps2, ::g::Uno::Float2 v2)
{
    uStackFrame __("Uno.Geometry.Collision2D", "LineIntersectionPointVector(float2,float2,float2,float2)");
    float A1 = v1.Y;
    float B1 = -v1.X;
    float C1 = (A1 * ps1.X) + (B1 * ps1.Y);
    float A2 = v2.Y;
    float B2 = -v2.X;
    float C2 = (A2 * ps2.X) + (B2 * ps2.Y);
    float delta = (A1 * B2) - (A2 * B1);

    if (::g::Uno::Math::Abs1(delta) < 1e-05f)
        return ps1;

    return ::g::Uno::Float2__New2(((B2 * C1) - (B1 * C2)) / delta, ((A1 * C2) - (A2 * C1)) / delta);
}

// public static bool TriangleContainsPoint(float2 A, float2 B, float2 C, float2 P) [static] :1246
bool Collision2D::TriangleContainsPoint(::g::Uno::Float2 A, ::g::Uno::Float2 B, ::g::Uno::Float2 C, ::g::Uno::Float2 P)
{
    uStackFrame __("Uno.Geometry.Collision2D", "TriangleContainsPoint(float2,float2,float2,float2)");
    ::g::Uno::Float2 v0 = ::g::Uno::Float2__op_Subtraction2(C, A);
    ::g::Uno::Float2 v1 = ::g::Uno::Float2__op_Subtraction2(B, A);
    ::g::Uno::Float2 v2 = ::g::Uno::Float2__op_Subtraction2(P, A);
    float dot00 = ::g::Uno::Vector::Dot(v0, v0);
    float dot01 = ::g::Uno::Vector::Dot(v0, v1);
    float dot02 = ::g::Uno::Vector::Dot(v0, v2);
    float dot11 = ::g::Uno::Vector::Dot(v1, v1);
    float dot12 = ::g::Uno::Vector::Dot(v1, v2);
    float denom = (dot00 * dot11) - (dot01 * dot01);

    if (denom < 1e-05f)
        return false;

    float invDenom = 1.0f / denom;
    float u = ((dot11 * dot02) - (dot01 * dot12)) * invDenom;
    float v = ((dot00 * dot12) - (dot01 * dot02)) * invDenom;
    bool r = ((u >= 0.0f) && (v >= 0.0f)) && ((u + v) < 1.0f);
    return r;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/curves/$.uno
// --------------------------------------------------------------

// public sealed class CubicBezier :12
// {
static void CubicBezier_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::CubicBezier, _head), 0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::CubicBezier, _last), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::CubicBezier, _maxErrorSquared), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Subdivide", NULL, (void*)CubicBezier__Subdivide_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), 5, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()));
}

uType* CubicBezier_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CubicBezier);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Geometry.CubicBezier", options);
    type->fp_build_ = CubicBezier_build;
    return type;
}

// private CubicBezier(float maxError) :27
void CubicBezier__ctor__fn(CubicBezier* __this, float* maxError)
{
    __this->ctor_(*maxError);
}

// private void AddPoint(float x, float y) :80
void CubicBezier__AddPoint_fn(CubicBezier* __this, float* x, float* y)
{
    __this->AddPoint(*x, *y);
}

// private CubicBezier New(float maxError) :27
void CubicBezier__New1_fn(float* maxError, CubicBezier** __retval)
{
    *__retval = CubicBezier::New1(*maxError);
}

// public static Uno.Collections.IEnumerable<float2> Subdivide(float2 p1, float2 p2, float2 p3, float2 p4, [float maxError]) :14
void CubicBezier__Subdivide_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* p3, ::g::Uno::Float2* p4, float* maxError, uObject** __retval)
{
    *__retval = CubicBezier::Subdivide(*p1, *p2, *p3, *p4, *maxError);
}

// private void SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, [int level]) :38
void CubicBezier__SubdivideRecursive_fn(CubicBezier* __this, float* x1, float* y1, float* x2, float* y2, float* x3, float* y3, float* x4, float* y4, int* level)
{
    __this->SubdivideRecursive(*x1, *y1, *x2, *y2, *x3, *y3, *x4, *y4, *level);
}

// private CubicBezier(float maxError) [instance] :27
void CubicBezier::ctor_(float maxError)
{
    uStackFrame __("Uno.Geometry.CubicBezier", ".ctor(float)");
    _head = (_last = ::g::Uno::Geometry::Vertex::New1());
    _maxErrorSquared = (maxError * maxError);
}

// private void AddPoint(float x, float y) [instance] :80
void CubicBezier::AddPoint(float x, float y)
{
    uStackFrame __("Uno.Geometry.CubicBezier", "AddPoint(float,float)");
    ::g::Uno::Geometry::Vertex* collection1;
    _last = (uPtr(_last)->Next = (collection1 = ::g::Uno::Geometry::Vertex::New1(), uPtr(collection1)->X = x, uPtr(collection1)->Y = y, collection1));
}

// private void SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, [int level]) [instance] :38
void CubicBezier::SubdivideRecursive(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int level)
{
    uStackFrame __("Uno.Geometry.CubicBezier", "SubdivideRecursive(float,float,float,float,float,float,float,float,[int])");

    if ((((((::g::Uno::Math::Abs1(x1 - x2) <= 1e-05f) && (::g::Uno::Math::Abs1(x2 - x3) <= 1e-05f)) && (::g::Uno::Math::Abs1(x3 - x4) <= 1e-05f)) && (::g::Uno::Math::Abs1(y1 - y2) <= 1e-05f)) && (::g::Uno::Math::Abs1(y2 - y3) <= 1e-05f)) && (::g::Uno::Math::Abs1(y3 - y4) <= 1e-05f))
        return;

    float x12 = (x1 + x2) / 2.0f;
    float y12 = (y1 + y2) / 2.0f;
    float x23 = (x2 + x3) / 2.0f;
    float y23 = (y2 + y3) / 2.0f;
    float x34 = (x3 + x4) / 2.0f;
    float y34 = (y3 + y4) / 2.0f;
    float x123 = (x12 + x23) / 2.0f;
    float y123 = (y12 + y23) / 2.0f;
    float x234 = (x23 + x34) / 2.0f;
    float y234 = (y23 + y34) / 2.0f;
    float x1234 = (x123 + x234) / 2.0f;
    float y1234 = (y123 + y234) / 2.0f;
    float dx = x4 - x1;
    float dy = y4 - y1;
    float d2 = ::g::Uno::Math::Abs1(((x2 - x4) * dy) - ((y2 - y4) * dx));
    float d3 = ::g::Uno::Math::Abs1(((x3 - x4) * dy) - ((y3 - y4) * dx));

    if (((d2 + d3) * (d2 + d3)) < (_maxErrorSquared * ((dx * dx) + (dy * dy))))
    {
        AddPoint(x1234, y1234);
        return;
    }

    SubdivideRecursive(x1, y1, x12, y12, x123, y123, x1234, y1234, level + 1);
    SubdivideRecursive(x1234, y1234, x234, y234, x34, y34, x4, y4, level + 1);
}

// private CubicBezier New(float maxError) [static] :27
CubicBezier* CubicBezier::New1(float maxError)
{
    CubicBezier* obj2 = (CubicBezier*)uNew(CubicBezier_typeof());
    obj2->ctor_(maxError);
    return obj2;
}

// public static Uno.Collections.IEnumerable<float2> Subdivide(float2 p1, float2 p2, float2 p3, float2 p4, [float maxError]) [static] :14
uObject* CubicBezier::Subdivide(::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2 p3, ::g::Uno::Float2 p4, float maxError)
{
    uStackFrame __("Uno.Geometry.CubicBezier", "Subdivide(float2,float2,float2,float2,[float])");
    CubicBezier* s = CubicBezier::New1(maxError);
    s->AddPoint(p1.X, p1.Y);
    s->SubdivideRecursive(p1.X, p1.Y, p2.X, p2.Y, p3.X, p3.Y, p4.X, p4.Y, 0);
    s->AddPoint(p4.X, p4.Y);
    return (uObject*)::g::Uno::Geometry::VertexEnumerable::New1(s->_head);
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public struct Frustum :1464
// {
static void Frustum_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Geometry::Plane_typeof(), offsetof(::g::Uno::Geometry::Frustum, Near), 0,
        ::g::Uno::Geometry::Plane_typeof(), offsetof(::g::Uno::Geometry::Frustum, Far), 0,
        ::g::Uno::Geometry::Plane_typeof(), offsetof(::g::Uno::Geometry::Frustum, Top), 0,
        ::g::Uno::Geometry::Plane_typeof(), offsetof(::g::Uno::Geometry::Frustum, Bottom), 0,
        ::g::Uno::Geometry::Plane_typeof(), offsetof(::g::Uno::Geometry::Frustum, Left), 0,
        ::g::Uno::Geometry::Plane_typeof(), offsetof(::g::Uno::Geometry::Frustum, Right), 0);
    type->Reflection.SetFields(6,
        new uField("Bottom", 3),
        new uField("Far", 1),
        new uField("Left", 4),
        new uField("Near", 0),
        new uField("Right", 5),
        new uField("Top", 2));
    type->Reflection.SetFunctions(1,
        new uFunction("Normalize", NULL, (void*)Frustum__Normalize_fn, 0, false, uVoid_typeof(), 0));
}

uStructType* Frustum_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ValueSize = sizeof(Frustum);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Frustum", options);
    type->fp_build_ = Frustum_build;
    return type;
}

// public void Normalize() :1477
void Frustum__Normalize_fn(Frustum* __this)
{
    __this->Normalize();
}

// public void Normalize() [instance] :1477
void Frustum::Normalize()
{
    uStackFrame __("Uno.Geometry.Frustum", "Normalize()");
    Near.Normalize();
    Far.Normalize();
    Top.Normalize();
    Bottom.Normalize();
    Left.Normalize();
    Right.Normalize();
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public struct Plane :1517
// {
static void Plane_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Plane, Normal), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::Plane, D), 0);
    type->Reflection.SetFields(2,
        new uField("D", 1),
        new uField("Normal", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Plane__New3_fn, 0, true, Plane_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Normalize", NULL, (void*)Plane__Normalize_fn, 0, false, uVoid_typeof(), 0));
}

uStructType* Plane_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Plane);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Plane", options);
    type->fp_build_ = Plane_build;
    return type;
}

// public Plane(float3 point, float3 normal) :1552
void Plane__ctor_2_fn(Plane* __this, ::g::Uno::Float3* point, ::g::Uno::Float3* normal)
{
    __this->ctor_2(*point, *normal);
}

// public Plane New(float3 point, float3 normal) :1552
void Plane__New3_fn(::g::Uno::Float3* point, ::g::Uno::Float3* normal, Plane* __retval)
{
    *__retval = Plane__New3(*point, *normal);
}

// public void Normalize() :1577
void Plane__Normalize_fn(Plane* __this)
{
    __this->Normalize();
}

// public Plane(float3 point, float3 normal) [instance] :1552
void Plane::ctor_2(::g::Uno::Float3 point, ::g::Uno::Float3 normal)
{
    uStackFrame __("Uno.Geometry.Plane", ".ctor(float3,float3)");
    Normal = normal;
    D = -::g::Uno::Vector::Dot1(normal, point);
}

// public void Normalize() [instance] :1577
void Plane::Normalize()
{
    uStackFrame __("Uno.Geometry.Plane", "Normalize()");
    float invMagnitude = 1.0f / ::g::Uno::Math::Sqrt1(((Normal.X * Normal.X) + (Normal.Y * Normal.Y)) + (Normal.Z * Normal.Z));
    Normal.X = (Normal.X * invMagnitude);
    Normal.Y = (Normal.Y * invMagnitude);
    Normal.Z = (Normal.Z * invMagnitude);
    D = (D * invMagnitude);
}

// public Plane New(float3 point, float3 normal) [static] :1552
Plane Plane__New3(::g::Uno::Float3 point, ::g::Uno::Float3 normal)
{
    Plane obj4;
    obj4.ctor_2(point, normal);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public struct Ray :1604
// {
static void Ray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Position), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Direction), 0);
    type->Reflection.SetFields(2,
        new uField("Direction", 1),
        new uField("Position", 0));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Ray__New1_fn, 0, true, Ray_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Transform", NULL, (void*)Ray__Transform_fn, 0, true, Ray_typeof(), 2, Ray_typeof(), ::g::Uno::Float4x4_typeof()));
}

uStructType* Ray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Ray);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Ray", options);
    type->fp_build_ = Ray_build;
    return type;
}

// public Ray(float3 pos, float3 dir) :1609
void Ray__ctor__fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir)
{
    __this->ctor_(*pos, *dir);
}

// public Ray New(float3 pos, float3 dir) :1609
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval)
{
    *__retval = Ray__New1(*pos, *dir);
}

// public static Uno.Geometry.Ray Transform(Uno.Geometry.Ray ray, float4x4 transform) :1620
void Ray__Transform_fn(Ray* ray, ::g::Uno::Float4x4* transform, Ray* __retval)
{
    *__retval = Ray__Transform(*ray, *transform);
}

// public Ray(float3 pos, float3 dir) [instance] :1609
void Ray::ctor_(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    uStackFrame __("Uno.Geometry.Ray", ".ctor(float3,float3)");
    Position = pos;
    Direction = dir;
}

// public Ray New(float3 pos, float3 dir) [static] :1609
Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Ray obj2;
    obj2.ctor_(pos, dir);
    return obj2;
}

// public static Uno.Geometry.Ray Transform(Uno.Geometry.Ray ray, float4x4 transform) [static] :1620
Ray Ray__Transform(Ray ray, ::g::Uno::Float4x4 transform)
{
    uStackFrame __("Uno.Geometry.Ray", "Transform(Uno.Geometry.Ray,float4x4)");
    ::g::Uno::Float4 ind1;
    return Ray__New1((ind1 = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New8(ray.Position, 1.0f), transform), ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), ::g::Uno::Vector::Normalize1(::g::Uno::Vector::TransformNormal1(ray.Direction, transform)));
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public struct Sphere :1632
// {
static void Sphere_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Sphere, Center), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::Sphere, Radius), 0);
    type->Reflection.SetFields(2,
        new uField("Center", 0),
        new uField("Radius", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sphere__New1_fn, 0, true, Sphere_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()));
}

uStructType* Sphere_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Sphere);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Sphere", options);
    type->fp_build_ = Sphere_build;
    return type;
}

// public Sphere(float3 center, float radius) :1637
void Sphere__ctor__fn(Sphere* __this, ::g::Uno::Float3* center, float* radius)
{
    __this->ctor_(*center, *radius);
}

// public Sphere New(float3 center, float radius) :1637
void Sphere__New1_fn(::g::Uno::Float3* center, float* radius, Sphere* __retval)
{
    *__retval = Sphere__New1(*center, *radius);
}

// public Sphere(float3 center, float radius) [instance] :1637
void Sphere::ctor_(::g::Uno::Float3 center, float radius)
{
    uStackFrame __("Uno.Geometry.Sphere", ".ctor(float3,float)");
    Center = center;
    Radius = radius;
}

// public Sphere New(float3 center, float radius) [static] :1637
Sphere Sphere__New1(::g::Uno::Float3 center, float radius)
{
    Sphere obj2;
    obj2.ctor_(center, radius);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public struct Triangle :1731
// {
static void Triangle_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Triangle, A), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Triangle, B), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Triangle, C), 0);
    type->Reflection.SetFields(3,
        new uField("A", 0),
        new uField("B", 1),
        new uField("C", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Triangle__New1_fn, 0, true, Triangle_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()));
}

uStructType* Triangle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ValueSize = sizeof(Triangle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Triangle", options);
    type->fp_build_ = Triangle_build;
    return type;
}

// public Triangle(float3 a, float3 b, float3 c) :1737
void Triangle__ctor__fn(Triangle* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* c)
{
    __this->ctor_(*a, *b, *c);
}

// public Triangle New(float3 a, float3 b, float3 c) :1737
void Triangle__New1_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* c, Triangle* __retval)
{
    *__retval = Triangle__New1(*a, *b, *c);
}

// public Triangle(float3 a, float3 b, float3 c) [instance] :1737
void Triangle::ctor_(::g::Uno::Float3 a, ::g::Uno::Float3 b, ::g::Uno::Float3 c)
{
    uStackFrame __("Uno.Geometry.Triangle", ".ctor(float3,float3,float3)");
    A = a;
    B = b;
    C = c;
}

// public Triangle New(float3 a, float3 b, float3 c) [static] :1737
Triangle Triangle__New1(::g::Uno::Float3 a, ::g::Uno::Float3 b, ::g::Uno::Float3 c)
{
    Triangle obj1;
    obj1.ctor_(a, b, c);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/$.uno
// -------------------------------------------------------

// public sealed class Triangle2D :1795
// {
static void Triangle2D_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Geometry::Triangle2D, A), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Geometry::Triangle2D, B), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Uno::Geometry::Triangle2D, C), 0);
    type->Reflection.SetFields(3,
        new uField("A", 0),
        new uField("B", 1),
        new uField("C", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Triangle2D__New1_fn, 0, true, Triangle2D_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()));
}

uType* Triangle2D_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Triangle2D);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Geometry.Triangle2D", options);
    type->fp_build_ = Triangle2D_build;
    return type;
}

// public Triangle2D(float2 a, float2 b, float2 c) :1801
void Triangle2D__ctor__fn(Triangle2D* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* c)
{
    __this->ctor_(*a, *b, *c);
}

// public Triangle2D New(float2 a, float2 b, float2 c) :1801
void Triangle2D__New1_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* c, Triangle2D** __retval)
{
    *__retval = Triangle2D::New1(*a, *b, *c);
}

// public Triangle2D(float2 a, float2 b, float2 c) [instance] :1801
void Triangle2D::ctor_(::g::Uno::Float2 a, ::g::Uno::Float2 b, ::g::Uno::Float2 c)
{
    uStackFrame __("Uno.Geometry.Triangle2D", ".ctor(float2,float2,float2)");
    A = a;
    B = b;
    C = c;
}

// public Triangle2D New(float2 a, float2 b, float2 c) [static] :1801
Triangle2D* Triangle2D::New1(::g::Uno::Float2 a, ::g::Uno::Float2 b, ::g::Uno::Float2 c)
{
    Triangle2D* obj1 = (Triangle2D*)uNew(Triangle2D_typeof());
    obj1->ctor_(a, b, c);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/curves/$.uno
// --------------------------------------------------------------

// internal sealed class Vertex :120
// {
static void Vertex_build(uType* type)
{
    type->SetFields(0,
        Vertex_typeof(), offsetof(::g::Uno::Geometry::Vertex, Next), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::Vertex, X), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Geometry::Vertex, Y), 0);
}

uType* Vertex_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Vertex);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Geometry.Vertex", options);
    type->fp_build_ = Vertex_build;
    type->fp_ctor_ = (void*)Vertex__New1_fn;
    return type;
}

// public generated Vertex() :120
void Vertex__ctor__fn(Vertex* __this)
{
    __this->ctor_();
}

// public generated Vertex New() :120
void Vertex__New1_fn(Vertex** __retval)
{
    *__retval = Vertex::New1();
}

// public generated Vertex() [instance] :120
void Vertex::ctor_()
{
}

// public generated Vertex New() [static] :120
Vertex* Vertex::New1()
{
    Vertex* obj1 = (Vertex*)uNew(Vertex_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/curves/$.uno
// --------------------------------------------------------------

// internal sealed class VertexEnumerable :86
// {
static void VertexEnumerable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(VertexEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::VertexEnumerable, _head), 0);
}

VertexEnumerable_type* VertexEnumerable_typeof()
{
    static uSStrong<VertexEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VertexEnumerable);
    options.TypeSize = sizeof(VertexEnumerable_type);
    type = (VertexEnumerable_type*)uClassType::New("Uno.Geometry.VertexEnumerable", options);
    type->fp_build_ = VertexEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))VertexEnumerable__GetEnumerator_fn;
    return type;
}

// public VertexEnumerable(Uno.Geometry.Vertex head) :90
void VertexEnumerable__ctor__fn(VertexEnumerable* __this, ::g::Uno::Geometry::Vertex* head)
{
    __this->ctor_(head);
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() :95
void VertexEnumerable__GetEnumerator_fn(VertexEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public VertexEnumerable New(Uno.Geometry.Vertex head) :90
void VertexEnumerable__New1_fn(::g::Uno::Geometry::Vertex* head, VertexEnumerable** __retval)
{
    *__retval = VertexEnumerable::New1(head);
}

// public VertexEnumerable(Uno.Geometry.Vertex head) [instance] :90
void VertexEnumerable::ctor_(::g::Uno::Geometry::Vertex* head)
{
    uStackFrame __("Uno.Geometry.VertexEnumerable", ".ctor(Uno.Geometry.Vertex)");
    _head = head;
}

// public Uno.Collections.IEnumerator<float2> GetEnumerator() [instance] :95
uObject* VertexEnumerable::GetEnumerator()
{
    uStackFrame __("Uno.Geometry.VertexEnumerable", "GetEnumerator()");
    return (uObject*)::g::Uno::Geometry::VertexEnumerator::New1(_head);
}

// public VertexEnumerable New(Uno.Geometry.Vertex head) [static] :90
VertexEnumerable* VertexEnumerable::New1(::g::Uno::Geometry::Vertex* head)
{
    VertexEnumerable* obj1 = (VertexEnumerable*)uNew(VertexEnumerable_typeof());
    obj1->ctor_(head);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Uno.Geometry/0.40.0/curves/$.uno
// --------------------------------------------------------------

// internal sealed class VertexEnumerator :101
// {
static void VertexEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Float2_typeof()), offsetof(VertexEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(VertexEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(VertexEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::VertexEnumerator, _current), 0,
        ::g::Uno::Geometry::Vertex_typeof(), offsetof(::g::Uno::Geometry::VertexEnumerator, _head), 0);
}

VertexEnumerator_type* VertexEnumerator_typeof()
{
    static uSStrong<VertexEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(VertexEnumerator);
    options.TypeSize = sizeof(VertexEnumerator_type);
    type = (VertexEnumerator_type*)uClassType::New("Uno.Geometry.VertexEnumerator", options);
    type->fp_build_ = VertexEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))VertexEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))VertexEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))VertexEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))VertexEnumerator__MoveNext_fn;
    return type;
}

// public VertexEnumerator(Uno.Geometry.Vertex head) :106
void VertexEnumerator__ctor__fn(VertexEnumerator* __this, ::g::Uno::Geometry::Vertex* head)
{
    __this->ctor_(head);
}

// public float2 get_Current() :111
void VertexEnumerator__get_Current_fn(VertexEnumerator* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Current();
}

// public void Dispose() :117
void VertexEnumerator__Dispose_fn(VertexEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :115
void VertexEnumerator__MoveNext_fn(VertexEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public VertexEnumerator New(Uno.Geometry.Vertex head) :106
void VertexEnumerator__New1_fn(::g::Uno::Geometry::Vertex* head, VertexEnumerator** __retval)
{
    *__retval = VertexEnumerator::New1(head);
}

// public void Reset() :113
void VertexEnumerator__Reset_fn(VertexEnumerator* __this)
{
    __this->Reset();
}

// public VertexEnumerator(Uno.Geometry.Vertex head) [instance] :106
void VertexEnumerator::ctor_(::g::Uno::Geometry::Vertex* head)
{
    uStackFrame __("Uno.Geometry.VertexEnumerator", ".ctor(Uno.Geometry.Vertex)");
    _head = (_current = head);
}

// public float2 get_Current() [instance] :111
::g::Uno::Float2 VertexEnumerator::Current()
{
    uStackFrame __("Uno.Geometry.VertexEnumerator", "get_Current()");
    return ::g::Uno::Float2__New2(uPtr(_current)->X, uPtr(_current)->Y);
}

// public void Dispose() [instance] :117
void VertexEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :115
bool VertexEnumerator::MoveNext()
{
    uStackFrame __("Uno.Geometry.VertexEnumerator", "MoveNext()");
    return (_current = uPtr(_current)->Next) != NULL;
}

// public void Reset() [instance] :113
void VertexEnumerator::Reset()
{
    uStackFrame __("Uno.Geometry.VertexEnumerator", "Reset()");
    _current = _head;
}

// public VertexEnumerator New(Uno.Geometry.Vertex head) [static] :106
VertexEnumerator* VertexEnumerator::New1(::g::Uno::Geometry::Vertex* head)
{
    VertexEnumerator* obj1 = (VertexEnumerator*)uNew(VertexEnumerator_typeof());
    obj1->ctor_(head);
    return obj1;
}
// }

}}} // ::g::Uno::Geometry
