#pragma once

namespace alAudioEffectFunction {

isMainBus(char const*);
getBusId(char const*);
getBusIdFromIndex(int);
getBusIndex(char const*);
getBusIndexFromId(nn::atk::AuxBus);
getBusNameFromIndex(int);
getBusNameFromId(nn::atk::AuxBus);
getOutDeviceId(char const*);
getOutDeviceIdFromIndex(int);
getOutDeviceIndex(char const*);
getOutDeviceNameFromIndex(int);
getOutDeviceNameFromId(nn::atk::OutputDevice);
getSubMixIndex(al::AudioBusSettingInfo const*, al::AudioSubMixInfoAccessor const*);

} 
