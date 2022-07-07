#pragma once

class BalloonFindMyBalloonServerHolder
{
public:
    BalloonFindMyBalloonServerHolder(BalloonFindFetchMyInfosDownloader*, nn::nex::DataStoreFetchMyInfosResult*, BalloonFindMyBalloonUploader*, IFriendsProfileDataHolder*, GameDataHolderAccessor, al::DataStoreDirector*);
    getPrincipalID() const;
    getBalloon() const;
    getBalloonFromWorldId(int) const;
    prepare();
    update();
    isUpdateEnd() const;
    isUpdateError() const;
    process();
    setup(nn::nex::DataStoreFetchMyInfosResult const&);
    isReady() const;
    isExistInCurrentWorld() const;
    isBalloonLostInCurrentWorld() const;
    isExistPlayedBonus() const;
    isBalloonLostAnywhere() const;
    getDataStoreDirector() const;
};
