#pragma once

class SignBoardLayoutTexture
{
public:
    SignBoardLayoutTexture(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
};
