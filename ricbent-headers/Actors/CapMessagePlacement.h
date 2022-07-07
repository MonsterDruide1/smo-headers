#pragma once

class CapMessagePlacement
{
public:
    CapMessagePlacement(char const*);
    init(al::ActorInitInfo const&);
    onKill();
    onAppear();
    initAfterPlacement();
    showStart();
    trySave();
    showEnd();
    isActive() const;
    checkEnbale() const;
};
