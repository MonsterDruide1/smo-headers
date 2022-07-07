#pragma once

namespace al { 

class Graph
{
public:
    Graph(int, int);
    appendVertex(int);
    appendVertex(al::Graph::Vertex*);
    removeVertex(al::Graph::Vertex const*);
    removeEdge(al::Graph::Edge const*);
    tryFindEdge(int, int) const;
    appendEdge(al::Graph::Edge*);
    tryAppendEdge(al::Graph::Edge*);
    appendEdge(int, int, float);
    tryAppendEdge(int, int, float);
};

} 
