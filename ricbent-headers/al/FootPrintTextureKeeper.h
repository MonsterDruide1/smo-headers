#pragma once

namespace al { 

class FootPrintTextureKeeper
{
public:
    FootPrintTextureKeeper(al::MaterialCategoryKeeper*);
    ~FootPrintTextureKeeper();
    endInit();
    update();
    appearFootPrint(al::FootPrintRequestInfo*);
    disappearFootPrint(al::FootPrintRequestInfo*);
    activateTexture(agl::DrawContext*) const;
};

} 
