#pragma once

class MiniGameRankingLayout
{
public:
    MiniGameRankingLayout(al::LayoutInitInfo const&);
    appear();
    control();
    updateRankingData(RankingCategory, int, int, unsigned int, char16_t const*, unsigned int, unsigned long);
    clearImageData();
    isClosing() const;
    changeOut(bool);
    readyChangeIn(RankingCategory, bool);
    changeIn();
    close();
    isChangingRankingType() const;
    updateList(MiniGameRankingLayout::ListDataHolder const&);
    updateListStatus();
    exeAppear();
    exeWait();
    exeChangeOut();
    exeChangeInWaitDownload();
    exeChangeIn();
    exeEnd();
};
