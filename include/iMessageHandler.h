#pragma once

#include <boost/function.hpp>
#include <boost/bind.hpp>
#include <iMessage.h>

namespace message {

typedef boost::function<void (iMessage_ptr msg)> iMessageHandler;

}; //namespace message

