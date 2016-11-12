// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.40.2/source/uno/content/models/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Models{struct Model;}}}}
namespace g{namespace Uno{namespace Content{namespace Models{struct ModelNode;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Models{

// public sealed class Model :78
// {
uType* Model_typeof();
void Model__get_Root_fn(Model* __this, ::g::Uno::Content::Models::ModelNode** __retval);

struct Model : uObject
{
    uStrong< ::g::Uno::Content::Models::ModelNode*> _root;

    ::g::Uno::Content::Models::ModelNode* Root();
};
// }

}}}} // ::g::Uno::Content::Models
