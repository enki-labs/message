#pragma once

#include <boost/shared_ptr.hpp>
#include <reply.h>
#include <iMessageHandler.h>

namespace message {

/**
* @class iRequest
* @brief Request.
*/
struct iRequest
{

    virtual ~iRequest () {};

    /**
    * Wait on reply.
    */
    virtual
    Reply_ptr wait (   const int timeoutSeconds = 0
                    ) = 0;

    /**
    * Callback.
    */
    virtual
    void  callback (    iMessageHandler handler
                    ) = 0;
    
    /**
    * Cancel request.
    */
    virtual
    void cancel () = 0;

};

typedef boost::shared_ptr<iRequest> iRequest_ptr;

}; //namespace messenger
