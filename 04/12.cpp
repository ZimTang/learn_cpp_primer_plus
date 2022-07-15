#include <iostream>
#include <string>

// using namespace std;
struct inflatable
{
  std::string name;
  float volume;
  double price;
};

int main(void)
{
  using namespace std;

  inflatable guest =
      {
          "curry",
          1.88,
          29.99};

  inflatable pal;

  // 结构体拷贝

  pal = guest;

  return 0;
}