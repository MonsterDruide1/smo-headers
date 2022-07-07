#pragma once

class MapMini
{
public:
    MapMini(al::LayoutInitInfo const&, al::PlayerHolder const*);
    appearSlideIn();
    end();
    isEnd() const;
    exeAppear();
    exeWait();
    calcNearHintTrans();
    exeEnd();
};
