#pragma once

class StageSceneLayout
{
public:
    StageSceneLayout(char const*, al::LayoutInitInfo const&, al::PlayerHolder const*, al::SubCameraRenderer const*);
    startActionAll(char const*);
    control();
    updatePlayGuideMenuText();
    setDirtyFlagForPlayGuideMenu();
    start();
    updateCounterParts();
    tryAppearCoinCollectCounter();
    startOnlyCoin(bool);
    endWithoutCoin(bool);
    end();
    isEnd() const;
    isWait() const;
    isActive() const;
    isEndLifeDemo() const;
    tryStartLifeDemo();
    startCoinCountAnim(int);
    startCoinCollectCountAnim(int);
    appearCoinCounterForDemo();
    isEndCoinCountAnim() const;
    isEndShineChipCompleteAnim() const;
    startShineChipCompleteAnim();
    endShineChipCompleteAnim();
    tryStartDemoGetLifeMaxUpItem(bool);
    isEndDemoGetLifeMaxUpItem() const;
    killShineCount();
    appearShineCountWait();
    startCloset();
    endCloset();
    missEnd();
    appearPlayGuideCamera();
    exeAppear();
    isActionEndAll() const;
    exeWait();
    exeEnd();
    exeEndWithoutCoin();
    exeCoinCountAnim();
    exeShineChipComplete();
    exeShineCountAppear();
    updateLifeCounter();
    updateKidsModeLayout();
    startShineCountAnim(bool);
    isEndShineCountAnim() const;
    ~StageSceneLayout();
};
