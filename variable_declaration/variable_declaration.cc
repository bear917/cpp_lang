#include <iostream>
using namespace std;

int main()
{
  /*
  int age_for_student;
  double score_for_student;
  char level_for_student;

  // 變數未初始化，其值未知，編譯結束後，每次執行程式系統隨機分配，故幾乎每次結果都不同 
  cout << "\n年級\t得分\t等級";
  cout << "\n" << age_for_student
	   << "\t" << score_for_student
	   << "\t" << level_for_student
	   << "\n";
  */

  /* 變數宣告階段，使用建構子constructor指定初值，此時會賦值零予變數 */
  int age_for_student = int();
  double score_for_student = double();
  char level_for_student = char(); /* 空字元 */

  cout << "\n年級\t得分\t等級";
  cout << "\n" << age_for_student
	   << "\t" << score_for_student
	   << "\t" << level_for_student
	   << "\n";

  age_for_student = 5;
  score_for_student = 80.0;
  level_for_student = 'A';

  cout << "\n年級\t得分\t等級";
  cout << "\n" << age_for_student
	   << "\t" << score_for_student
	   << "\t" << level_for_student
	   << "\n";
  
  return 0;
}
