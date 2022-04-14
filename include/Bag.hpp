#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Bag {
public:
// #ifndef USE_STANDARD_LIBRARY
  // Bag();
  // ~Bag() {
  //   std::cout << "Dest" << std::endl;
  // }
// #endif

  void add(const std::string &item);
  void display();

private:
// #ifdef USE_STANDARD_LIBRARY
  std::vector<std::string> m_items;
// #else
  // size_t m_size;
  // std::unique_ptr<std::string[]> m_items;
// #endif
};