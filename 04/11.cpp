#include <iostream>
// 声明结构体
struct inflatable
{
  char name[20];
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

  inflatable pal = {
      "stephen",
      3.12,
      32.99};

  return 0;
}