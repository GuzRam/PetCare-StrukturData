#ifndef KTPPELANGGAN__
#define KTPPELANGGAN__

#include <fstream>
#include <iostream>
using namespace std;
string saved[2];
struct dataktpPengguna {
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
} dataPelanggan;



void loginktpPelanggan() {
  getchar();
  cout << "Masukan Nik : ";
  getline(cin, dataPelanggan.nik);
  cout << "Masukan Password : ";
  getline(cin, dataPelanggan.passwordktp);
  cout << "Masukan Nama : ";
  getline(cin, dataPelanggan.nama);
  cout << "Masukan Tempat/Tgl Lahir : ";
  getline(cin, dataPelanggan.ttl);
  cout << "Masukan Jenis Kelamin : ";
  getline(cin, dataPelanggan.jenisKelamin);
  cout << "Masukan Golongan Darah : ";
  getline(cin, dataPelanggan.golonganDarah);
  cout << "Masukan Alamat : ";
  getline(cin, dataPelanggan.alamat);
  cout << "\t\tMasukan RT/RW : ";
  getline(cin, dataPelanggan.rtrw);
  cout << "\t\tMasukan Kel/Desa : ";
  getline(cin, dataPelanggan.kelurahanDesa);
  cout << "\t\tMasukan Kecamatan : ";
  getline(cin, dataPelanggan.kecamatan);
  cout << "Masukan Agama : ";
  getline(cin, dataPelanggan.agama);
  cout << "Masukan Status Perkawinan : ";
  getline(cin, dataPelanggan.statusPerkawinan);
  cout << "Masukan Pekerjaan : ";
  getline(cin, dataPelanggan.pekerjaan);
  cout << "Masukan Kewarganegaraan : ";
  getline(cin, dataPelanggan.warganegara);
  cout << "Masukan Masa Berlaku : ";
  getline(cin, dataPelanggan.masaBerlaku);

  // tulis dataPelanggan ke ktp
  ifstream bacadata;
  ofstream tulisdata;
  fstream read;

  tulisdata.open("./dummy/dataktp.txt", ios::app);
  tulisdata << dataPelanggan.nik << endl;
  tulisdata << dataPelanggan.passwordktp << endl;
  tulisdata << dataPelanggan.nama << endl;
  tulisdata << dataPelanggan.ttl << endl;
  tulisdata << dataPelanggan.jenisKelamin << endl;
  tulisdata << dataPelanggan.golonganDarah << endl;
  tulisdata << dataPelanggan.alamat << endl;
  tulisdata << dataPelanggan.rtrw << endl;
  tulisdata << dataPelanggan.kelurahanDesa << endl;
  tulisdata << dataPelanggan.kecamatan << endl;
  tulisdata << dataPelanggan.agama << endl;
  tulisdata << dataPelanggan.statusPerkawinan << endl;
  tulisdata << dataPelanggan.pekerjaan << endl;
  tulisdata << dataPelanggan.warganegara << endl;
  tulisdata << dataPelanggan.masaBerlaku << endl;
  tulisdata.close();
  saved[0] = dataPelanggan.nik;
  saved[1] = dataPelanggan.passwordktp;
}
#endif