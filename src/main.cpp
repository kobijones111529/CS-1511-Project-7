#include <iostream>
#include <string>

#include "Bag.hpp"

int main() {
  Bag grabBag;
  std::string item;

  // Test add()
  std::cout << "Enter an item ";
  std::getline(std::cin, item);
  while (item != "quit") {
    grabBag.add(item);
    std::cout << "Enter an item or 'quit': ";
    getline(std::cin, item);
  }
  grabBag.display();
}