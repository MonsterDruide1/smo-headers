#pragma once

namespace al { 

class FootPrintServer
{
public:
    FootPrintServer(al::ActorInitInfo const&, char const*, int);
    findDeadFootPrint();
    getSceneObjName() const;
    ~FootPrintServer();
};

} 
