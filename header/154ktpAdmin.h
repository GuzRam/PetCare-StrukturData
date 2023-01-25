#ifndef KTPADMIN__
#define KTPADMIN__

#include <fstream>
#include <iostream>
using namespace std;
struct dataktpAdmin {
  string nik;
  string passwordktp;
  string nama;
  string ttl;
  string jenisKelamin;
  string golonganDarah;
  string alamat;
  string rtrw;
  string kelurahanDesa;
  string kecamatan;
  string agama;
  string statusPerkawinan;
  string pekerjaan;
  string warganegara;
  string masaBerlaku;
} dataAdmin;

struct data{
  string saveData[2];
}save;

void loginktpAdmin() {
  // tulis dataAdmin ke ktp
  ifstream bacadata;
  ofstream tulisdata;
  fstream read;
  getchar();
  tulisdata.open("./dummy/admin.txt", ios::app);
  cout << "Masukan Nik : ";
  getline(cin, dataAdmin.nik);
  tulisdata << dataAdmin.nik << endl;

  cout << "Masukan Password : ";
  getline(cin, dataAdmin.passwordktp);
  tulisdata << dataAdmin.passwordktp << endl;

  cout << "Masukan Nama : ";
  getline(cin, dataAdmin.nama);
  tulisdata << dataAdmin.nama << endl;

  cout << "Masukan Tempat/Tgl Lahir : ";
  getline(cin, dataAdmin.ttl);
  tulisdata << dataAdmin.ttl << endl;

  cout << "Masukan Jenis Kelamin : ";
  getline(cin, dataAdmin.jenisKelamin);
  tulisdata << dataAdmin.jenisKelamin << endl;

  cout << "Masukan Golongan Darah : ";
  getline(cin, dataAdmin.golonganDarah);
  tulisdata << dataAdmin.golonganDarah << endl;

  cout << "Masukan Alamat : ";
  getline(cin, dataAdmin.alamat);
  tulisdata << dataAdmin.alamat << endl;

  cout << "\t\tMasukan RT/RW : ";
  getline(cin, dataAdmin.rtrw);
  tulisdata << dataAdmin.rtrw << endl;

  cout << "\t\tMasukan Kel/Desa : ";
  getline(cin, dataAdmin.kelurahanDesa);
  tulisdata << dataAdmin.kelurahanDesa << endl;

  cout << "\t\tMasukan Kecamatan : ";
  getline(cin, dataAdmin.kecamatan);
  tulisdata << dataAdmin.kecamatan << endl;

  cout << "Masukan Agama : ";
  getline(cin, dataAdmin.agama);
  tulisdata << dataAdmin.agama << endl;

  cout << "Masukan Status Perkawinan : ";
  getline(cin, dataAdmin.statusPerkawinan);
  tulisdata << dataAdmin.statusPerkawinan << endl;

  cout << "Masukan Pekerjaan : ";
  getline(cin, dataAdmin.pekerjaan);
  tulisdata << dataAdmin.pekerjaan << endl;

  cout << "Masukan Kewarganegaraan : ";
  getline(cin, dataAdmin.warganegara);
  tulisdata << dataAdmin.warganegara << endl;

  cout << "Masukan Masa Berlaku : ";
  getline(cin, dataAdmin.masaBerlaku);
  tulisdata << dataAdmin.masaBerlaku << endl;
  tulisdata.close();
  savedata[0] = dataAdmin.nik;
  savedata[1] = dataAdmin.passwordktp;
}

void displaydataAdmin() {
  cout << "NIK       :   " << dataAdmin.nik << endl;
  cout << "Nama              :  " << dataAdmin.nama << endl;
  cout << "Tempat/Tgl Lahir  :  " << dataAdmin.ttl
       << "            Gol.Darah : " << dataAdmin.golonganDarah << endl;
  cout << "Alamat            :  " << dataAdmin.alamat << endl;
  cout << "\t\tRT/RW         :  " << dataAdmin.rtrw << endl;
  cout << "\t\tKel/Desa      :  " << dataAdmin.kelurahanDesa << endl;
  cout << "\t\tKecamatan     :  " << dataAdmin.kecamatan << endl;
  cout << "Agama             :  " << dataAdmin.agama << endl;
  cout << "Status Perkawinan :  " << dataAdmin.statusPerkawinan << endl;
  cout << "Pekerjaan         :  " << dataAdmin.pekerjaan << endl;
  cout << "Kewarganegaraan   :  " << dataAdmin.warganegara << endl;
  cout << "Berlaku Hingga    :  " << dataAdmin.masaBerlaku << endl;
}
#endif