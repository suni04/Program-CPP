#include <iostream>

using namespace std;

int main()
{
  char grade;

  cout << "Inputkan grade: ";
  cin >> grade;

  switch (toupper(grade))
  {
  case 'A':
    cout << "Luar biasa!" << endl;
    break;
  case 'B':
  case 'C':
    cout << "Bagus!" << endl;
  case 'D':
    cout << "Anda lulus" << endl;
    break;
  case 'E':
  case 'F':
    cout << "Anda remedi" << endl;
    break;
  default:
    cout << "Grade Salah!" << endl;
  }
  return 0;
}