#include <iostream>
#include <string>

using namespace std;
struct inflatable
{
  string name;
  float volume;
  double price;
};

int main(void)
{

  // 结构体数组
  inflatable guest[2] =
      {
        {
          "curry",
          1.88,
          29.99
        },
       {
          "james",
          1.98,
          29.19
        }
      };


  return 0;
}