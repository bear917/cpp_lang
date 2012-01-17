#include <iostream>
using namespace std;

int main(){
  
  int score = 0;

  cout << "enter student score >";
  cin >> score;
  cout << "Wheather the student passes?\t"
	   << (score>=60 ? "Pass" : "Fail")   /* 條件運算子 條件 ? 條件判斷值非零之回傳值  : 條件判斷值為零之回傳值 */
	   << endl;
  cout << "Wheather the score is odd number?\t"
	   << (score%2 ? "Yes, it's odd." : "No, it's even.")
	   << endl;

  cout << "Wheather the score is even number?\t"
	   << (score%2 ? "No, it's odd." : "Yes, it's even.")
	   << endl;
  return 0;
}
