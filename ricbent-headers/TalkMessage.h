#pragma once

class TalkMessage
{
public:
    TalkMessage(char const*);
    initLayoutTalk(al::LayoutInitInfo const&, char const*);
    initLayoutWithArchiveName(al::LayoutInitInfo const&, char const*, char const*);
    initLayoutImportant(al::LayoutInitInfo const&, char const*);
    initLayoutOver(al::LayoutInitInfo const&, char const*);
    initLayoutForEventTalk(al::LayoutInitInfo const&);
    initLayoutForEventImportant(al::LayoutInitInfo const&);
    startForNpc(al::LiveActor const*, char16_t const*, char16_t const*, al::MessageTagDataHolder const*, bool);
    reset();
    startForSystem(char16_t const*, al::MessageTagDataHolder const*, bool);
    end();
    isIconWait() const;
    kill();
    isWait() const;
    startSelectWithChoiceTable(char16_t const**, int, int);
    startSelectWithChoiceInfo(al::EventFlowChoiceInfo const*);
    isSelectDecide() const;
    getSelectedChoiceIndex() const;
    exeAppear();
    exeAppearWithText();
    exeTextAnim();
    exeIconAppearDelay();
    exeIconAppear();
    exeIconWait();
    exeIconWaitTriggered();
    exeIconPageNext();
    exeIconPageNextAndPlayNextPage();
    exeIconPageNextAndLoadNextMessage();
    exeIconPageEnd();
    exeWait();
    exeEnd();
    appear();
    control();
    startIconPageNext();
};
