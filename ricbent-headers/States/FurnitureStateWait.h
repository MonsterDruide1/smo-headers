#pragma once

class FurnitureStateWait
{
public:
    FurnitureStateWait(al::LiveActor*, FurnitureType);
    appear();
    isEnableBindRequest() const;
    exeWait();
    exeBindRequest();
    ~FurnitureStateWait();
};
