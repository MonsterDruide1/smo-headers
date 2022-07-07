#pragma once

class BalloonFindDataStoreMetaBinaryData
{
public:
    BalloonFindDataStoreMetaBinaryData(int, sead::Vector3<float> const&);
    BalloonFindDataStoreMetaBinaryData(nn::nex::qVector<unsigned char> const&);
};
