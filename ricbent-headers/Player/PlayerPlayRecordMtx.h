#pragma once

class PlayerPlayRecordMtx
{
public:
    PlayerPlayRecordMtx();
    startRecord(sead::Matrix34<float> const&);
    recordViewMtx(sead::Matrix34<float> const&);
};
