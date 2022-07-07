#pragma once

class GhostPlayerRecorder
{
public:
    GhostPlayerRecorder(al::PlayerHolder const*, char const*);
    update();
    tryCancelRecording();
    endRecord();
    tryStartRecord();
    cancelRecord();
    trySaveRecord();
    saveRecordByaml(char const*);
    saveRecordYaml(char const*);
    setHackActionName(char const*, char const*, char const*);
};
