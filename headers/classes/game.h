#ifndef GAME_H
#define GAME_H

#include "./mainCharacter.h"

namespace lsim {
	class Game {
		public:
			Game();
			lsim::mainCharacter player;
			lsim::io::Menu mainMenu;
		private:
	}; // class Game
} // namespace lsim

#endif // ifndef GAME_H