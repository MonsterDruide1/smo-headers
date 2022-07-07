#pragma once

namespace nn { namespace nex { namespace SingleStepJob {

Start(nn::nex::CallContext*, bool);
SingleStep();
CompleteJob(nn::nex::qResult const&);

} } } 
