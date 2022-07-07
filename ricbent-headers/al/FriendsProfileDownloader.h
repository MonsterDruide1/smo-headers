#pragma once

namespace al { 

class FriendsProfileDownloader
{
public:
    FriendsProfileDownloader();
    executeAsync(sead::Thread*, long);
    ~FriendsProfileDownloader();
    requestDownload(void*, unsigned long, nn::friends::ImageSize);
    waitAsync() const;
    getNickname() const;
    execute();
    getSceneObjName() const;
};

} 
