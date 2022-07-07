#pragma once

class NetworkUploadFlag
{
public:
    NetworkUploadFlag();
    init();
    isNeedUpload(RankingCategory const&) const;
    upload(RankingCategory const&);
    updateScore(RankingCategory const&);
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
