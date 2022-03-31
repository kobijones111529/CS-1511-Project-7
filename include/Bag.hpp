#include <iostream>
#include <vector>

class Bag {
public:
  Bag() = default;
  Bag(std::vector<std::string> items);

  void add(std::string item);
  void display();

private:
  std::vector<std::string> m_items;
};