#pragma once

namespace nn { namespace atk { namespace SoundStartable {

StartSound(nn::atk::SoundHandle*, unsigned int, char const*, nn::atk::SoundStartable::StartInfo const*);
StartSound(nn::atk::SoundHandle*, unsigned int, nn::atk::SoundStartable::StartInfo const*);
StartSound(nn::atk::SoundHandle*, char const*, char const*, nn::atk::SoundStartable::StartInfo const*);
StartSound(nn::atk::SoundHandle*, char const*, nn::atk::SoundStartable::StartInfo const*);
HoldSound(nn::atk::SoundHandle*, unsigned int, char const*, nn::atk::SoundStartable::StartInfo const*);
HoldSound(nn::atk::SoundHandle*, unsigned int, nn::atk::SoundStartable::StartInfo const*);
HoldSound(nn::atk::SoundHandle*, char const*, nn::atk::SoundStartable::StartInfo const*);
HoldSound(nn::atk::SoundHandle*, char const*, char const*, nn::atk::SoundStartable::StartInfo const*);
PrepareSound(nn::atk::SoundHandle*, unsigned int, char const*, nn::atk::SoundStartable::StartInfo const*);
PrepareSound(nn::atk::SoundHandle*, unsigned int, nn::atk::SoundStartable::StartInfo const*);
PrepareSound(nn::atk::SoundHandle*, char const*, char const*, nn::atk::SoundStartable::StartInfo const*);
PrepareSound(nn::atk::SoundHandle*, char const*, nn::atk::SoundStartable::StartInfo const*);

} } } 
