#pragma once

class KoopaHintHolder
{
public:
    KoopaHintHolder(al::SceneObjHolder*);
    update();
    tryAppearHintCapReflect();
    tryAppearMessageDamage(int);
    exeWait();
    exeHintCapReflect();
    exeHintCapAttachBomb();
    exeMessageDamage();
    ~KoopaHintHolder();
    getSceneObjHolder() const;
};
