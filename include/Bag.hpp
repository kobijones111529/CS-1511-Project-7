#include <iostream>
#include <vector>

class Bag {
private:
  std::vector<std::string> m_items;

public:
  Bag();

  void add(std::string item);
  void display();
};