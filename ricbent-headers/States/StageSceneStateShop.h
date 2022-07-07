#pragma once

class StageSceneStateShop
{
public:
    StageSceneStateShop(char const*, StageScene*, StageSceneLayout*);
    initAndSetting(al::DeriveActorGroup<ShoppingWatcher>*, al::ActorInitInfo const&);
    appear();
    kill();
    control();
    getShopNpc() const;
    exeInShop();
    exeBuyShineEnd();
    exeBuyLifeMaxUpItem();
    isWear() const;
    isEndBuyShine() const;
    isEndBuyShine10() const;
    isEndBuyLifeMaxUpItem() const;
    settingShopId(int);
    requestOpen() const;
    isDrawViewRenderer() const;
    ~StageSceneStateShop();
};
