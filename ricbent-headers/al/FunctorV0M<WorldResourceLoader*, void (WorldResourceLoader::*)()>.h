#pragma once

namespace al { namespace FunctorV0M<WorldResourceLoader*, void (WorldResourceLoader::*)()> {

operator()() const;
clone() const;
~FunctorV0M();

} } 
