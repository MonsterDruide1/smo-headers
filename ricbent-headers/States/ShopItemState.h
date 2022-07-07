#pragma once

class ShopItemState
{
public:
    ShopItemState();
    init();
    onBuyShine();
    onBuyLifeUpItem();
    isBuyAlreadyShineBeforeGameClear(Shine const*) const;
    isBuyAlreadyShineAfterGameClear(Shine const*) const;
    isBuyAlreadyLifeUpItem(al::LayoutActor const*) const;
};
