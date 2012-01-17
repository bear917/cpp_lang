#include <iostream>
#include <typeinfo>	// for "typeid"

using namespace std;

int main()
{
  cout << "數字出現在程式時，以「1」為例，可能情況為：表示「數值」1。表示「字元」1。";
  cout << "\n數值1，其type length隨表示法而不同。";
  cout << "\nsizeof(1)\t" << sizeof(1);
  cout << "\nsizeof(1.0)\t" << sizeof(1.0);

  // get the type of something in C++ reference: http://www.cplusplus.com/doc/tutorial/typecasting/
  cout << "\n常用型態表示法";
  cout << "\ntypeof(1)\t" << typeid(1).name();
  cout << "\ntypeof(-1)\t" << typeid(-1).name();
  cout << "\ntypeof(1.0)\t" << typeid(1.0).name();
  cout << "\ntypeof(-1.0)\t" << typeid(-1.0).name();
  cout << "\ntypeof('A')\t" << typeid('A').name();
  cout << "\ntypeof(\"hello\")\t" << typeid("hello").name();
  cout << "\ntypeof(true)\t" << typeid(true).name();
  cout << "\n";

  cout << "\n欲指定型態可附註於數值後";
  cout << "\ntypeof(1)\t" << typeid(1).name();
  cout << "\ntypeof(1L)\t" << typeid(1L).name();
  cout << "\ntypeof(1d)\t" << typeid(1u).name();
  cout << "\ntypeof(1.0)\t" << typeid(1.0).name();
  cout << "\ntypeof(1.0f)\t" << typeid(1.0f).name();
  
  cout << "\ncout輸出數值時，僅能以十進制表示";
  cout << "\n26顯示" << 26;
  cout << "\n032顯示" << 032;
  cout << "\n0x1A顯示" << 0x1A;
  cout << "\n";

  return 0;
}

