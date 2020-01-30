#include <iostream>
#include "Pets.h"
using namespace std;

int main(int argc, char **argv){
  //declaring new pets
  Pets *pet1 = new Pets();
  Pets *pet2 = new Pets("dog", 3, "cat", 800);
  Pets *pet3 = new Pets("hopper", 7, "tiger", 900);

  //printing info
  pet1->printInfo();
  pet2->printInfo();
  pet3->printInfo();

  //deleting memory
  delete pet1;
  delete pet2;
  delete pet3;

  return 0;
}
