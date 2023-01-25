#ifndef PEMBAYARANONLINEDUA__
#define PEMBAYARANONLINEDUA__
#include "154dataMakanan.h"
#include "variabel.h"
#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>

using namespace std;
void PembayaranOnlineKedua() {
  FoodData();
  hargaMakanan();
  cout << clrs;
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "         ANTAR MAKANAN HEWAN       ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "           ETALASE DUA            ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cin.ignore();
  cout << "Masukan Nama : ";
  getline(cin, name);
  cout << "Masukan Alamat Pengantaran  : ";
  getline(cin, address);
  cout << "Masukan No.Telepon : ";
  cin >> noHP;
  cout << "Masukan Jarak (Km) : ";
  cin >> jarak;
  cout << endl;
  cout << clrs;
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "            DATA TEREKAM          ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "           DISKON 1500/ITEM        ";
  cout << endl;
  cout << "===================================";
  cout << endl;

pilihmerk:
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "             VENDOR / MERK         ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Minuman Anjing GroowPY";
  cout << endl;
  cout << "2. Minuman Kucing LacMilk";
  cout << endl;
  cout << "3. Monge";
  cout << endl;
  cout << "4. Me-O";
  cout << endl;
  cout << "5. Whiskas";
  cout << endl;
  cout << "6. Max Life";
  cout << endl;
  cout << "7. PurinaSuperCat";
  cout << endl;
  cout << "8. Exit";
  cout << endl;
  cout << "Pilih [1-8] : ";
  cin >> pilih;
  if (pilih == 1) {
    cout << "===================================";
    cout << endl;
    cout << "              GROWWPY             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "           VARIAN GROOWPY          ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMinumanGroowpy =
          sizeof(minumanGroowpy) / sizeof(minumanGroowpy[0]);
      for (int i = 0; i < sizeOfMinumanGroowpy; i++) {
        cout << "Groowpy " << i + 1 << " : " << minumanGroowpy[i]
             << "| Harga : " << hargaminumanGroowpy[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << minumanGroowpy[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = minumanGroowpy[pilih - 1];
        saveharga[indexing] = hargaminumanGroowpy[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) - 20;
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
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
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      cout << "===================================";
      cout << endl;
      cout << "      SORTING HARGA & NAMA     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(minumanGroowpy) / sizeof(minumanGroowpy[0]);
      sort(hargaminumanGroowpy, hargaminumanGroowpy + size);
      sort(minumanGroowpy, minumanGroowpy + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargaminumanGroowpy[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << minumanGroowpy[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 2) {
    cout << "===================================";
    cout << endl;
    cout << "              LACMILK              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4.Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "           VARIAN LACMILK          ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMinumanLacMilk =
          sizeof(minumanLacMilk) / sizeof(minumanLacMilk[0]);
      for (int i = 0; i < sizeOfMinumanLacMilk; i++) {
        cout << "LacMilk " << i + 1 << " : " << minumanLacMilk[i]
             << "| Harga : " << hargaminumanLacMilk[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << minumanLacMilk[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = minumanLacMilk[pilih - 1];
        saveharga[indexing] = hargaminumanLacMilk[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) - 20;
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
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
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      cout << "===================================";
      cout << endl;
      cout << "      SORTING HARGA & NAMA     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(minumanLacMilk) / sizeof(minumanLacMilk[0]);
      sort(hargaminumanLacMilk, hargaminumanLacMilk + size);
      sort(minumanLacMilk, minumanLacMilk + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargaminumanLacMilk[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << minumanLacMilk[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 3) {
    cout << "===================================";
    cout << endl;
    cout << "                MONGE              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "            VARIAN MONGE          ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananMonge = sizeof(makananMonge) / sizeof(makananMonge[0]);
      for (int i = 0; i < sizeOfMakananMonge; i++) {
        cout << "Monge " << i + 1 << " : " << makananMonge[i]
             << "| Harga : " << hargamakananMonge[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananMonge[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananMonge[pilih - 1];
        saveharga[indexing] = hargamakananMonge[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) - 20;
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
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
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      cout << "===================================";
      cout << endl;
      cout << "      SORTING HARGA & NAMA     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(makananMonge) / sizeof(makananMonge[0]);
      sort(hargamakananMonge, hargamakananMonge + size);
      sort(makananMonge, makananMonge + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananMonge[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananMonge[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 4) {
    cout << "===================================";
    cout << endl;
    cout << "                ME-O              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "            VARIAN ME-O           ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananMeo =
          sizeof(makananMeoKucing) / sizeof(makananMeoKucing[0]);
      for (int i = 0; i < sizeOfMakananMeo; i++) {
        cout << "Me-O" << i + 1 << " : " << makananMeoKucing[i]
             << "| Harga : " << hargamakananMeoKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananMeoKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananMeoKucing[pilih - 1];
        saveharga[indexing] = hargamakananMeoKucing[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) - 20;
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
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
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      cout << "===================================";
      cout << endl;
      cout << "      SORTING HARGA & NAMA     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(makananMeoKucing) / sizeof(makananMeoKucing[0]);
      sort(hargamakananMeoKucing, hargamakananMeoKucing + size);
      sort(makananMeoKucing, makananMeoKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananMeoKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananMeoKucing[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 5) {
    cout << "===================================";
    cout << endl;
    cout << "              WHISKAS            ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "          VARIAN WHISKAS           ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananWhiskas =
          sizeof(makananWhiskasKucing) / sizeof(makananWhiskasKucing[0]);
      for (int i = 0; i < sizeOfMakananWhiskas; i++) {
        cout << "Whiskas " << i + 1 << " : " << makananWhiskasKucing[i]
             << "| Harga : " << hargamakananWhiskasKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananWhiskasKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananWhiskasKucing[pilih - 1];
        saveharga[indexing] = hargamakananWhiskasKucing[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) - 20;
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
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
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananWhiskasKucing) / sizeof(makananWhiskasKucing[0]);
      sort(hargamakananWhiskasKucing, hargamakananWhiskasKucing + size);
      sort(makananWhiskasKucing, makananWhiskasKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananWhiskasKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananWhiskasKucing[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 6) {
    cout << "===================================";
    cout << endl;
    cout << "              MAX LIFE             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "          VARIAN MAX LIFE          ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananMax =
          sizeof(makananMaxLifeKucing) / sizeof(makananMaxLifeKucing[0]);
      for (int i = 0; i < sizeOfMakananMax; i++) {
        cout << "Max Life " << i + 1 << " : " << makananMaxLifeKucing[i]
             << "| Harga : " << hargamakananMaxLifeKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananMaxLifeKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananMaxLifeKucing[pilih - 1];
        saveharga[indexing] = hargamakananMaxLifeKucing[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) - 20;
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
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
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananMaxLifeKucing) / sizeof(makananMaxLifeKucing[0]);
      sort(hargamakananMaxLifeKucing, hargamakananMaxLifeKucing + size);
      sort(makananMaxLifeKucing, makananMaxLifeKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananMaxLifeKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananMaxLifeKucing[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }

  } else if (pilih == 7) {
    cout << "===================================";
    cout << endl;
    cout << "          PURINA SUPER CAT         ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Nama";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "       VARIAN PURINA SUPER CAT     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananPurina =
          sizeof(makananPurinaSuperCat) / sizeof(makananPurinaSuperCat[0]);
      for (int i = 0; i < sizeOfMakananPurina; i++) {
        cout << "Purina Super Cat " << i + 1 << " : "
             << makananPurinaSuperCat[i]
             << "| Harga : " << hargamakananPurinaSuperCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananPurinaSuperCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananPurinaSuperCat[pilih - 1];
        saveharga[indexing] = hargamakananPurinaSuperCat[pilih - 1];
        indexing++;
      }
      // nanti ini bakal ke tulis ke txt
      tulisdata.open("./dummy/daftarBelanja.txt", ios::app);
      for (int i = 0; i < indexing; i++) {
        tulisdata << savedata[i] << " | " << saveharga[i];
        tulisdata << endl;
      }
      tulisdata.close();
      /*
      hitung total harga yang ada dalam array
      terus masukin ke dalam variable statis.
      */
      for (int i = 0; i < indexing; i++) {
        finalHarga += saveharga[i];
      }
      cout << "harga total : " << finalHarga;
      cout << endl;
      cout << "Lanjut Ke Pembayaran [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        cout << clrs;
        cout << endl;
        cout << "pilih Pembayaran : ";
        cout << endl;
        cout << "1. Cash";
        cout << endl;
        cout << "2. E-Wallet";
        cout << endl;
        cout << "3. Debit";
        cout << endl;
        cout << "4. Batal";
        cout << endl;
        cout << "Pilih [1-4] : ";
        cin >> pilih;
        if (pilih == 1) {
          jenisPembayaran = "Cash";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "        CASH       ";
          cout << endl;
          cout << "===================";
          cout << endl;
          cout << "Total Harga : ";
          cout << finalHarga;
          cout << endl;
          cout << "Masukan Jumlah Uang : ";
          cin >> bayar;
          cout << endl;
          cout << "Kembalian : ";
          cout << transaksiMakanan(finalHarga, bayar);
        } else if (pilih == 2) {
          jenisPembayaran = "E-Wallet";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "     METODE PEMBAYARAN    ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "          E-Wallet        ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "pilih E-Wallet : ";
          cout << endl;
          cout << "1. Gopay";
          cout << endl;
          cout << "2. Dana";
          cout << endl;
          cout << "3. OVO";
          cout << endl;
          cout << "4. Flip";
          cout << endl;
          cout << "5. Kembali";
          cout << endl;
          cout << "Pilih [1-5] : ";
          cin >> pilih;
          if (pilih == 1) {
            cout << "==========================";
            cout << endl;
            cout << "          GOPAY          ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 2) {
            cout << "==========================";
            cout << endl;
            cout << "           DANA           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 3) {
            cout << "==========================";
            cout << endl;
            cout << "           OVO           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 4) {
            cout << "==========================";
            cout << endl;
            cout << "           FLIP           ";
            cout << endl;
            cout << "==========================";
            cout << endl;
            // hitung
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar);
          } else if (pilih == 5) {
            cout << "==========================";
            cout << endl;
            cout << "           KEMBALI        ";
            cout << endl;
            cout << "==========================";
            cout << endl;
          }
        } else if (pilih == 3) {
          jenisPembayaran = "DEBIT";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "      METODE PEMBAYARAN   ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "           DEBIT         ";
          cout << endl;
          cout << "==========================";
          cout << endl;
          cout << "Masukan Kartu Anda Kedalam EDC!";
          cout << endl;
          cout << "Sudah Masukan Kartu [y/n]";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) - 20;
          } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
            cout << "GAGAL";
            cout << endl;
            goto pilihmerk;
          }
        }
      }
      cout << endl;
      cout << endl;
      cout << endl;
      cout << "Kembali [y/n]? : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
        goto pilihmerk;
      } else if (jawabanPengguna == 'N' || jawabanPengguna == 'n') {
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
      } else {
        cout << "Jawaban yang kamu masukan tidak valid!";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "          PROGRAM SELESAI          ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        exit(-1);
      }
    } else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      int size =
          sizeof(makananPurinaSuperCat) / sizeof(makananPurinaSuperCat[0]);
      sort(hargamakananPurinaSuperCat, hargamakananPurinaSuperCat + size);
      sort(makananPurinaSuperCat, makananPurinaSuperCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananPurinaSuperCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananPurinaSuperCat[i] << endl;
      }
      cout << endl;
      cout << "Kembali [y/n] : ";
      cin >> jawabanPengguna;
      if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
        cout << clrs;
        goto pilihmerk;
      } else {
        return;
      }
    } else if (pilih == 4) {
      exit(-1);
    }
  } else if (pilih == 8) {
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
    exit(-1);
  } else {
    cout << "Inputan Salah, Kembali ke Opsi!";
    goto pilihmerk;
  }
  tulisdata.open("./dummy/invoiceDelivery.txt");
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << setw(18) << "  HALLO  " << name << "!    ";
  tulisdata << endl;
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << " ========INVOICE DELIVERY========";
  tulisdata << endl;
  tulisdata << "Makanan         : ";
  tulisdata << endl;
  for (int i = 0; i < indexing; i++) {
    tulisdata << savedata[i] << " ";
    tulisdata << endl;
  }
  tulisdata << "Alamat          : " << address;
  tulisdata << endl;
  tulisdata << "Ongkir          : " << hitungTotalOngkir(ongkir, jarak);
  tulisdata << endl;
  tulisdata << "Kembalian       : " << transaksiMakanan(finalHarga, bayar);
  tulisdata << endl;
  tulisdata << "Diskon          : " << jumlah * 1500 << endl;
  tulisdata << "Harga           : " << finalHarga;
  tulisdata << endl;
  tulisdata << "Total           : "
            << finalHarga + hitungTotalOngkir(ongkir, jarak) - (jumlah * 1500);
  tulisdata << endl;
  tulisdata << " ==========TERIMA KASIH========== ";
  tulisdata << endl;
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << endl;
  tulisdata.close();
}
#endif