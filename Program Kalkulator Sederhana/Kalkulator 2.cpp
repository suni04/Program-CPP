#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
a:
  cout << "============================" << endl;
  cout << " Kalkulator Sederhana " << endl;
  cout << "============================" << endl;
  int pil, lagi;
  float satu, dua;
  cout << "1. Pejumblahan" << endl;
  cout << "2. Pembagian" << endl;
  cout << "3. Perkalian" << endl;
  cout << "4. Pengurangan" << endl;
  cout << "Masukan Pilihan = ";
  cin >> pil;

  if (pil <= 4 && pil >= 1)
  {
    cout << endl;
    switch (pil)
    {
    case 1:
      cout << " Anda Memilih Pejumblahan [ + ]" << endl;
      break;

    case 2:
      cout << " Anda Memilih Pembagian [ : ]" << endl;
      break;

    case 3:
      cout << " Anda Memilih Perkalian [ x ]" << endl;
      break;

    case 4:
      cout << " Anda Memilih Pengurangan [ - ]" << endl;
      break;
    }
    cout << " Angka Pertama = ";
    cin >> satu;
    cout << " Angka Kedua =  ";
    cin >> dua;
    switch (pil)
    {
    case 1:
      cout << " " << satu << "+" << dua << " = " << satu + dua << endl;
      break;

    case 2:
      cout << " " << satu << ":" << dua << " = " << satu / dua << endl;
      break;

    case 3:
      cout << " " << satu << "x" << dua << " = " << satu * dua << endl;
      break;

    case 4:
      cout << " " << satu << "-" << dua << " = " << satu - dua << endl;
      break;
    }
  }
  else
  {
    cout << "Kesalahan silahkan ulangi !"
         << "\n\n\n";
  }
  cout << endl;
  cout << "pilih lagi = [1] / tidak = [2] ??";
  cin >> lagi;
  if (lagi == 1)
  {
    system("cls");
    goto a;
  }
  else if (lagi == 2)
  {
    system("cls");
  }
  return 0;
}
