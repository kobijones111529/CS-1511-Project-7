#pragma once

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Bag {
public:
  void add(const std::string &item);
  void display();

private:
  std::vector<std::string> m_items;
};