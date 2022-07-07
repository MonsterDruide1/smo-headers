#pragma once

namespace nn { namespace nex { 

class IOCompletionNotifier
{
public:
    IOCompletionNotifier();
    ~IOCompletionNotifier();
    CreateIOCompletionContextSimple();
    DeleteIOCompletionContextSimple(nn::nex::IOCompletionContext*);
    CreateIOCompletionContext();
    DeleteIOCompletionContext(nn::nex::IOCompletionContext*);
    WaitForIOCompletion(nn::nex::IOCompletionContext*, unsigned int);
    WaitForPollIOCompletion(unsigned int);
    WaitForIOCompletion(unsigned int);
};

} } 
