#pragma once

namespace nn { namespace atk { namespace detail { namespace Util {

CalcLpfFreq(float);
CalcLowPassFilterCoefficients(int, int, bool);
FindLpfFreqTableIndex(int);
CalcPanRatio(float, nn::atk::detail::Util::PanInfo const&, nn::atk::OutputMode);
CalcSurroundPanRatio(float, nn::atk::detail::Util::PanInfo const&);
CalcPitchRatio(int);
CalcVolumeRatio(float);
CalcRandom();
GetWaveFile(unsigned int, unsigned int, nn::atk::SoundArchive const&, nn::atk::SoundArchivePlayer const&);
GetWaveFile(unsigned int, unsigned int, nn::atk::SoundArchive const&, nn::atk::detail::PlayerHeapDataManager const*);
GetWaveArchiveOfBank(nn::atk::detail::LoadItemInfo&, bool&, void const*, nn::atk::SoundArchive const&, nn::atk::detail::SoundArchiveLoader const&);
GetWaveFileOfWaveSound(void const*, unsigned int, nn::atk::SoundArchive const&, nn::atk::detail::SoundArchiveLoader const&);
GetSampleByByte(unsigned long, nn::atk::SampleFormat);
GetByteBySample(unsigned long, nn::atk::SampleFormat);
IsValidMemoryForDsp(void const*, unsigned long);
VolumeDbMin;
VolumeDbMax;
PitchDivisionBit;
PitchDivisionRange;
CalcLpfFreqTableSize;
CalcLpfFreqIntercept;
CalcLpfFreqThreshold;
CalcLpfFreqTable;
LowPassFilterCoefficientsTable32000;
LowPassFilterCoefficientsTable48000;

} } } } 
