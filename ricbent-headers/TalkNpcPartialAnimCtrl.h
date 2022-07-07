#pragma once

class TalkNpcPartialAnimCtrl
{
public:
    TalkNpcPartialAnimCtrl(al::LiveActor*, TalkNpcActionAnimInfo const*);
    isReactionCap() const;
    update();
    forceEndAndInvalidateByeBye();
    forceEndAndInvalidateReaction();
    startReaction();
    startReactionCap();
    exeNone();
    exeReaction();
    endReaction();
    exeReactionCap();
    endReactionCap();
    exeByeBye();
    ~TalkNpcPartialAnimCtrl();
};
