#pragma once

class QuestInfo
{
public:
    QuestInfo();
    clear();
    init(al::ActorInitInfo const&);
    init(al::PlacementInfo const&, al::ActorInitInfo const&);
    init(al::PlacementInfo const&, al::SceneObjHolder*);
    setStageName(char const*);
    setLabel(char const*);
    copy(QuestInfo const*);
    end();
    isEqual(QuestInfo const*) const;
    getSceneObjHolder() const;
};
