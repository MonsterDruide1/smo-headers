#pragma once

namespace nn { namespace atk { namespace detail { 

class SoundArchiveManager
{
public:
    SoundArchiveManager();
    ~SoundArchiveManager();
    Initialize(nn::atk::SoundArchive const*, nn::atk::SoundDataManager const*);
    ChangeTargetArchive(char const*);
    Finalize();
    Add(nn::atk::detail::AddonSoundArchiveContainer&);
    Remove(nn::atk::detail::AddonSoundArchiveContainer&);
    IsAvailable() const;
    GetAddonSoundArchive(char const*) const;
    GetAddonSoundDataManager(char const*) const;
    GetAddonSoundArchiveContainer(int) const;
    GetAddonSoundArchiveContainer(int);
    SetParametersHook(nn::atk::detail::SoundArchiveParametersHook*);
    GetParametersHook() const;
};

} } } 
