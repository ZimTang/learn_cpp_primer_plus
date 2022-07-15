#include <iostream>

using namespace std;

/*
  共用体
*/

union demo {
  int id_num;
  char id_chr;
};

int main(void)
{
  int id = 8;

  demo idVal;
  idVal.id_num = 1;

  cout << idVal.id_num << endl;
  cout << sizeof(idVal) << endl;


  return 0;
}