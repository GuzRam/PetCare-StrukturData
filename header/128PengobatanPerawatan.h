#ifndef PENGOBATANPERAWATAN__
#define PENGOBATANPERAWATAN__
#include "variabel.h"
#include <iostream>
using namespace std;
void pengobatan() {
  cout << "====================================";
  cout << endl;
  cout << "Anda Memilih Pengobatan & Perawatan ";
  cout << endl;
  cout << "====================================";
  cout << endl;
  cout << "  Masukkan Data Terlebih Dahulu : ";
  cout << endl;
  cout << "====================================";
  cout << endl;
  cin.ignore();
  cout << "Nama Pemilik Hewan          : ";
  getline(cin,name);
  cout << "Alamat Pemilik Hewan        : ";
  getline(cin,address);
  cout << "Masukan No HP               : ";
  cin >> noHP;
  cout << "Jelaskan Yang Dialami Hewan : ";
  cin.ignore();
  getline(cin, diagnosa);
  cout << endl;
  cout << endl;
  cout << clrs;
  cout << "====================================";
  cout << endl;
  cout << "TERIMAKASIH DATA ANDA SUDAH TEREKAM";
  cout << endl;
  cout << "====================================";
  cout << endl;
  cout << "DATA ANDA SEDANG DIANALISIS OLEH VET ";
  cout << endl;
  cout << "====================================";
  cout << endl;
  cout << "  PROGRES AKAN DIKABARKAN LEWAT HP ";
  cout << endl;
  cout << "====================================";
  cout << endl;

  tulisdata.open("./dummy/dataKonsultasi.txt", ios::app);
  tulisdata << "====================================";
  tulisdata << endl;
  tulisdata << "              DIAGNOSA             ";
  tulisdata << endl;
  tulisdata << "====================================";
  tulisdata << endl;
  tulisdata << "Pemilik   : ";
  tulisdata << name;
  tulisdata << endl;
  tulisdata << "Alamat    : ";
  tulisdata << address;
  tulisdata << endl;
  tulisdata << "No HP     : ";
  tulisdata << noHP;
  tulisdata << endl;
  tulisdata << "Diagnosa  : ";
  tulisdata << diagnosa;
  tulisdata << endl;
  tulisdata.close();
}
#endif