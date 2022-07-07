#pragma once

class WindBlowPuzzle
{
public:
    WindBlowPuzzle(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    updateCollisionAll();
    updatePartsAllCollision(int, bool);
    control();
    exeWait();
    exeComplete();
    checkEnableMove(WindBlowMapParts const*, int, int) const;
    moveParts(WindBlowMapParts*, int, int);
    checkOnAnswer(int) const;
    checkCollision(sead::Vector3<int> const&) const;
};
