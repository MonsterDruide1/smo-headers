#pragma once

class ShopInfo
{
public:
    ShopInfo(Shine*, bool, al::LiveActor*, char const*, char const*, al::LayoutActor*);
    createShopItemList(al::LayoutActor const*);
    updateItemPartsData(CommonHorizontalList*);
    updateItemPartsAnim(CommonHorizontalList*, ShopItemState const*);
    isNewItem(int) const;
    getItem(int) const;
    isShineItem(int) const;
    isLifeMaxUpItem(int) const;
    isSecretStateItem(int) const;
    isUseItemTypeItem(int) const;
    isWearTypeItem(int) const;
    isClothesTypeItem(int) const;
    isStickerTypeItem(int) const;
    isEnableBuyItem(int, ShopItemState const*) const;
    isBuyAlreadyItem(int, ShopItemState const*) const;
    getItemName(int) const;
    getDisplayName(int) const;
    isBuyAlreadyAll(ShopItemState const*) const;
    getCoinType(int) const;
    getPrice(int) const;
    buyItem(int);
    getShineDirect();
    updateItemSort();
};
