#pragma once

#include "sead/heap/seadDisposer.h"
#include "sead/hostio/seadHostIONode.h"
#include "sead/prim/seadSafeString.h"

namespace sead
{
class GameConfig : public hostio::Node
{
    SEAD_SINGLETON_DISPOSER(GameConfig)
    GameConfig();
    virtual ~GameConfig();

    static const SafeString cNodeName;

protected:
    struct FileWriteCallback
    {
        virtual ~FileWriteCallback();
        virtual void save();
    };
};
}  // namespace sead
