// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.40.8/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Entities{struct DirectionalLight;}}}
namespace g{namespace Fuse{namespace Entities{struct EnvironmentLight;}}}
namespace g{namespace Fuse{namespace Entities{struct Light;}}}
namespace g{namespace Fuse{namespace Entities{struct PointLight;}}}
namespace g{namespace Fuse{namespace Entities{struct SpotLight;}}}

namespace g{
namespace Fuse{
namespace Entities{

// public abstract interface ILightVisitor :695
// {
uInterfaceType* ILightVisitor_typeof();

struct ILightVisitor
{
    void(*fp_Visit)(uObject*, ::g::Fuse::Entities::DirectionalLight*);
    void(*fp_Visit1)(uObject*, ::g::Fuse::Entities::EnvironmentLight*);
    void(*fp_Visit2)(uObject*, ::g::Fuse::Entities::Light*);
    void(*fp_Visit3)(uObject*, ::g::Fuse::Entities::PointLight*);
    void(*fp_Visit4)(uObject*, ::g::Fuse::Entities::SpotLight*);
    static void Visit(const uInterface& __this, ::g::Fuse::Entities::DirectionalLight* light) { __this.VTable<ILightVisitor>()->fp_Visit(__this, light); }
    static void Visit1(const uInterface& __this, ::g::Fuse::Entities::EnvironmentLight* light) { __this.VTable<ILightVisitor>()->fp_Visit1(__this, light); }
    static void Visit2(const uInterface& __this, ::g::Fuse::Entities::Light* light) { __this.VTable<ILightVisitor>()->fp_Visit2(__this, light); }
    static void Visit3(const uInterface& __this, ::g::Fuse::Entities::PointLight* light) { __this.VTable<ILightVisitor>()->fp_Visit3(__this, light); }
    static void Visit4(const uInterface& __this, ::g::Fuse::Entities::SpotLight* light) { __this.VTable<ILightVisitor>()->fp_Visit4(__this, light); }
};
// }

}}} // ::g::Fuse::Entities
