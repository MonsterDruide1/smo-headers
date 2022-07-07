#pragma once

namespace sead { 

class TreeNode
{
public:
    TreeNode();
    clearLinks();
    pushBackChild(sead::TreeNode*);
    detachSubTree();
    pushBackSibling(sead::TreeNode*);
    pushFrontChild(sead::TreeNode*);
    insertBeforeSelf(sead::TreeNode*);
    insertAfterSelf(sead::TreeNode*);
    detachAll();
    clearChildLinksRecursively_();
    findRoot();
    findRoot() const;
    countChildren() const;
};

} 
