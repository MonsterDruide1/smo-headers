#pragma once

class ItemAmiiboKoopa
{
public:
    ItemAmiiboKoopa(char const*);
    init(al::ActorInitInfo const&);
    appear();
    exeExpand();
    exeWait();
    attackSensor(al::HitSensor*, al::HitSensor*);
};
