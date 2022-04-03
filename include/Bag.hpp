#include <iostream>
#include <string>
#include <vector>

class Bag {
public:
  Bag() = default;
  Bag(const std::vector<std::string> &items);

  void add(const std::string &item);
  void display();

private:
  std::vector<std::string> m_items;
};