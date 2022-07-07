#pragma once

class ProjectReplaceTagProcessor
{
public:
    ProjectReplaceTagProcessor(al::IUseSceneObjHolder const*);
    replaceProjectTag(char16_t*, al::MessageTag const&, al::IUseMessageSystem const*) const;
};
