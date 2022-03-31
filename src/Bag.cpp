#include "Bag.hpp"

Bag::Bag(std::vector<std::string> items) : m_items(std::move(items)) {}

void Bag::add(std::string item) { m_items.push_back(item); }

void Bag::display() {
  std::cout << "Items in bag:" << std::endl;
  for (const auto &item : m_items) {
    std::cout << '\t' << item << std::endl;
  }
}