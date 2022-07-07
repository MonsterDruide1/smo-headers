#pragma once

class SaveObjInfo
{
public:
    createSaveObjInfoWriteSaveData(al::ActorInitInfo const&, al::PlacementId const*);
    createSaveObjInfoNoWriteSaveDataInSameWorld(al::ActorInitInfo const&, al::PlacementId const*);
    createSaveObjInfoNoWriteSaveDataInSameWorldResetMiniGame(al::ActorInitInfo const&, al::PlacementId const*);
    createSaveObjInfoNoWriteSaveDataInSameScenario(al::ActorInitInfo const&, al::PlacementId const*);
    on();
    off();
    isOn() const;
    resetByPlacementId(al::PlacementId*);
    checkIsOn() const;
    SaveObjInfo(al::ActorInitInfo const&, al::PlacementId const*, SaveObjInfo::SaveType);
};
