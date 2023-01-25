#ifndef PEMBAYARANGROOMING__
#define PEMBAYARANGROOMING__
#include <iostream>
#include "variabel.h"
void functionPembayaranGrooming() {
repay:
  cout << clrs;
  cout << endl;
  cout << "==================================";
  cout << endl;
  cout << "       JENIS PEMBAYARAN         ";
  cout << endl;
  cout << "==================================";
  cout << endl;
  cout << "1. Gopay";
  cout << endl;
  cout << "2. Dana";
  cout << endl;
  cout << "3. OVO";
  cout << endl;
  cout << "4. Flip";
  cout << endl;
  cout << "5. ShopeePay";
  cout << endl;
  cout << "6. Kembali";
  cout << endl;
  cout << "7. Exit";
  cout << endl;
  cout << "Pilih [1-7] : ";
  cin >> pilih;
  switch (pilih) {
  case 1:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "               GOPAY              ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    break;
  case 2:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "                DANA              ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    break;
  case 3:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "               OVO              ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    break;
  case 4:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "               FLIP              ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    break;
  case 5:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "             SHOPEEPAY            ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    break;
  case 6:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "        KEMBALI KE MENU AWAL      ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    goto repay;
    break;
  case 7:
    cout << "===================================";
    cout << endl;
    cout << "          PROGRAM SELESAI          ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "   TERIMAKASIH SUDAH BERKUNJUNG    ";
    cout << endl;
    cout << "===================================";
    cout << endl;
  default:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "      PILIHAN TIDAK TERSEDIA      ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "        KEMBALI KE MENU AWAL      ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    goto repay;
    break;
  }
}
#endif