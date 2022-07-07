#pragma once

class NpcJointLookAtController
{
public:
    create(al::LiveActor*, TalkNpcParam const*);
    tryCreate(al::LiveActor*, TalkNpcParam const*);
    tryCreate(al::LiveActor*, TalkNpcParam const*, float);
    init(al::LiveActor*, TalkNpcParam const*);
    cancelUpdateRequest();
    update();
    NpcJointLookAtController(float);
};
