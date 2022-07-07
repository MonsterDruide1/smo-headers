#pragma once

namespace nn { namespace nex { 

class HttpConnection
{
public:
    GetBoundaryString() const;
    GetHttpConnection();
    ReleaseHttpConnection(nn::nex::HttpConnection*);
    IsUseChunkedPost() const;
    GetConnectionCount();
    ~HttpConnection();
    NoMoreResponseHeader();
    s_ConnectionCount;
    s_pHttpSessionEventListener;
};

} } 
