#pragma once

class InformationWindowInvalidAreaRequester
{
public:
    InformationWindowInvalidAreaRequester(InformationWindowRequestHolder*, InformationWindowStateHolder*, al::PlayerHolder const*);
    update();
};
