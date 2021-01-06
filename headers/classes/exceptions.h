#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>
#include <string>

namespace lsim {
	class invalidDeleteException : public std::exception {
		public:
			invalidDeleteException(int offset = 0);
			const char * what() const noexcept;
		private:
			constexpr static int code = 0x110;
			std::string msg;
	}; // class invalidDeleteException
	class invalidIndexException : public std::exception {
		public:
			invalidIndexException(int offset = 0);
			const char * what() const noexcept;
		private:
			constexpr static int code = 0x120;
			std::string msg;
	}; // class invalidIndexException
	class fileError : public std::exception {
		public:
			fileError(int offset = 0);
			const char * what() const noexcept;
		private:
			constexpr static int code = 0x130;
			std::string msg;
	}; // class fileError
} // namespace lsim

#endif // ifndef EXCEPTIONS_H