/**
 * GameStats3.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * Demonstrating constants
 */

#include <iostream>

int main()
{
  // you can't assign a new value to a constant after init
  const int ALIEN_POINTS = 150;
  int aliensKilled       = 10;
  int score              = aliensKilled * ALIEN_POINTS;
  std::cout << "[APPLICATION] score: " << score << std::endl;

  // a set of unsigned int constants
  // enumerators begins at 0 and increases by 1
  enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
  difficulty myDifficulty = EASY;
  std::cout <<  "[APPLICATION] myDifficulty(enum): " << myDifficulty << std::endl;

  enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
  shipCost myShipCost = BOMBER_COST;

  std::cout << "[APPLICATION] To upgrade my ship to a Cruiser will cost: " <<
  (CRUISER_COST - myShipCost) << " Resource Points." << std::endl;

  return 0;
}
