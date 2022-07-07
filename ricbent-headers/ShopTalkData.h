#pragma once

class ShopTalkData
{
public:
    ShopTalkData(int, int const*, int, sead::PtrArray<ShopItem::ShopItemInfo> const&);
    init();
    isEnableExplainShopCoin(int) const;
    checkShowNewItemAndPrepareSave(GameDataHolderAccessor const&, bool, int);
    checkExistNewItem(GameDataHolderAccessor const&, int, int, bool) const;
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
