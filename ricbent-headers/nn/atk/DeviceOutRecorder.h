#pragma once

namespace nn { namespace atk { 

class DeviceOutRecorder
{
public:
    DeviceOutRecorder(char const*);
    ~DeviceOutRecorder();
    Finalize();
    Initialize(void*, unsigned long, void*, unsigned long);
    Initialize(void*, unsigned long, void*, unsigned long, nn::atk::DeviceOutRecorder::InitializationOptions const&);
    StartThread(unsigned int, int);
    GetRequiredMemorySizeForRecording();
    Stop(bool);
    StopThread();
    Start(nn::atk::detail::fnd::FileStream&, nn::atk::DeviceOutRecorder::RecordingOptions const&);
    GetReadBlockSamples(unsigned int) const;
    Prepare();
    SendMessage(nn::atk::DeviceOutRecorder::Message);
    RecordSamples(short const*, unsigned int);
    PostMessage(nn::atk::DeviceOutRecorder::Message);
    Run(void*);
    OnPrepare();
    OnWriteSamples(bool);
    OnRequestStop();
    OnExit();
    GetLeadSilenceSamples(short const*, unsigned int, unsigned int) const;
    GetWritableSamples(unsigned int) const;
    IsNoMoreSamples() const;
    OnStart();
    OnStop();
    OnProcessSamples(short*, unsigned int);
    RecordingBufferSize;
    DefaultWriteBlockPerSamples;
    RequiredThreadStackSize;
};

} } 
