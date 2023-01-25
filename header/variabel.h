#ifndef VARIABEL_
#define VARIABEL_
#define clrs "\033[2J\033[0;0H"
#include <iostream>
#include<fstream>
using namespace std;
ifstream bacadata;
ofstream tulisdata;
// transaksi

int jumlah;
int harga;
int bayar;
int transaksi(int harga, int bayar) { return bayar - harga; }
int saldo = 500000;
// ongkir
int ongkir = 1750;
int jarak;
int sumUp;
int finalSumUp;
int saveharga[100];
string savedata[100];
int indexing = 0;
int finalHarga = 0;
int pilih;
int hitungTotalOngkir(int ongkir, int jarak) { return jarak * ongkir; }
// pembayaran
int biayaAdminEWallet = 1500;
int biayaAdminDebit = 2000;
int diskon;
string jenisPembayaran;
int transaksiMakanan(int finalHarga, int bayar) { return bayar - finalHarga; }
char jawabanPengguna;
string dataStreamQueue;
int numOfDataStreamQueue;
//pengguna
string name;
string address;
string noHP;

//function sort
int tempData;

//var login;
int indexAdmin = 0;
int indexUser = 0;
string tempDataAdmin[1000];
string tempDataUser[1000];

//random
string diagnosa;
#endif