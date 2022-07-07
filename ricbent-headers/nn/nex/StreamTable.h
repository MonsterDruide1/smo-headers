#pragma once

namespace nn { namespace nex { 

class StreamTable
{
public:
    FindStream(nn::nex::StationURL const*);
    StreamTable();
    ~StreamTable();
    RemoveStream(nn::nex::ConnectionOrientedStream*);
    GetItem(unsigned int);
    FindStream(char const*);
};

} } 
