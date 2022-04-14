#include <iostream>
#include <string>

#include "Bag.hpp"

using namespace std;

int main() {
  Bag grabBag;
  string item;

  // Test add()
  cout << "Enter an item ";
  getline(cin, item);
  while (item != "quit") {
    grabBag.add(item);
    cout << "Enter an item or 'quit': ";
    getline(cin, item);
  }
  grabBag.display();
}