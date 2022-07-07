#pragma once

class DokanKoopa
{
public:
    DokanKoopa(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeInStart();
    exeIn();
    exeInWait();
    exeOutSign();
    exeOut();
};
