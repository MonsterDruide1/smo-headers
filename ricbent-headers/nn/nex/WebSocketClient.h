#pragma once

namespace nn { namespace nex { 

class WebSocketClient
{
public:
    WebSocketClient();
    ~WebSocketClient();
    ReleaseResources();
    StaticWSlayRecvCallback(wslay_event_context*, unsigned char*, unsigned long, int, void*);
    WSlayRecvCallback(wslay_event_context*, unsigned char*, unsigned long, int);
    StaticWSlayOnMsgRecvCallback(wslay_event_context*, wslay_event_on_msg_recv_arg const*, void*);
    WSlayOnMsgRecvCallback(wslay_event_context*, wslay_event_on_msg_recv_arg const*);
    StaticWSlaySendCallback(wslay_event_context*, unsigned char const*, unsigned long, int, void*);
    WSlaySendCallback(wslay_event_context*, unsigned char const*, unsigned long, int);
    StaticWSlayGenMaskCallback(wslay_event_context*, unsigned char*, unsigned long, void*);
    StaticWSlayCanRecvCallback(wslay_event_context*, void*);
    WSlayCanRecvCallback(wslay_event_context*);
    Connect(nn::nex::String const&, nn::nex::String const&, int, nn::nex::WSSConfig*);
    RunConnectThread(void*);
    Disconnect();
    SendHandshake();
    RecvHandshake(char*, unsigned long, unsigned long*);
    StartDataTransfer(char const*, unsigned long);
    Recv(unsigned char*, unsigned long, unsigned long*);
    CloseImpl(unsigned short, char const*);
    SetNextDeadTime(nn::nex::Time const&);
    Send(unsigned char const*, unsigned long, unsigned long*);
    SendImpl(unsigned char const*, unsigned long, unsigned long*);
    Flush();
    CheckLife();
    GetSocketHandle() const;
    Close();
    Shutdown();
    WS_REGARD_AS_DEAD_PING_COUNT;
    WS_REASON_MESSAGE_BUFFER_SIZE;
    WS_RECV_MESSAGE_BUFFER_SIZE;
    WS_CONNECT_SLEEP_TIME_MSEC;
    WS_CONNECT_SEND_RECV_TIMEOUT_MSEC;
    WS_MESSAGE_HEADER_SIZE;
    MAX_URL_SIZE;
};

} } 
