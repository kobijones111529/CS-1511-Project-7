#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Bag {
public:
  Bag();
  ~Bag() = default;

  void add(const std::string &item);
  void display();

private:
  size_t m_size;
  std::unique_ptr<std::string[]> m_items;
};