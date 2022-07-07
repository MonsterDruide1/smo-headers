#pragma once

class ChangeStageInfo
{
public:
    ChangeStageInfo(GameDataHolder const*, al::PlacementInfo const&);
    init(al::PlacementInfo const&, GameDataHolder const*);
    ChangeStageInfo(GameDataHolder const*, al::PlacementInfo const&, char const*, char const*, bool, int, ChangeStageInfo::SubScenarioType);
    findScenarioNoByList(GameDataHolder const*);
    ChangeStageInfo(GameDataHolder const*, char const*, char const*, bool, int, ChangeStageInfo::SubScenarioType);
    init();
    copy(ChangeStageInfo const&);
    isSubScenarioTypeLifeRecover() const;
    isSubScenarioTypeResetMiniGame() const;
    setWipeType(char const*);
    calcTrans(sead::Vector3<float>*, al::PlacementInfo const&);
};
