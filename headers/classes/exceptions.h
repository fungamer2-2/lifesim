#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

namespace lsim {
	class invalidDeleteException : public std::exception {
		public:
			invalidDeleteException(int nOffset);
			const char * what() const noexcept;
		private:
			constexpr static int code = 0x110;
			int offset;
	}; // class invalidDeleteException
} // namespace lsim

#endif // ifndef EXCEPTIONS_H