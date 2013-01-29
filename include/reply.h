#pragma once

#include <boost/shared_ptr.hpp>

namespace message {

struct Reply
{
};

typedef boost::shared_ptr<Reply> Reply_ptr;

}; //namespace message

