#pragma once

namespace nn { namespace nex { namespace WebSocketDriver {

SetSslServerCertFilePath(nn::nex::String const&);
SetSslPrivateKeyFilePath(nn::nex::String const&);
SetReturnHttpStatusInterface(nn::nex::ReturnHttpStatusInterface*);
SetAdditionalHandshakeHeader(nn::nex::String const&);
HTTP_STATUS_CODE_UNDER_MAINTENANCE;
HTTP_STATUS_CODE_GONE;
HTTP_STATUS_CODE_APPLICATION_VERSION_IS_OLD;
HTTP_STATUS_CODE_OUT_OF_SERVICE;

} } } 
