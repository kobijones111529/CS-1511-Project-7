#include "Bag.hpp"

Bag::Bag() { m_items = {}; }

void Bag::add(std::string item) { m_items.push_back(item); }

void Bag::display() {
  std::cout << "Items in bag:" << std::endl;
  for (std::string item : m_items) {
    std::cout << '\t' << item << std::endl;
  }
}