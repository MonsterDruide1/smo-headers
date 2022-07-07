#pragma once

class TRexScrollBreakMapPartsBreakJudge
{
public:
    judgeBreak(TRexScrollBreakMapParts const*) const;
    addBreakCountAndAppearBreakModel(TRexScrollBreakMapParts const*);
    TRexScrollBreakMapPartsBreakJudge(TRex const*, al::ActorInitInfo const&);
    getSceneObjName() const;
    ~TRexScrollBreakMapPartsBreakJudge();
};
