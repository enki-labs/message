#pragma once

#include <string>
#include <iMessage.h>
#include <iRequest.h>
#include <iMessageHandler.h>

namespace message {

/**
* @class iMessenger
* @brief Messenger interface.
*/
struct iMessenger
{

    virtual ~iMessenger () {};

    /**
    * Publish a message.
    */
    virtual
    void publish (  const std::string&  topic
                ,   iMessage_ptr        message
                ) = 0;

    /**
    * Make a request.
    */
    virtual
    iRequest_ptr request (  const std::string&  topic
                        ,   iMessage_ptr        message
                        ) = 0;

    /**
    * Start message handling.
    */
    virtual
    void start () = 0;

    /**
    * Stop message handling.
    */
    virtual
    void stop () = 0;

    /**
    * Subscribe to a given topic.
    */
    virtual
    void subscribe (    const std::string&  messageClass
                    ,   const std::string&  topic
                    ,   iMessageHandler     handler
                    ) = 0;
};

}; //namespace message
    


