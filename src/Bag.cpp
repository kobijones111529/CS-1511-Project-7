#include "Bag.hpp"

#ifdef USE_STANDARD_LIBRARY

void Bag::add(const std::string &item) { m_items.push_back(item); }

void Bag::display() {
  std::cout << "Items in bag:" << std::endl;
  for (const auto &item : m_items) {
    std::cout << '\t' << item << std::endl;
  }
}

#else

Bag::Bag() : m_size(0), m_items(std::unique_ptr<std::string[]>()) {}

void Bag::add(const std::string &item) {
  std::unique_ptr<std::string[]> newArray =
      std::unique_ptr<std::string[]>(new std::string[m_size + 1]);
  for (size_t i = 0; i < m_size; i++) {
    newArray[i] = m_items[i];
  }
  newArray[m_size++] = item;
  m_items = std::move(newArray);
}

void Bag::display() {
  std::cout << "Items in bag: " << std::endl;
  for (size_t i = 0; i < m_size; i++) {
    std::cout << '\t' << m_items[i] << std::endl;
  }
}

#endif