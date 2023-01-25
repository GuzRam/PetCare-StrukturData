#ifndef PEMBAYARAN__
#define PEMBAYARAN__
#include "dataMakanan.h"
#include "variabel.h"
#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
//#include "Sort.h"

using namespace std;
void AntarFood() {

  FoodData();
  hargaMakanan();
  string tempFoodName;
  int tempFoodPrice;
  cout << clrs;
  cout << endl;
  FoodData();
  hargaMakanan();
  cout << "===================================";
  cout << endl;
  cout << "         ANTAR MAKANAN HEWAN       ";
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
  cout << "Masukan Jarak (*Km) : ";
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
  cout << "7. Minuman Anjing GroowPY";
  cout << endl;
  cout << "8. Minuman Kucing LacMilk";
  cout << endl;
  cout << "9. Monge";
  cout << endl;
  cout << "10. Me-O";
  cout << endl;
  cout << "11. Whiskas";
  cout << endl;
  cout << "12. Max Life";
  cout << endl;
  cout << "13. PurinaSuperCat";
  cout << endl;
  cout << "14. Supercat";
  cout << endl;
  cout << "15. KitCat";
  cout << endl;
  cout << "16. ProDietDRY";
  cout << endl;
  cout << "17. ProDietWet";
  cout << endl;
  cout << "18. Life Cat";
  cout << endl;
  cout << "19. IAMS";
  cout << endl;
  cout << "20. Exit";
  cout << endl;
  cout << "Pilih [1-20] : ";
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
  } else if (pilih == 8) {
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
  } else if (pilih == 9) {
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
  } else if (pilih == 10) {
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
  } else if (pilih == 11) {
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
  } else if (pilih == 12) {
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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

  } else if (pilih == 13) {
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
  }

  // 154 ---------------------------------------------------------------------
  else if (pilih == 14) {
    cout << "===================================";
    cout << endl;
    cout << "              SUPERCAT             ";
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
      cout << "        VARIAN  SUPER CAT          ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananSuperCat =
          sizeof(makananSuperCat) / sizeof(makananSuperCat[0]);
      for (int i = 0; i < sizeOfMakananSuperCat; i++) {
        cout << "Super Cat " << i + 1 << " : " << makananSuperCat[i]
             << "| Harga : " << hargamakananSuperCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananSuperCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananSuperCat[pilih - 1];
        saveharga[indexing] = hargamakananSuperCat[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
      int size = sizeof(makananSuperCat) / sizeof(makananSuperCat[0]);
      sort(hargamakananSuperCat, hargamakananSuperCat + size);
      sort(makananSuperCat, makananSuperCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananSuperCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananSuperCat[i] << endl;
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
  } else if (pilih == 15) {
    cout << "===================================";
    cout << endl;
    cout << "               KIT CAT             ";
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
      cout << "          VARIAN KIT CAT           ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananKitCat =
          sizeof(makananKitCat) / sizeof(makananKitCat[0]);
      for (int i = 0; i < sizeOfMakananKitCat; i++) {
        cout << "Kit Cat " << i + 1 << " : " << makananKitCat[i]
             << "| Harga : " << hargamakananKitCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananKitCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananKitCat[pilih - 1];
        saveharga[indexing] = hargamakananKitCat[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
      int size = sizeof(makananKitCat) / sizeof(makananKitCat[0]);
      sort(hargamakananKitCat, hargamakananKitCat + size);
      sort(makananKitCat, makananKitCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananKitCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananKitCat[i] << endl;
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
  } else if (pilih == 16) {
    cout << "===================================";
    cout << endl;
    cout << "            PRO DIET DRY           ";
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
      cout << "        VARIAN PRO DIET DRY     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananDietDry =
          sizeof(makananProDietDRY) / sizeof(makananProDietDRY[0]);
      for (int i = 0; i < sizeOfMakananDietDry; i++) {
        cout << "Pro Diet Dry " << i + 1 << " : " << makananProDietDRY[i]
             << "| Harga : " << hargamakananProDietDRY[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananProDietDRY[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananProDietDRY[pilih - 1];
        saveharga[indexing] = hargamakananProDietDRY[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
      int size = sizeof(makananProDietDRY) / sizeof(makananProDietDRY[0]);
      sort(hargamakananProDietDRY, hargamakananProDietDRY + size);
      sort(makananProDietDRY, makananProDietDRY + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananProDietDRY[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananProDietDRY[i] << endl;
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
  } else if (pilih == 17) {
    cout << "===================================";
    cout << endl;
    cout << "            PRO DIET WET           ";
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
      cout << "        VARIAN PRO DIET WET     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananDietWet =
          sizeof(makananProDietWET) / sizeof(makananProDietWET[0]);
      for (int i = 0; i < sizeOfMakananDietWet; i++) {
        cout << "Pro Diet Wet " << i + 1 << " : " << makananProDietWET[i]
             << "| Harga : " << hargamakananProDietWET[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananProDietWET[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananProDietWET[pilih - 1];
        saveharga[indexing] = hargamakananProDietWET[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
      cout << "Kembali [y]? : ";
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
      int size = sizeof(makananProDietWET) / sizeof(makananProDietWET[0]);
      sort(hargamakananProDietWET, hargamakananProDietWET + size);
      sort(makananProDietWET, makananProDietWET + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananProDietWET[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananProDietWET[i] << endl;
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
  } else if (pilih == 18) {
    cout << "===================================";
    cout << endl;
    cout << "            PRO LIFE CAT           ";
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
      cout << "        VARIAN PRO LIFE CAT     ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananProLifeCat =
          sizeof(makananLifeCat) / sizeof(makananLifeCat[0]);
      for (int i = 0; i < sizeOfMakananProLifeCat; i++) {
        cout << "Pro Life Cat " << i + 1 << " : " << makananLifeCat[i]
             << "| Harga : " << hargamakananLifeCat[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananLifeCat[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananLifeCat[pilih - 1];
        saveharga[indexing] = hargamakananLifeCat[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
      int size = sizeof(makananLifeCat) / sizeof(makananLifeCat[0]);
      sort(hargamakananLifeCat, hargamakananLifeCat + size);
      sort(makananLifeCat, makananLifeCat + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananLifeCat[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananLifeCat[i] << endl;
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
    }
  } else if (pilih == 19) {
    cout << "===================================";
    cout << endl;
    cout << "                 IAMS              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Lihat Varian";
    cout << endl;
    cout << "2. Pilih Merk Lain";
    cout << endl;
    cout << "3. Sorting Harga & Makanan";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "===================================";
      cout << endl;
      cout << "           VARIAN IAMS             ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      int sizeOfMakananIams =
          sizeof(makananIamsKucing) / sizeof(makananIamsKucing[0]);
      for (int i = 0; i < sizeOfMakananIams; i++) {
        cout << "IAMS " << i + 1 << " : " << makananIamsKucing[i]
             << "| Harga : " << hargamakananIamsKucing[i];
        cout << endl;
      }
      cout << endl;
      cout << "Masukan Jumlah Barang : ";
      cin >> jumlah;
      for (int i = 0; i < jumlah; i++) {
        cout << "Pilih makanan : ";
        cin >> pilih;
        cout << "Kamu Pilih : " << makananIamsKucing[pilih - 1];
        cout << endl;
        // proses pemindahan array
        savedata[indexing] = makananIamsKucing[pilih - 1];
        saveharga[indexing] = hargamakananIamsKucing[pilih - 1];
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
            cout << transaksiMakanan(finalHarga, bayar) - 1500;
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
      goto pilihmerk;
    } else if (pilih == 3) {
      int size = sizeof(makananIamsKucing) / sizeof(makananIamsKucing[0]);
      sort(hargamakananIamsKucing, hargamakananIamsKucing + size);
      sort(makananIamsKucing, makananIamsKucing + size);

      cout << "---Sorting Berdasarkan Harga----\n";
      for (int i = 0; i < size; i++) {
        cout << "Rp. " << hargamakananIamsKucing[i] << endl;
      }

      cout << "---Sorting Berdasarkan Nama----\n";
      for (int i = 0; i < size; i++) {
        cout << makananIamsKucing[i] << endl;
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
  } else if (pilih == 20) {
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

  // fitur hitung ongkir dan fitur diskon ongkir
  // ongkir dasar 5000 per 1 km
  // pelanggan dapat diskon potongan  5% jika jarak 5km
  // pelanggan dapat diskon potongan  10% jika jarak > 5km && < 10km
  // pelanggan dapat diskon potongan  15% jika jarak < 10km;
  if (jarak < 5) {
    sumUp = hitungTotalOngkir(ongkir, jarak) * 0.05;
  } else if (jarak > 5 && jarak < 10) {
    sumUp = hitungTotalOngkir(ongkir, jarak) * 0.10;
  } else if (jarak > 10) {
    sumUp = hitungTotalOngkir(ongkir, jarak) * 0.15;
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
  tulisdata << "Diskon          : " << sumUp;
  tulisdata << endl;
  tulisdata << "Harga           : " << finalHarga;
  tulisdata << endl;
  tulisdata << "Harga + Diskon  : " << finalHarga - sumUp;
  tulisdata << endl;
  tulisdata << " ==========TERIMA KASIH========== ";
  tulisdata << endl;
  tulisdata << "==================================";
  tulisdata << endl;
  tulisdata << endl;
  tulisdata.close();
}
#endif