#pragma once

class QuestInfoHolder
{
public:
    QuestInfoHolder(int);
    clearAll();
    finalizeForScene();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    initAfterPlacementQuestObj(int);
    updateActiveList(int);
    clearMainQuest();
    initSceneObjHolder(al::SceneObjHolder*);
    registerQuestInfo(QuestInfo const*);
    validateQuest(QuestInfo const*);
    tryFindQuest(QuestInfo const*) const;
    invalidateQuest(QuestInfo const*);
    getQuestNum(int) const;
    getActiveQuestLabel() const;
    getActiveQuestStageName(al::IUseSceneObjHolder const*) const;
    isActiveQuest(QuestInfo const*) const;
    tryFindQuest(al::PlacementInfo const&, al::SceneObjHolder*) const;
    getSceneObjName() const;
    ~QuestInfoHolder();
};
