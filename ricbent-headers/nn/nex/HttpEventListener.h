#pragma once

namespace nn { namespace nex { namespace HttpEventListener {

ProcessResponseHeader(nn::nex::HttpConnection*, int);
ProcessResponse(unsigned char const*, unsigned long);
PostChunkedBuffer(nn::nex::HttpConnection*, unsigned char*, unsigned long, bool*);

} } } 
