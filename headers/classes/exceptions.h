#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

namespace lsim {
	class invalidDeleteException : public std::exception {
		public:
			const char * what() const noexcept;
		private:
			constexpr static int code = 0x110;
	}; // class invalidDeleteException
} // namespace lsim

#endif // ifndef EXCEPTIONS_H