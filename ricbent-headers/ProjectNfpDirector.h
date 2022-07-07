#pragma once

class ProjectNfpDirector
{
public:
    ProjectNfpDirector();
    ~ProjectNfpDirector();
    update();
    showError(nn::Result const&);
    tryGetTriggerTouchNfpInfo();
};
