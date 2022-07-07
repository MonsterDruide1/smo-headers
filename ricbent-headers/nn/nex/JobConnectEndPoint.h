#pragma once

namespace nn { namespace nex { 

class JobConnectEndPoint
{
public:
    JobConnectEndPoint(nn::nex::Job::JobType, nn::nex::ConnectionManager*, unsigned int, nn::nex::Buffer*, nn::nex::Buffer*, nn::nex::qList<nn::nex::StationURL> const&, nn::nex::EndPoint**, unsigned int, bool);
    TryDirectConnect();
    TryConnectViaRouting();
    ConnectionFailed();
    SortURLs();
    ~JobConnectEndPoint();
    ConnectCancelled();
    ReportNATTraversalResult(bool);
    TestSuspendedJobState();
    CheckExceptions();
    ConnectionCancelled();
    ReportConnectResult(nn::nex::qResult);
    SelectConnectionTechnique();
    TestCurrentURL();
    IsRoutedURL(nn::nex::StationURL&);
    ResolveCurrentURL();
    PrepareNATTraversal();
    WaitForNATTraversal();
    RestoreOriginalPort();
    CheckForUpdatedURLImpl();
    WaitForURLResolution();
    TryCurrentURL();
    ProcessConnectionResult();
    ConnectionSucceeded();
    ProcessConnectionFailure();
    CheckForUpdatedURL();
    SetFinalState(nn::nex::CallContext::State, nn::nex::qResult);
    CancelJob();
    ProcessInTermination();
    Trace(unsigned long);
    s_bForceNATTraversal;
};

} } 
