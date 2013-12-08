//
// Copyleft RIME Developers
// License: GPLv3
//
// 2011-03-14 GONG Chen <chen.sst@gmail.com>
//
#ifndef RIME_COMMON_H_
#define RIME_COMMON_H_

#include <cstdlib>
#include <string>
#include <memory>
#include <boost/signals2/connection.hpp>
#include <boost/signals2/signal.hpp>
#include <glog/logging.h>

namespace rime {

using boost::signals2::connection;
using boost::signals2::signal;

using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;
using std::make_shared;
using std::enable_shared_from_this;

template <class A, class B>
shared_ptr<A> As(const B& ptr) {
  return std::dynamic_pointer_cast<A>(ptr);
}

template <class A, class B>
bool Is(const B& ptr) {
  return bool(As<A, B>(ptr));
}

template <class T>
shared_ptr<T> New() {
  return std::make_shared<T>();
}

template <class T, class A>
shared_ptr<T> New(const A& a) {
  return std::make_shared<T>(a);
}

}  // namespace rime

#endif  // RIME_COMMON_H_
