#include <iostream>

using namespace std;

int main()
{
  int menu, totalHarga, diskon, jmlhHarga;
  int UngPembayaran, Kembalian, Hasil;
  char jawab;

  {
    cout << " == SELAMAT DATANG DI MINI MARKET SUNI == \n";
    cout << "------------------------------------------ \n";
    cout << " \n";
    cout << " CV SUNI SUMBER MAKMUR \n";
    cout << " Samarinda, Kalimantan Timur \n";
    cout << " \n";
    cout << "------------------------------------------ \n\n";

    cout << "MENU TRANSAKSI BARANG. \n\n";
    cout << "1.Member \n";
    cout << "2.Bukan Memeber \n\n";
    cout << "Silahkan Pilih Menu 1-2 ! :";
    cin >> menu;
    cout << "------------------------------------------ \n";
    cout << "\n\n";

    if (menu == 1)
    {
      cout << "Selamat Anda Mendapatkan Tambahan Diskon 5% \n";
      cout << "Masukan Total Harga : Rp. ";
      cin >> totalHarga;
      if (totalHarga > 100000 && totalHarga <= 200000)
      {
        jmlhHarga = totalHarga - totalHarga * 15 / 100;
        cout << "Anda Mendapatkan Total diskon 15% dari tambahan diskon 5% \n";
        cout << "------------------ \n";
        cout << "\n";
        cout << "Jumblah Pembayaran : Rp. " << jmlhHarga;
      }
      else if (totalHarga > 200000 && totalHarga <= 300000)
      {
        jmlhHarga = totalHarga - totalHarga * 20 / 100;
        cout << "Anda Mendapatkan Total diskon 15% dari tambahan diskon 5% \n";
        cout << "------------------ \n";
        cout << "\n";
        cout << "Jumblah Pembayaran : Rp. " << jmlhHarga;
      }
      else if (totalHarga > 300000)
      {
        jmlhHarga = totalHarga - totalHarga * 25 / 100;
        cout << "Anda Mendapatkan Total diskon 15% dari tambahan diskon 5% \n";
        cout << "------------------ \n";
        cout << "\n";
        cout << "Jumblah Pembayaran : Rp. " << jmlhHarga;
      }
      else if (totalHarga <= 100000)
      {
        cout << "\n";
        cout << "------------------ \n";
        cout << " | Maaf Anda tidak mendapatkan Diskon | \n";
        cout << " | Dikarnakan Total Belanja Tidak Lebih dari Rp. 100000,- | \n";
        cout << "------------------ \n";
        cout << "Total Harga : Rp." << totalHarga;
        jmlhHarga = totalHarga;
      }
      else if (menu == 2)
      {
        cout << "Masukan Total Harga: Rp.";
        cin >> totalHarga;
        if (totalHarga > 100000 && totalHarga <= 200000)
        {
          jmlhHarga = totalHarga - totalHarga * 10 / 100;
          cout << " Anda Mendapatkan diskon 10% \n";
          cout << "----------------- \n";
          cout << "\n";
          cout << "Jumblah Pembayaran : Rp." << jmlhHarga;
        }
        else if (totalHarga > 200000 && totalHarga <= 30000)
        {
          jmlhHarga = totalHarga - totalHarga * 15 / 100;
          cout << "Anda Mendapatkan diskon 20% \n";
          cout << "----------------- \n";
          cout << "\n";
          cout << "Jumblah Pembayaran : Rp." << jmlhHarga;
        }
        else if (totalHarga > 300000)
        {
          jmlhHarga = totalHarga - totalHarga * 20 / 100;
          cout << "Anda Mendapatkan diskon 20% \n";
          cout << "----------------- \n";
          cout << "\n";
          cout << "Jumblah Pembayaran : Rp." << jmlhHarga;
        }
        else if (totalHarga <= 100000)
        {
          jmlhHarga = totalHarga;
        }
        else if (menu != 1 && menu != 2)
        {
          cout << "Maaf Harusnya memilih 1&2";
        }

        cout << "\n";
        cout << "Uang Pembayaran: Rp.";
        cin >> UngPembayaran;
        Kembalian = UngPembayaran - jmlhHarga;
        cout << "------------------ \n";
        cout << "Uang Kembalian: Rp." << Kembalian;
        cout << "\n\n";
      }
      if (UngPembayaran < jmlhHarga)
      {
        Hasil = (Kembalian) * -1;
        cout << "Pembayaran Anda Kurang: Rp. \n";
      }

      cout << "\n\n";
      cout << "Apakah akan memilih menu transaksi lagi? (Y/T)";
      cin >> jawab;
    }
    while (jawab == 'y' || jawab == 'Y')
      ;
    cout << ". TerimaKasih Atas Kunjunganya! . \n\n";
  }
  return 0;
}
