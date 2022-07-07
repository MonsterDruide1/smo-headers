#pragma once

namespace nn { namespace nex { 

class CurlHttpConnection
{
public:
    StaticWriteCallback(void*, unsigned long, unsigned long, void*);
    WriteCallback(void*, unsigned long, unsigned long);
    StaticReadCallback(void*, unsigned long, unsigned long, void*);
    ReadCallback(void*, unsigned long, unsigned long);
    StaticHeaderCallback(void*, unsigned long, unsigned long, void*);
    HeaderCallback(void*, unsigned long, unsigned long);
    StaticProgressCallback(void*, double, double, double, double);
    ProgressCallback(double, double, double, double);
    StaticCurlSslContextCallback(void*, void*, void*);
    CurlHttpConnection();
    ~CurlHttpConnection();
    Initialize(char const*, nn::nex::HttpConnection::Method);
    AddPostData(char const*, char const*);
    AddHeaderField(char const*, char const*);
    UseChunkedPost(unsigned long);
    CompleteChunkedPost();
    SetupCurlParameter();
    RunThread(void*);
    ConnectAsync();
    Cancel();
    GetStatusCode(int*) const;
    Read(unsigned char*, unsigned long*, unsigned long);
    WritePostChunk(unsigned char*, unsigned long);
    GetWritableSize() const;
    GetError() const;
    IsReceivingHeaderCompleted() const;
    IsFinished() const;
    IsCompleteChunkedPost() const;
    AddFormData(char const*, void const*, unsigned long);
    GetResponseHeader(char const*, nn::nex::String*) const;
    AddRootCa(unsigned char const*, unsigned long);
    SetTransferBufferSize(unsigned long);
    s_Proxy;
};

} } 
