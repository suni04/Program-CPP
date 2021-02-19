#include <iostream>
#include <conio>

double luas_lingk(int jari); //// prototype fungsi
void keliling_lingk(int);    /// protipe fungsi tanpa penamaan argument
void main()
{
  double luas;
  int jari;
  cout << "Fungsi untuk mencari luas dan keliling lingkaran :" << endl;
  cout << endl;
  cout << "Masukkan nilai jari-jari :";
  cin >> jari;
  cout << endl;

  luas = luas_lingk(jari); //// pemanggilan fungsi dengan nilai pengembalian
  cout << "Luas lingkaran adalah :" << luas << endl;

  keliling_lingk(jari); /// pemanggilan fungsi tanpa nilai pengembalian

  cout << "Bye - bye";

  getch();
}

double luas_lingk(int jari) /// pendefinisian fungsi dengan nilai pengembalian
{
  double luas = 3.14 * jari * jari;
  return luas;
}

void keliling_lingk(int jari) /// pendefinisian fungsi tanpa nilai pengembalian
{
  double keliling = 2 * 3.14 * jari;
  cout << "Keliling lingkaran adalah :" << keliling << endl;
}