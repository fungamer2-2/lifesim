#include "../../headers/classes/exceptions.h"

lsim::invalidDeleteException::invalidDeleteException(int nOffset) {
	this->offset = nOffset;
}

const char * lsim::invalidDeleteException::what() const noexcept {
	return "lsim::invalidDeleteException : code " + (this->code + this->offset);
}