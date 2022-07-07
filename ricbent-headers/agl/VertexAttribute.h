#pragma once

namespace agl { 

class VertexAttribute
{
public:
    VertexAttribute();
    ~VertexAttribute();
    cleanUp();
    destroy();
    create(unsigned int, sead::Heap*);
    setVertexStream(int, agl::VertexBuffer const*, unsigned int);
    disableVertexBuffer_(agl::VertexAttribute::Attribute_*);
    enableVertexBuffer_(agl::VertexAttribute::Attribute_*, agl::VertexBuffer const*, unsigned int);
    getVertexStream(int, unsigned int*) const;
    setUp();
    activate(agl::DrawContext*) const;
    disableAttributeAll(agl::DrawContext*);
};

} 
