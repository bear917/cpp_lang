#include <iostream>

using namespace std;

int main()
{
  cout << "型態\t大小(byte)";
  cout << "\n整數";
  cout << "\nint\t" << sizeof(int); // newline給在前面，等於前一行尾端加入newline，此處可省sizeof後面多加cout
  cout << "\nlong\t" << sizeof(long);
  cout << "\n非整數，含浮點數、字元、邏輯真假值";
  cout << "\nfloat\t" << sizeof(float);
  cout << "\ndouble\t" << sizeof(double);
  cout << "\nchar\t" << sizeof(char);

  cout << "\nbool\t" << sizeof(bool);
  cout << "\ntrue\t" << sizeof((1==1)) << "\t以1==1觀察之";
  cout << "\ntrue\t" << sizeof(true) << "\t以true觀察之";
  cout << "\nfalse\t" << sizeof((1==2)) << "\t以1==2觀察之";
  cout << "\ntalse\t" << sizeof(false) << "\t以false觀察之";
  cout << "\n";
  cout << "\ntrue回傳值\t" << static_cast<int>(true);
  cout << "\nfalse回傳值\t" << static_cast<int>(false);
  cout << "\n";

  return 0;
}
