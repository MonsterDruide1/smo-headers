#pragma once

namespace nn { namespace atk { namespace detail { namespace driver { 

class StreamSoundLoader
{
public:
    StreamSoundLoader();
    ~StreamSoundLoader();
    WaitFinalize();
    Initialize();
    Finalize();
    CancelRequest();
    RequestClose();
    RegisterStreamDataDecoderManager(nn::atk::detail::IStreamDataDecoderManager*);
    UnregisterStreamDataDecoderManager(nn::atk::detail::IStreamDataDecoderManager*);
    detail_SetFsAccessLog(nn::atk::detail::fnd::FsAccessLog*);
    detail_GetCurrentPosition();
    detail_GetCachePosition();
    detail_GetCachedLength();
    RequestLoadHeader();
    RequestLoadData(void**, unsigned int, long, long, int);
    Update();
    ForceFinish();
    IsBusy() const;
    IsInUse();
    Open();
    Close();
    LoadHeader();
    LoadHeader1(nn::atk::detail::DriverCommandStreamSoundLoadHeader*);
    LoadHeaderForOpus(nn::atk::detail::DriverCommandStreamSoundLoadHeader*, nn::atk::detail::StreamFileType, nn::atk::detail::DecodeMode);
    ReadTrackInfoFromStreamSoundFile(nn::atk::detail::StreamSoundFileReader&);
    SetAdpcmInfo(nn::atk::detail::StreamSoundFileReader&, int, nn::audio::AdpcmParameter**);
    UpdateLoadingDataBlockIndex();
    SelectStreamDataDecoderManager(nn::atk::detail::StreamFileType, nn::atk::detail::DecodeMode);
    SetStreamSoundInfoForOpus(nn::atk::detail::IStreamDataDecoder::DataInfo const&);
    LoadData(void**, unsigned int, unsigned long, unsigned long, nn::atk::TaskProfileLogger&);
    LoadData1(nn::atk::detail::DriverCommandStreamSoundLoadData*, void**, unsigned int, unsigned long, unsigned long, nn::atk::TaskProfileLogger&);
    LoadDataForOpus(nn::atk::detail::DriverCommandStreamSoundLoadData*, void**, unsigned int, unsigned long, unsigned long, nn::atk::TaskProfileLogger&);
    ApplyStartOffset(long, int*);
    CalculateBlockInfo(nn::atk::detail::driver::StreamSoundLoader::BlockInfo&);
    LoadAdpcmContextForStartOffset();
    LoadOneBlockDataViaCache(void**, nn::atk::detail::driver::StreamSoundLoader::BlockInfo const&, long, bool, bool);
    LoadOneBlockData(void**, nn::atk::detail::driver::StreamSoundLoader::BlockInfo const&, long, bool, bool);
    MoveNextRegion(int*);
    DecodeStreamData(void**, nn::atk::detail::IStreamDataDecoder::DecodeType);
    UpdateLoadingDataBlockIndexForOpus(void**);
    IsLoopStartFilePos(unsigned int);
    GetLoadChannelCount(int);
    LoadStreamBuffer(unsigned char*, nn::atk::detail::driver::StreamSoundLoader::BlockInfo const&, unsigned int);
    LoadStreamBuffer(unsigned char*, unsigned long);
    SkipStreamBuffer(unsigned long);
    UpdateAdpcmInfoForStartOffset(void const*, int, nn::atk::detail::driver::StreamSoundLoader::BlockInfo const&);
    DataBlockSizeBase;
    DataBlockSizeMargin;
    DataBlockSizeMax;
    FileStreamBufferSize;
    LoadBufferChannelCount;
    LoadBufferSize;
    g_LoadBuffer;
};

} } } } 
