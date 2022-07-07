#pragma once

class MiniGameRankingHeaderParts
{
public:
    MiniGameRankingHeaderParts(al::LayoutActor*, al::LayoutInitInfo const&, sead::ObjArray<RankingCategory> const&);
    activate(RankingCategory, sead::ObjArray<RankingCategory> const&);
    update(RankingCategory, sead::ObjArray<RankingCategory> const&);
    deactivate();
    rollLeft(RankingCategory, sead::ObjArray<RankingCategory> const&);
    rollRight(RankingCategory, sead::ObjArray<RankingCategory> const&);
};
