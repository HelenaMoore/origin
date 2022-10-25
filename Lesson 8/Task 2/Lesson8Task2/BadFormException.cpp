#include "BadFormException.h"

BadFormException::BadFormException(const std::string& message) : domain_error (message) {}