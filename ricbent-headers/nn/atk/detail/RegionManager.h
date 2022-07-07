#pragma once

namespace nn { namespace atk { namespace detail { namespace RegionManager {

Initialize();
InitializeRegion(nn::atk::detail::IRegionInfoReadable*, nn::atk::detail::StreamDataInfoDetail*);
IsPreparedForRegionJump() const;
ChangeRegion(int, nn::atk::detail::IRegionInfoReadable*, nn::atk::detail::StreamDataInfoDetail*);
SetRegionInfo(nn::atk::detail::StreamSoundFile::RegionInfo const*, nn::atk::detail::StreamDataInfoDetail const*);
TryMoveNextRegion(nn::atk::detail::IRegionInfoReadable*, nn::atk::detail::StreamDataInfoDetail*);
SetPosition(long);
AddPosition(long);
IsInFirstRegion() const;

} } } } 
