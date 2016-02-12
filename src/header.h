/**
 * header.h
 * Contributors:
 *  * Jens Ackou
 * Description:
 *  Collection of functions for the terminal demo program
 */

#include <iostream>
#include "books/beginning-cpp-through-game-programming-third-edition/include.h"

bool loop = true;

// Check if user enters a valid Integer
int validInput()
{
  int x;
  std::cin >> x;

  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
    std::cin >> x;
  }
  return x;
}

// Print a friendly introduction
void introduction() {
  std::cout << "Welcome to my C++ Exercise and Reference collection !" <<
    std::endl;
  std::cout << "#####################################################" <<
    std::endl << std::endl;
}

// Pick an option by entering an integer value
int choice() {
  int input;
  std::cout << std::endl << ":: ";

  input = validInput();
  return input;
}

// Clear up the screen by spamming newlines
void clear() {
  for (int i = 0; i < 100; i++) {
    std::cout << std::endl;
  }
}

// Pause the terminal by asking for user input
// (need an alternative so I don't need to ask for any input)
void pauseTerminal() {
  int pause = 0;
  std::cout << std::endl << "Type anything and press ENTER to continue ...";
  std::cin >> pause;
}

// Display all exercises to pick from
// (I have no more flexible way of doing this at the moment)
void menu()  {
  const char *choice[] = { "GameOver", "2", "3", "4", "5", "6", 0 };

  for (int i = 0; i > -1; i++) {
    if (choice[i] == 0) break;
    std::cout << "[" << i + 1 << "] " << choice[i] << std::endl;
  }
}

// Run the selected application
void initApplication(int choice)
{
  clear();
  Application *app;

  switch (choice) {
    {
    // Beginning-cpp-through-game-programming-third-edition
    // Chapter-1
    case 1:
      app = new GameOver();
      break;

    case 2:

      // app = new GameOver();
      break;

    case 3:

      // app = new GameOver();
      break;

    case 4:

      // app = new GameOver();
      break;

    case 5:

      // app = new GameOver();
      break;

    case 6:

      // app = new GameOver();
      break;
    }
  }

  app->run();
}
