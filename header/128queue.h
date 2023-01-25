#ifndef QUEUE__
#define QUEUE__
#define clearscreen "\033[2J\033[0;0H";
#include <iostream>
using namespace std;
struct NodeStack {
  string nama;
  string umur;
  string kebutuhan;
  NodeStack *next;
} *depan = NULL, *belakang = NULL, *baru, *temp, *temp2;

void tambah() {
  baru = new NodeStack;
  cout << clearscreen;
  cout << "Masukan Nama : ";
  cin.ignore();
  getline(cin, baru->nama);
  cout << "Masukan Umur Hewan : ";
  cin >> baru->umur;
  cout << "Masukan Keterangan Sakit : ";
  cin.ignore();
  getline(cin, baru->kebutuhan);

  cout << "\n";
  cout << endl;

  if (depan == NULL) {
    depan = baru;
    depan->next = depan;
    belakang = depan;
  } else {
    belakang->next = baru;
    baru->next = depan;
    belakang = baru;
  }
  // belakang = baru;
  // belakang->next = depan;
}

void display() {
  temp = depan;
  temp2 = NULL;
  if (depan == NULL) {
    cout << endl;
    cout << "Antrian kosong";
    cout << endl;
  } else {
    do {
      cout << "====================";
      cout << endl;
      cout << "Nama Pasien : ";
      cout << temp->nama;
      cout << endl;

      cout << "Umur Pasien : ";
      cout << temp->umur;
      cout << endl;

      cout << "Keluhan Pasien : ";
      cout << temp->kebutuhan;
      cout << endl;
      cout << "====================";
      cout << endl;
      temp = temp->next;
    } while (temp != depan);
    // cout << "Isi Antrian : ";
    // cout << endl;
    // while (temp != temp2) {
    //   cout << "Antrian : ";
    //   cout << endl;
    //   cout << "Nama : ";
    //   cout << temp->nama;
    //   cout << endl;

    //   cout << "Umur : ";
    //   cout << temp->umur;
    //   cout << endl;

    //   cout << "Keluhan : ";
    //   cout << temp->kebutuhan;
    //   cout << endl;

    //   temp = temp->next;
    //   temp2 = depan;
    // }
  }
  cout << endl;
  cout << endl;
}

void hapus() {
  string why;
  cout << clearscreen;
  temp = depan;
  if (depan == NULL) {
    cout << endl;
    cout << "Antrian Kosong";
    cout << endl;
  } else {
    if (depan == belakang) {
      why = depan->nama;
      delete (temp);
      depan = NULL;
      belakang = NULL;
    } else {
      why = temp->nama;
      depan = depan->next;
      belakang->next = depan;
      delete (temp);
    }

    cout << endl;
    cout << "======================================";
    cout << endl;
    cout << "Data " << why << " telah dihapus\n";
    cout << "======================================";
    cout << endl;
    display();
  }
}

void functionQueue() {
  int p;
  do {
    cout << "========================";
    cout << endl;
    cout << "         ANTRIAN        ";
    cout << endl;
    cout << "========================";
    cout << endl;
    cout << "1. Tambah Data";
    cout << endl;
    cout << "2. Hapus Data";
    cout << endl;
    cout << "3. Lihat Data";
    cout << endl;
    cout << "4.Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> p;
    cout << "===========================";
    cout << endl;
    switch (p) {
    case 1:
      tambah();
      break;
    case 2:
      hapus();
      break;
    case 3:
      cout << clearscreen;
      cout << endl;
      display();
      break;
    case 4:
      break;
    default:
      cout << endl;
      cout << "Input salah" << endl;
      break;
    }
  } while (p != 4);
}
#endif