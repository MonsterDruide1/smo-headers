#pragma once

namespace al { 

class RootSercher
{
public:
    RootSercher();
    init(int, int);
    clear();
    tryGetNode(int, int) const;
    getNode(int, int) const;
    findMinCostOpenNode() const;
    closeNode(al::RootSercherNode*, int, int);
    removeOpenList(al::RootSercherNode*);
    openNode(int, int, int, int, al::RootSercherNode*);
    isEnableNode(int, int) const;
    addOpenList(al::RootSercherNode*);
    start(int, int, int, int, int, int);
    calcNextIndex(int*, int*, int, int) const;
    calcHeuristicCost(int, int, int, int) const;
    getConnectCount() const;
    getConnectIndex(int*, int*, int, int, int) const;
    checkReach(int, int) const;
    calcCost(int, int, al::RootSercherNode const*) const;
};

} 
