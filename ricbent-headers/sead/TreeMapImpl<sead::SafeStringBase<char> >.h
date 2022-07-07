#pragma once

namespace sead { namespace TreeMapImpl<sead::SafeStringBase<char> > {

insert(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::TreeMapNode<sead::SafeStringBase<char> >*);
forEach<sead::Delegate1<sead::StrTreeMap<32, bool>, sead::TreeMapNode<sead::SafeStringBase<char> >*> >(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::Delegate1<sead::StrTreeMap<32, bool>, sead::TreeMapNode<sead::SafeStringBase<char> >*> const&);
forEach<sead::Delegate1<sead::StrTreeMap<64, long>, sead::TreeMapNode<sead::SafeStringBase<char> >*> >(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::Delegate1<sead::StrTreeMap<64, long>, sead::TreeMapNode<sead::SafeStringBase<char> >*> const&);
forEach<sead::Delegate1<sead::StrTreeMap<256, al::MessageHolder*>, sead::TreeMapNode<sead::SafeStringBase<char> >*> >(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::Delegate1<sead::StrTreeMap<256, al::MessageHolder*>, sead::TreeMapNode<sead::SafeStringBase<char> >*> const&);
forEach<sead::Delegate1<sead::StrTreeMap<128, al::ActorResource*>, sead::TreeMapNode<sead::SafeStringBase<char> >*> >(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::Delegate1<sead::StrTreeMap<128, al::ActorResource*>, sead::TreeMapNode<sead::SafeStringBase<char> >*> const&);
erase(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::SafeStringBase<char> const&);
eraseMin(sead::TreeMapNode<sead::SafeStringBase<char> >*);
forEach<sead::Delegate1<sead::StrTreeMap<156, al::Resource*>::ForEachConstContext<void (*)(sead::SafeStringBase<char>&, al::Resource*)>, sead::TreeMapNode<sead::SafeStringBase<char> >*> >(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::Delegate1<sead::StrTreeMap<156, al::Resource*>::ForEachConstContext<void (*)(sead::SafeStringBase<char>&, al::Resource*)>, sead::TreeMapNode<sead::SafeStringBase<char> >*> const&);
forEach<sead::Delegate1<sead::StrTreeMap<156, al::Resource*>, sead::TreeMapNode<sead::SafeStringBase<char> >*> >(sead::TreeMapNode<sead::SafeStringBase<char> >*, sead::Delegate1<sead::StrTreeMap<156, al::Resource*>, sead::TreeMapNode<sead::SafeStringBase<char> >*> const&);

} } 
