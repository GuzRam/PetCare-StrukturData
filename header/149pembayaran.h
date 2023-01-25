#ifndef PEMBAYARANSATU__
#define PEMBAYARANSATU__
#include "154dataMakanan.h"
#include "variabel.h"
#include <iomanip>
#include <iostream>
using namespace std;
void pembelianMakananBagianSatu() {
  FoodData();
  hargaMakanan();
  cout << "===================================";
  cout << endl;
  cout << "             ETALASE 1          ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cin.ignore();
  cout << "Masukan Nama : ";
  getline(cin, name);
pilihmerk:
  cout << clrs;
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "             VENDOR / MERK         ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Royal Canin";
  cout << endl;
  cout << "2. ALPO";
  cout << endl;
  cout << "3. PediGreen";
  cout << endl;
  cout << "4. ProPlan";
  cout << endl;
  cout << "5. Instinct";
  cout << endl;
  cout << "6. HUG";
  cout << endl;
  cout << "7. Exit";
  cout << endl;
  cout << "Pilih [1-7] : ";
  cin >> pilih;
  if (pilih == 1) {
    cout << "===================================";
    cout << endl;
    cout << "             ROYAL CANIN           ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Royal Canin Untuk Anjing";
    cout << endl;
    cout << "2. Royal Canin Untuk Kucing";
    cout << endl;
    cout << "3. Pilih Merk Lain";
    cout << endl;
    cout << "4. Filter Nama & Harga Kucing";
    cout << endl;
    cout << "5. Filter Nama & Harga Anjing";
    cout << endl;
    cout << "6. Exit";
    cout << endl;
    cout << "Pilih [1-6] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "         ROYAL CANIN FOR DOG'S     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananRoyalCaninAnjing =
          sizeof(makananRoyalCaninAnjing) / sizeof(makananRoyalCaninAnjing[0]);
      for (int i = 0; i < sizeOfMakananRoyalCaninAnjing; i++) {
        cout << "Royal Canin " << i + 1 << " : " << makananRoyalCaninAnjing[i]
             << "| Harga : " << hargamakananRoyalCaninAnjing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananRoyalCaninAnjing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananRoyalCaninAnjing[pilih - 1];
        saveharga[indexing] = hargamakananRoyalCaninAnjing[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) - 2000;
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
      cout << "===================================";
      cout << endl;
      cout << "         ROYAL CANIN FOR CAT'S     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananRoyalCaninKucing =
          sizeof(makananRoyalCaninKucing) / sizeof(makananRoyalCaninKucing[0]);
      for (int i = 0; i < sizeOfMakananRoyalCaninKucing; i++) {
        cout << "Royal Canin " << i + 1 << " : " << makananRoyalCaninKucing[i]
             << "| Harga : " << hargamakananRoyalCaninKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananRoyalCaninKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananRoyalCaninKucing[pilih - 1];
        saveharga[indexing] = hargamakananRoyalCaninKucing[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
    } else if (pilih == 3) {
      goto pilihmerk;
    } else if (pilih == 4) {
      cout << "===================================";
      cout << endl;
      cout << "    SORTING HARGA & NAMA KUCING    ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      cout << endl;

      int sizeOfMakananRoyalCaninKucing =
          sizeof(hargamakananRoyalCaninKucing) /
          sizeof(hargamakananRoyalCaninKucing[0]);
      sort(hargamakananRoyalCaninKucing,
           hargamakananRoyalCaninKucing + sizeOfMakananRoyalCaninKucing);
      sort(makananRoyalCaninKucing,
           makananRoyalCaninKucing + sizeOfMakananRoyalCaninKucing);
      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < sizeOfMakananRoyalCaninKucing; i++) {
        cout << hargamakananRoyalCaninKucing[i] << endl;
      }
      cout << endl;
      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < sizeOfMakananRoyalCaninKucing; i++) {
        cout << makananRoyalCaninKucing[i] << endl;
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
      // sorting recovery
      // int sizeOfMakananRoyalCaninKucing =
      //     sizeof(hargamakananRoyalCaninKucing) /
      //     sizeof(hargamakananRoyalCaninKucing[0]);
      // for(int i = 0;i < sizeOfMakananRoyalCaninKucing;i++){
      //   for(int j = 0; j < sizeOfMakananRoyalCaninKucing - i - 1;j++){
      //     if(hargamakananRoyalCaninKucing[j] >
      //     hargamakananRoyalCaninKucing[j+1]){
      //       swap(hargamakananRoyalCaninKucing[j],hargamakananRoyalCaninKucing[j+1]);
      //       cout << hargamakananRoyalCaninKucing[i] << endl;
      //     }
      //   }
      // }
    } else if (pilih == 5) {
      int sizeOfMakananRoyalCaninAnjing =
          sizeof(hargamakananRoyalCaninAnjing) /
          sizeof(hargamakananRoyalCaninAnjing[0]);
      sort(hargamakananRoyalCaninAnjing,
           hargamakananRoyalCaninAnjing + sizeOfMakananRoyalCaninAnjing);
      sort(makananRoyalCaninAnjing,
           makananRoyalCaninAnjing + sizeOfMakananRoyalCaninAnjing);
      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < sizeOfMakananRoyalCaninAnjing; i++) {
        cout << "Rp." << hargamakananRoyalCaninAnjing[i] << endl;
      }
      cout << endl;
      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < sizeOfMakananRoyalCaninAnjing; i++) {
        cout << makananRoyalCaninAnjing[i] << endl;
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
    } else if (pilih == 6) {
      exit(-1);
    }
  } else if (pilih == 2) {
    cout << "===================================";
    cout << endl;
    cout << "                ALPO              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Alpo Untuk Anjing";
    cout << endl;
    cout << "2. Alpo Untuk Kucing";
    cout << endl;
    cout << "3. Pilih Merk Lain";
    cout << endl;
    cout << "4. Filter Nama & Harga Kucing";
    cout << endl;
    cout << "5. Filter Nama & Harga Anjing";
    cout << endl;
    cout << "6. Exit";
    cout << endl;
    cout << "Pilih [1-6] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "            ALPO FOR DOG'S         ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananAlpoAnjing =
          sizeof(makananAlpoAnjing) / sizeof(makananAlpoAnjing[0]);
      for (int i = 0; i < sizeOfMakananAlpoAnjing; i++) {
        cout << "Alpo " << i + 1 << " : " << makananAlpoAnjing[i]
             << "| Harga : " << hargamakananAlpoAnjing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananAlpoAnjing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananAlpoAnjing[pilih - 1];
        saveharga[indexing] = hargamakananAlpoAnjing[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
      cout << "===================================";
      cout << endl;
      cout << "            ALPO FOR CAT'S     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananAlpoKucing =
          sizeof(makananAlpoKucing) / sizeof(makananAlpoKucing[0]);
      for (int i = 0; i < sizeOfMakananAlpoKucing; i++) {
        cout << "Alpo " << i + 1 << " : " << makananAlpoKucing[i]
             << "| Harga : " << hargamakananAlpoKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananAlpoKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananAlpoKucing[pilih - 1];
        saveharga[indexing] = hargamakananAlpoKucing[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
    } else if (pilih == 3) {
      goto pilihmerk;
    } else if (pilih == 4) {
      cout << "===================================";
      cout << endl;
      cout << "    SORTING HARGA & NAMA KUCING    ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      cout << endl;
      int size = sizeof(makananAlpoKucing) / sizeof(makananAlpoKucing[0]);
      sort(hargamakananAlpoKucing, hargamakananAlpoKucing + size);
      sort(makananAlpoKucing, makananAlpoKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << hargamakananAlpoKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananAlpoKucing[i] << endl;
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
    } else if (pilih == 5) {
      cout << "===================================";
      cout << endl;
      cout << "    SORTING HARGA & NAMA ANJING    ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      cout << endl;
      int size = sizeof(makananAlpoAnjing) / sizeof(makananAlpoAnjing[0]);
      sort(hargamakananAlpoAnjing, hargamakananAlpoAnjing + size);
      sort(makananAlpoAnjing, makananAlpoAnjing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << hargamakananAlpoAnjing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananAlpoAnjing[i] << endl;
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
    } else if (pilih == 6) {
      exit(-1);
    }

  } else if (pilih == 3) {
    cout << "===================================";
    cout << endl;
    cout << "              PEDIGREEN            ";
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
      cout << "          VARIAN PEDIGREEN         ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananPedigreen =
          sizeof(makananpedigreen) / sizeof(makananpedigreen[0]);
      for (int i = 0; i < sizeOfMakananPedigreen; i++) {
        cout << "PediGreen " << i + 1 << " : " << makananpedigreen[i]
             << "| Harga : " << hargamakananpedigreen[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananpedigreen[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananpedigreen[pilih - 1];
        saveharga[indexing] = hargamakananpedigreen[pilih - 1];
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
          cout << "Sudah Masukan Kartu [y/n] : ";
          cin >> jawabanPengguna;
          if (jawabanPengguna == 'Y' || jawabanPengguna == 'y') {
            cout << "Total Harga : ";
            cout << finalHarga;
            cout << endl;
            cout << "Masukan Jumlah Uang : ";
            cin >> bayar;
            cout << endl;
            cout << "Kembalian : ";
            cout << transaksiMakanan(finalHarga, bayar) ;
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
      cout << "       SORTING HARGA & NAMA     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(makananpedigreen) / sizeof(makananpedigreen[0]);
      sort(hargamakananpedigreen, hargamakananpedigreen + size);
      sort(makananpedigreen, makananpedigreen + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << hargamakananpedigreen[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananpedigreen[i] << endl;
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
    cout << "              PROPLAN              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Proplan Untuk Anjing";
    cout << endl;
    cout << "2. Proplan Untuk Kucing";
    cout << endl;
    cout << "3. Pilih Merk Lain";
    cout << endl;
    cout << "4. Sorting Harga & Nama Kucing";
    cout << endl;
    cout << "5. Sorting Harga & Nama Anjing";
    cout << endl;
    cout << "6.Exit";
    cout << endl;
    cout << "Pilih [1-6] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "         PROPLAN FOR DOG'S      ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananProplanAnjing =
          sizeof(makananproplanAnjing) / sizeof(makananproplanAnjing[0]);
      for (int i = 0; i < sizeOfMakananProplanAnjing; i++) {
        cout << "ProPlan " << i + 1 << " : " << makananproplanAnjing[i]
             << "| Harga : " << hargamakananproplanAnjing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananproplanAnjing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananproplanAnjing[pilih - 1];
        saveharga[indexing] = hargamakananproplanAnjing[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
      cout << "===================================";
      cout << endl;
      cout << "         PROPLAN FOR CAT'S      ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfmakananProPlanKucing =
          sizeof(makananProPlanKucing) / sizeof(makananProPlanKucing[0]);
      for (int i = 0; i < sizeOfmakananProPlanKucing; i++) {
        cout << "ProPlan " << i + 1 << " : " << makananProPlanKucing[i]
             << "| Harga : " << hargamakananProPlanKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananProPlanKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananProPlanKucing[pilih - 1];
        saveharga[indexing] = hargamakananProPlanKucing[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
    } else if (pilih == 3) {
      goto pilihmerk;
    } else if (pilih == 4) {
      cout << "===================================";
      cout << endl;
      cout << "     SORTING HARGA & NAMA KUCING     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(makananProPlanKucing) / sizeof(makananProPlanKucing[0]);
      sort(hargamakananProPlanKucing, hargamakananProPlanKucing + size);
      sort(makananProPlanKucing, makananProPlanKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananProPlanKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananProPlanKucing[i] << endl;
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
    } else if (pilih == 5) {
      cout << "===================================";
      cout << endl;
      cout << "     SORTING HARGA & NAMA ANJING    ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(makananproplanAnjing) / sizeof(makananproplanAnjing[0]);
      sort(hargamakananproplanAnjing, hargamakananproplanAnjing + size);
      sort(makananproplanAnjing, makananproplanAnjing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananproplanAnjing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananproplanAnjing[i] << endl;
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
    } else if (pilih == 6) {
      exit(-1);
    }
  } else if (pilih == 5) {
    cout << "===================================";
    cout << endl;
    cout << "             INSTINCT              ";
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
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "          VARIAN INSTINCT         ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananInstinct =
          sizeof(makananinstinct) / sizeof(makananinstinct[0]);
      for (int i = 0; i < sizeOfMakananInstinct; i++) {
        cout << "Instinct " << i + 1 << " : " << makananinstinct[i]
             << "| Harga : " << hargamakananinstinct[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananinstinct[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananinstinct[pilih - 1];
        saveharga[indexing] = hargamakananinstinct[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
    }

    // 149 --------------------------------------------
    else if (pilih == 2) {
      goto pilihmerk;
    } else if (pilih == 3) {
      cout << "===================================";
      cout << endl;
      cout << "      SORTING HARGA & NAMA     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int size = sizeof(makananinstinct) / sizeof(makananinstinct[0]);
      sort(hargamakananinstinct, hargamakananinstinct + size);
      sort(makananinstinct, makananinstinct + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananinstinct[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananinstinct[i] << endl;
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
    cout << "                HUG                ";
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
      cout << "             VARIAN HUG            ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananHug = sizeof(makananhug) / sizeof(makananhug[0]);
      for (int i = 0; i < sizeOfMakananHug; i++) {
        cout << "Hug " << i + 1 << " : " << makananhug[i]
             << "| Harga : " << hargamakananhug[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananhug[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananhug[pilih - 1];
        saveharga[indexing] = hargamakananhug[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
      int size = sizeof(makananhug) / sizeof(makananhug[0]);
      sort(hargamakananhug, hargamakananhug + size);
      sort(makananhug, makananhug + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananhug[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananhug[i] << endl;
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
            cout << transaksiMakanan(finalHarga, bayar) ;
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
  } else if (pilih == 7) {
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
    cout << "Inputan Salah, Kembali ke Opsi!";
    goto pilihmerk;
  }
  // tulisdata
  tulisdata.open("./dummy/strukmakanan.txt");
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << setw(18) << "  HALLO  " << name << "!    ";
  tulisdata << endl;
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << "       ========STRUK========";
  tulisdata << endl;
  tulisdata << "Makanan         : ";
  tulisdata << endl;
  for (int i = 0; i < indexing; i++) {
    tulisdata <<"                "<< savedata[i] << " ";
    tulisdata << endl;
  }
  tulisdata << "Uang Yang Dibayarkan  :" << bayar;
  tulisdata << endl;
  tulisdata << "Harga                 : " << finalHarga;
  tulisdata << endl;
  tulisdata << "Kembalian             : " << transaksiMakanan(finalHarga, bayar);
  tulisdata << endl;
  tulisdata << " ==========TERIMA KASIH========== ";
  tulisdata << endl;
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << endl;
  tulisdata.close();
}
#endif