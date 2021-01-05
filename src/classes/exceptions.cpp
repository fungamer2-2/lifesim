#include <iostream>
#include "../../headers/classes/exceptions.h"

const char * lsim::invalidDeleteException::what() const noexcept {
	return "lsim::invalidDeleteException : code " + this->code;
}