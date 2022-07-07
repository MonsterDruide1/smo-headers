#pragma once

class PaintObjHolder
{
public:
    PaintObjHolder();
    ~PaintObjHolder();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    execute();
    registerPaintObj(PaintObj*);
    getSceneObjName() const;
};
