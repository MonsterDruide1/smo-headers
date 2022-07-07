#pragma once

namespace nn { namespace nex { 

class Message
{
public:
    Message();
    InitCommon();
    InitBuffer();
    SetToBegining();
    Message(nn::nex::Buffer*);
    ~Message();
    SetSourceEndPoint(nn::nex::EndPoint*);
    SetSize();
    GetBuffer();
    GetSize();
    GetLastError();
    AddDataFromMessage(nn::nex::Message const&);
    AppendMessage(nn::nex::Message&);
    TruncateMessage(nn::nex::Message&);
    ExtractMessage(nn::nex::Message&);
};

} } 
