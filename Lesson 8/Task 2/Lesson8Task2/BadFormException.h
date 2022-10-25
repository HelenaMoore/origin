#pragma once
#include <stdexcept>
#include <iostream>
#include <string>

class BadFormException : public std::domain_error
{
public:
	BadFormException(const std::string& message);
};