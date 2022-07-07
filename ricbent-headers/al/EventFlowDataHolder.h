#pragma once

namespace al { 

class EventFlowDataHolder
{
public:
    EventFlowDataHolder();
    isExistCameraInfo(char const*) const;
    getCameraName(int) const;
    initCamera(char const*, al::CameraTicket*);
    initCameraSubTargetAfterChart(al::LiveActor const*);
    stopMovementByNode();
    restartMovementByNode();
    initCharacterName(char16_t const*);
    initItemType(int);
    addItemType(char const*);
    setActorFront(sead::Vector3<float> const&);
    tryGetCharacterName() const;
    convertActionName(sead::BufferedSafeStringBase<char>*, char const*) const;
    sendEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    setTalkSubActorName(char const*);
    tryCreateCameraInfoBySystem(char const*);
    startEventCamera(al::IUseCamera*, char const*, int);
    startEventAnimCamera(al::IUseCamera*, char const*, char const*, int);
    endEventCamera(al::IUseCamera*, char const*, int, bool);
    tryEndEventCameraIfPlaying(al::IUseCamera*, char const*, int, bool);
    endAllEventCamera(al::IUseCamera*);
    isEndInterpoleCamera(al::IUseCamera const*, char const*) const;
    isPlayingEventAnimCamera(char const*) const;
};

} 
