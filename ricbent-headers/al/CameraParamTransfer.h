#pragma once

namespace al { 

class CameraParamTransfer
{
public:
    CameraParamTransfer();
    setFuncTable(al::NameToCameraParamTransferFunc const*, int);
    tryTransferParam(al::CameraPoser*, al::CameraPoser*) const;
    tryFindTransferFunc(char const*, char const*) const;
};

} 
