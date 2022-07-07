#pragma once

namespace nn { namespace atk { 

class TaskProfileLogger
{
public:
    TaskProfileLogger();
    Record(nn::atk::TaskProfile const&);
    RegisterReader(nn::atk::AtkProfileReader<nn::atk::TaskProfile>&);
    UnregisterReader(nn::atk::AtkProfileReader<nn::atk::TaskProfile> const&);
    SetProfilingEnabled(bool);
    Finalize();
};

} } 
