#pragma once

class TimeBalloonNoticeDataAccessorExecutor
{
public:
    TimeBalloonNoticeDataAccessorExecutor(al::LiveActor*, TimeBalloonDataAccessor*);
    update();
    exeWait();
    exeError();
    exeDownload();
    ~TimeBalloonNoticeDataAccessorExecutor();
};
