/**
 * CritterFarm.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * object containment (aggregation)
 */

 /*
  Aggregation example: declare a data member that can hold another object (has-a relationship)
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Critter {
public:
  Critter(const string& name = "");
  string GetName() const;

private:
  string m_Name;
};

Critter::Critter(const string& name):
  m_Name(name)
{}

inline string Critter::GetName() const {
  return m_Name;
}

class Farm {
public:
  Farm(int spaces = 1);
  void Add(const Critter& aCritter);
  void RollCall() const;

private:
  vector<Critter> m_Critters;
};

// Allocate memory for 3 spaces
Farm::Farm(int spaces) {
  m_Critters.reserve(spaces);
}

void Farm::Add(const Critter& aCritter) {
  m_Critters.push_back(aCritter);
}

void Farm::RollCall() const {
  for(vector<Critter>::const_iterator iter = m_Critters.begin(); iter != m_Critters.end(); ++iter) {
    cout << iter->GetName() << " here." << endl;
  }
}

int main() {
  Critter crit("Poochie");
  cout << "My critter's name is " << crit.GetName() << endl;

  cout << endl << "Creating critter farm." << endl;
  Farm myFarm(3);

  cout << endl << "Adding three critters to the farm" << endl;
  myFarm.Add(Critter("Moe"));
  myFarm.Add(Critter("Larry"));
  myFarm.Add(Critter("Curly"));

  cout << endl << "Calling Roll..." << endl;
  myFarm.RollCall();

  return 0;
}
