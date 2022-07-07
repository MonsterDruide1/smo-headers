#pragma once

class ShopLayoutInfo
{
public:
    ShopLayoutInfo(sead::PtrArray<ShopLayoutItemInfo> const*, int, char const*);
    loadTexture(sead::PtrArray<ShopLayoutItemInfo> const*, int, char const*);
    updateItemPartsData(CommonHorizontalList*, sead::PtrArray<ShopLayoutItemInfo> const*, al::LayoutActor const*, Shine const*, bool);
    updateItemPartsAnim(CommonHorizontalList*, sead::PtrArray<ShopLayoutItemInfo> const*, al::LayoutActor const*, Shine const*, ShopItemState const*);
};
