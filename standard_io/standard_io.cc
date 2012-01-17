#include <iostream>
using namespace std;

int main(){

  int number = int();

  cout << "Hello! World!" << endl; /* 標準輸出預設為螢幕，可於執行時重新導向至檔案 */
  cout << "enter a number" << endl;
  cin >> number;
  cout << "show number\t" << number << endl;
  cerr << "Sorry! World!" << endl; /* 標準錯誤無論如何一定會顯示於螢幕上，其內容可為錯誤訊息或任意內容 */


  return 0;
}
