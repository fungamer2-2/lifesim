#ifndef INCHOICE_H
#define INCHOICE_H

#include <vector>
#include <cstdarg>

namespace lsim {
	namespace io {
		template <class T, class ...Ts>
		class Menu {
			public:
				Menu(Ts ...elements);
				void display();
				int getUserInput();
			private:
				std::vector<T> choices;
				void store(T first, Ts ...rest);
		}; // class Menu
	} // namespace io
} // namespace lsim

// #include "../../src/io/inchoice.cpp"

#endif // ifndef INCHOICE_H

#ifndef INCHOICE_H
#include "../../src/io/inchoice.cpp"
#endif