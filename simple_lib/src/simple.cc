#include "simple.h"
#include <iostream>
#include "boost/system/error_code.hpp"

void simpleFun() {
  namespace errc = boost::system::errc;
  std::cout << errc::make_error_code(errc::success) << "\n";
}