#ifndef MENU_H
#define MENU_H

#include <vector>

namespace lsim {
	namespace io {
		class Menu {
			public:
				Menu(std::vector<char *> choices = std::vector<char *>());
				void display(bool notNumerated = false);
				int awaitUserInput();
				void add(char *nChoice);
				bool remove(char *choice);
			private:
				std::vector<char *> choices;
		};
	} // namespace io
} // namespace lsim

// #include "../../src/io/inchoice.cpp"

#endif // ifndef MENU_H