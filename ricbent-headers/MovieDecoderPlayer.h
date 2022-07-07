#pragma once

class MovieDecoderPlayer
{
public:
    MovieDecoderPlayer(sead::Heap*);
    OperateThreadFunction(sead::Thread*, long);
    ~MovieDecoderPlayer();
    stop();
    Initialize();
    InputReadThreadFunction(sead::Thread*, long);
    Finalize();
    CreateExtractor(char const*);
    CreateDecoders();
    CreateVideoRenderer();
    StartDecoders();
    draw(agl::DrawContext*) const;
    isDecoded() const;
    StopThread();
    StopDecoders();
    StopVideoRenderer();
    DestroyVideoRenderer();
    DestroyDecoders();
    DestroyExtractor();
    AddBufferToVideoIndexList(int);
    RemoveBufferFromVideoIndexList(int*);
    ReadInputDataFromExtractorSendToDecoder(int, movie::Decoder*);
    SendEosToDecoder();
    VideoInputBufferAvailableEvent();
    VideoOutputBufferAvailableEvent();
    VideoFormatChangedEvent();
    update();
    play(char const*);
};
