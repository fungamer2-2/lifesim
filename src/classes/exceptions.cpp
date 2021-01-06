#include <iostream>
#include "../../headers/classes/exceptions.h"

const char * lsim::invalidDeleteException::what() const noexcept {
	return "lsim::invalidDeleteException : code " + this->code;
}

const char * lsim::invalidIndexException::what() const noexcept {
	return "lsim::invalidIndexException : code " + this->code;
}