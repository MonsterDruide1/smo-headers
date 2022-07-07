#pragma once

namespace nn { namespace nex { 

class StreamSettings
{
public:
    SetIsEncryptionRequired(bool);
    StreamSettings();
    ~StreamSettings();
    SetEncryptionKey(nn::nex::Key const&);
    SetEncryptionKey(void const*, unsigned long);
    SetEncryptionKey(nn::nex::qVector<unsigned char> const&);
    IgnoreChangeSettings();
    SetKey(nn::nex::String const&);
    GetEncryptionKeyPaylod();
    SetKey(unsigned int);
    SetWindowSize(unsigned long);
    GetWindowSize() const;
    SetMaxRetransmission(unsigned long);
    GetMaxRetransmission() const;
    GetMaxStreamNumber() const;
    SetKeepAliveTimeout(unsigned int);
    GetKeepAliveTimeout() const;
    SetMaxSilenceTime(unsigned int);
    GetMaxSilenceTime() const;
    SetRetransmitTimeoutMultiplier(float);
    GetRetransmitTimeoutMultiplier() const;
    SetExtraRetransmitTimeoutMultiplier(float);
    GetExtraRetransmitTimeoutMultiplier() const;
    SetExtraRetransmitTimeoutTrigger(unsigned int);
    GetExtraRetransmitTimeoutTrigger() const;
    SetInitialRTT(unsigned int);
    GetInitialRTT() const;
    SetSynInitialRTT(unsigned int);
    GetSynInitialRTT() const;
    SetRTTRetransmit(unsigned long);
    GetRTTRetransmit() const;
    FaultDetectionIsActive();
    SetActiveFaultDetection(bool);
};

} } 
