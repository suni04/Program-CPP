#include <iostream>

using namespace std;

int main()
{
  int a, b;
  int jumblah, kurang, kali, bagi, modulus;

  cout << "== PROGRAM KALKULATOR SEDERHANA ==" << endl;
  cout << "Masukkan nilai a: ";
  cin >> a;
  cout << "Masukkan nilai b: ";
  cin >> b;

  cout << endl
       << endl
       << "--Pejumblahan--" << endl;
  jumblah = a + b;
  cout << "Hasil dari pejumblahan " << a << "+" << b << "=" << jumblah;

  cout << endl
       << endl
       << "--Pengurangan--" << endl;
  kurang = a - b;
  cout << "Hasil dari pengurangan " << a << "-" << b << " = " << kurang;

  cout << endl
       << endl
       << "--Perkalian--" << endl;
  kali = a * b;
  cout << "Hasil dari perkalian " << a << "*" << b << " = " << kali;

  cout << endl
       << endl
       << "--Pembagian--" << endl;
  bagi = a / b;
  cout << "Hasil dari pembagian " << a << "/" << b << " = " << bagi;

  cout << endl
       << endl
       << "--Modulus--" << endl;
  modulus = a % b;
  cout << "Hasil dari modulus " << a << "%" << b << " = " << modulus;

  cin.get();

  return 0;
}
