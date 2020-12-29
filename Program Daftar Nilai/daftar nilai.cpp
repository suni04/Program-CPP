#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  string nama[10], keterangan[10];
  int nilai[10];
  char grade[10];

  cout << "Masukkan Jumblah Data : ";
  cin >> n;
  cout << "\n";

  for (int i = 0; i < n; i++)
  {
    cout << endl;

    cout << "Data ke-" << i + 1 << endl;
    cout << "Masukkan Nama Mahasiswa : ";
    cin >> nama[i];
    cout << "Masukan Nilai : ";
    cin >> nilai[i];

    if (nilai[i] <= 50)
    {
      keterangan[i] = "Tidak Lulus";
    }
    else
    {
      keterangan[i] = "Lulus";
    }
    if (nilai[i] <= 50)
    {
      grade[i] = 'D';
    }
    else if (nilai[i] <= 30)
    {
      grade[i] = 'E';
    }
    else if (nilai[i] <= 70)
    {
      grade[i] = 'C';
    }
    else if (nilai[i] <= 80)
    {
      grade[i] = 'B';
    }
    else if (nilai[i] <= 100)
    {
      grade[i] = 'A';
    }
    else
    {
      grade[i] = 'F';
    }
  }
  cout << endl;
  cout << "=== DAFTAR NILAI MAHASISWA UNIVERSITAS MULIA ===" << endl;
  cout << "-------------------------------------" << endl;
  cout << "No   Nama    Nilai   Grade   Keterangan  " << endl;
  cout << "-------------------------------------" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << i + 1 << "        " << nama[i] << "       " << nilai[i] << "      " << grade[i] << "       " << keterangan[i] << endl;
    cout << "-------------------------------------" << endl;
  }

  getch();
}
