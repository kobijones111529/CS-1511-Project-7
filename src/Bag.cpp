#include "Bag.hpp"

void Bag::add(const std::string &item) { m_items.push_back(item); }

void Bag::display() {
  std::cout << "Items in bag:" << std::endl;
  for_each(m_items.begin(), m_items.end(),
           [](const auto &item) { std::cout << '\t' << item << std::endl; });
}