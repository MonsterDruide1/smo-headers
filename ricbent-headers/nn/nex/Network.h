#pragma once

namespace nn { namespace nex { 

class Network
{
public:
    AcquireInstance();
    ReleaseInstance();
    GetNATTraversalEngine();
    GetMyLocalURLs(unsigned int, nn::nex::qList<nn::nex::StationURL>*) const;
    GetLocalURLs(nn::nex::qList<nn::nex::StationURL>*) const;
    SortAndFilterTargetURLs(nn::nex::qList<nn::nex::StationURL>*);
    GetP2PDataPacketDefaultSignatureKey();
    Network();
    RegisterTransportAdapter(nn::nex::TransportAdapter*);
    SetRC4Encryption();
    SetP2PDataPacketDefaultSignatureKey(unsigned char const*, unsigned long);
    InitChecksumAlgorithm();
    ~Network();
    UnregisterTransportAdapter();
    EnableEncryption();
    DisableEncryption();
    ResetEncryption();
    GetLocalURLs() const;
    GetLocalURLs();
    AddLocalURL(nn::nex::StationURL const&);
    RemoveLocalURL(nn::nex::StationURL const&);
    ReplaceLocalURL(nn::nex::StationURL const&);
    ReplaceLocalURL(nn::nex::StationURL const&, nn::nex::StationURL const&);
    SetRC4Encryption(nn::nex::Stream::Type);
    ResetEncryption(nn::nex::Stream::Type);
    InitP2PChecksumAlgorithmKey();
    SetP2PChecksumAlgorithm(nn::nex::KeyedChecksumAlgorithm*);
    EnableP2PDataPacketSignature();
    DisableP2PDataPacketSignature();
    SetP2PDataPacketSessionSignatureKey(nn::nex::qVector<unsigned char> const&);
    ClearP2PDataPacketSessionSignatureKey();
    GetP2PDataPacketSessionSignatureKeyPaylod();
    s_bEncryptionEnabled;
    s_EnableRendezVousChecksumAlgorithm;
    s_EnableP2PChecksumAlgorithm;
    s_byDefaultChecksumKey;
    s_pTransportAdapter;
    s_eP2PState;
    s_P2PSignatureKeyData;
    s_P2PSignatureKeyLen;
};

} } 
