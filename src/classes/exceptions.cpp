#include "../../headers/classes/exceptions.h"

lsim::invalidDeleteException::invalidDeleteException(int offset) {
	this->msg = "lsim::invalidDeleteException::what() : code ";
	this->msg.append(std::to_string(this->code + offset));
}

const char * lsim::invalidDeleteException::what() const noexcept {
	return this->msg.c_str();
}

lsim::invalidIndexException::invalidIndexException(int offset) {
	this->msg = "lsim::invalidIndexException::what() : code ";
	this->msg.append(std::to_string(this->code + offset));
}

const char * lsim::invalidIndexException::what() const noexcept {
	return this->msg.c_str();
}

lsim::fileError::fileError(int offset) {
	this->msg = "lsim::fileError::what() : code ";
	this->msg.append(std::to_string(this->code + offset));
}

const char * lsim::fileError::what() const noexcept {
	return this->msg.c_str();
}