#pragma once

#include <boost/shared_ptr.hpp>

namespace message {

struct iMessage
{

    virtual ~iMessage () {};

};

typedef boost::shared_ptr<iMessage> iMessage_ptr;

}; //namespace message

