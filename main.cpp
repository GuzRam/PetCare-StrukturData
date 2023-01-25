// define fungsi untuk clearscreen
#define clrs "\033[2J\033[0;0H"
// header
#include "./header/128pembayaran.h"
#include "./header/128pembayaranOnline.h"
#include "./header/149pembayaran.h"
#include "./header/149pembayaranOnline.h"
#include "./header/154pembayaran.h"
#include "./header/154pembayaranOnline.h"
#include "./header/128PengobatanPerawatan.h"
#include "./header/128QueueWithPrior.h"
#include "./header/128VetOnTheGo.h"
#include "./header/array1D.h"
#include "./header/154dataMakanan.h"
#include "./header/154ktpAdmin.h"
#include "./header/149ktpPelanggan.h"
#include "./header/128pembayaranGrooming.h"
#include "./header/128queue.h"
#include "./header/149stack.h"
#include "./header/128tree.h"
#include "./header/newAccount.h"
#include "./header/variabel.h"

// basic header file
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
const int SIZE_OF_ARRAY = 1000;

struct Node {
  string data;
  Node *next;
};

struct dataHewan {
  string jenisHewan;
  string namaHewan;
  string umurHewan;
  string pelayananHewan;
} animal;

struct varLayanan {
  string layanan;
} pelayanan;

struct credentialPelanggan {
  string username;
  string password;
} pelangganPetCare;

struct dataPelanggan {
  string nama;
  string alamat;
  string nik;
} datpel1;

struct layananVetAndFoodDelivery {
  string name;
  string address;
  string noHP;
  // khusus food delivery
} vog;

class app {
public:
  // bagian header ktp
  void ktpPelanggan();
  void ktpAdmin();

  void login();
  void admin();
  void pelanggan();
  void menuPelanggan();
  void veterinarian();

  // stack
  int top = 0;
  string dataStack[1];

  bool isEmpty() {
    if (top == 0) {
      return true;
    } else {
      return false;
    }
  }

  bool isFull(int n) {
    if (top > n) {
      return true;
    } else {
      return false;
    }
  }

  void push() {
    if (!isFull(n)) {
      cout << "Masukan Data : ";
      cin >> dataStack[top];
      top++;
    }
  }

  void pop() {
    if (!isEmpty()) {
      top--;
    }
  }

  void displayStack() {
    if (!isEmpty()) {
      cout << "Data Tersimpan : ";
      cout << endl;
      for (int i = 0; i < top; i++) {
        cout << "Data ke - " << i + 1 << dataStack[i];
        cout << endl;
      }
    } else {
      cout << "Data Kosong";
      cout << endl;
    }
    if (isFull(n)) {
      cout << "Stack Penuh";
      cout << endl;
    }
    cout << endl;
  };

  void hewanDatabase(int n, int x);
  dataHewan *hewan = new dataHewan[20];
  ifstream bacadata;
  ofstream tulisdata;
  fstream read;

  string vaksin[SIZE_OF_ARRAY];
  string user;
  string pass;
  char jawabanUser;
  int index = 0;
  int pilihan, n;
  bool cek;
};

// class ktp
void app::ktpAdmin() {
  // cout<<"Ini adalah bagian pengambilan komponen ktp admin";
  // cout << endl;
  loginktpAdmin();
}
void app::ktpPelanggan() {
  // cout<<"Ini adalah bagian pengambilan komponen ktp admin";
  // cout << endl;
  loginktpPelanggan();
}

// BAGIAN LOGIN
void app::login() {
awal:
  cout << "===================================";
  cout << endl;
  cout << "||            PET CARE           ||";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Login Admin";
  cout << endl;
  cout << "2. Login Pelanggan";
  cout << endl;
  cout << "3. Buat Akun";
  cout << endl;
  cout << "4. Exit";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "Masukan Pilihan [1-4] : ";
  cin >> pilihan;
  cout << "\033[2J\033[0;0H";

  // PILIHAN LOGIN ADMIN
  if (pilihan == 1) {
    cout << "===================================";
    cout << endl;
    cout << "                ADMIN              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    string usrpss[1000];
    bacadata.open("./dummy/admin.txt");
    while (!bacadata.eof()) {
      bacadata >> usrpss[index];
      index++;
    }
    bacadata.close();
    cout << "Apakah Admin Sudah Daftar Akun";
    cout << endl;
    cout << "[y/n] : ";
    cin >> jawabanUser;
    if (jawabanUser == 'Y' || jawabanUser == 'y') {
      goto loginAdmin;
    } else if (jawabanUser == 'N' || jawabanUser == 'n') {
      ktpAdmin();
      bacadata.open("./dummy/admin.txt");
      while (!bacadata.eof()) {
        bacadata >> usrpss[index];
        index++;
      }
      bacadata.close();
    }

    // memvalidasi kredensial dari txt untuk memastikan bahwa benar benar admin
  loginAdmin:
    cout << clrs;
    cout << "\033[2J\033[0;0H";
    cout << "Username : ";
    cin >> user;
    cout << "Password : ";
    cin >> pass;
    bacadata.open("./dummy/admin.txt");
    while (!bacadata.eof()) {
      bacadata >> usrpss[index];
      index++;
    }
    bacadata.close();
    bacadata.open("./dummy/admin.txt");
    for (int i = 0; i <= (index + 1) / 15; i++) {
      if (user == usrpss[0 + (i * 15)] && pass == usrpss[1 + (i * 15)]) {
        cek = true;
        goto checkAdmin;
      } else {
        cek = false;
      }
    }
  checkAdmin:
    if (cek == true) {
      admin();
    } else if (cek != true) {
      goto loginAdmin;
    }
    bacadata.close();
  }

  // PILIHAN LOGIN PELANGGAN

  else if (pilihan == 2) {
    // ulang jika inputan user tidak sesuai ke sini
  jawabanUser:

    cout << "===================================";
    cout << endl;
    cout << "             PELANGGAN             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "Apakah Sudah Punya Akun : ";
    cout << endl;
    cout << "[y/n] : ";
    cin >> jawabanUser;
    if (jawabanUser == 'Y' || jawabanUser == 'y') {
      string checkUser[1000];
      bacadata.open("./dummy/dataktp.txt");
      while (!bacadata.eof()) {
        bacadata >> checkUser[index];
        index++;
      }
      bacadata.close();
      cout << "Masukan Username : ";
      cin >> pelangganPetCare.username;
      cout << "Masukan Password : ";
      cin >> pelangganPetCare.password;
      for (int i = 0; i <= (index + 1) / 15; i++) {
        if (pelangganPetCare.username == checkUser[0 + (i * 15)] &&
            pelangganPetCare.password == checkUser[1 + (i * 15)]) {
          cek = true;
          goto check;
        } else {
          cek = false;
        }
      }
    check:
      if (cek == true) {
        cout << clrs;
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << "             SELAMAT              ";
        cout << endl;
        cout << "         BERHASIL LOGIN           ";
        cout << endl;
        cout << "===================================";
        cout << endl;
        cout << endl;
        cout << endl;
        menuPelanggan();
      } else if (cek != false) {
        goto jawabanUser;
      }

    } else if (jawabanUser == 'N' || jawabanUser == 'n') {
      ktpPelanggan();
      cout << "\033[2J\033[0;0H";
      cout << endl;
      cout << "=======================================";
      cout << endl;
      cout << "                SELAMAT                ";
      cout << endl;
      cout << "  USERNAME & PASSWORD BERHASIL DIBUAT  ";
      cout << endl;
      cout << "========================================";
      cout << endl;

      goto jawabanUser;
    } else {
      cout << "===========================================";
      cout << endl;
      cout << "            MAAF SILAHKAN ULANG        ";
      cout << endl;
      cout << "  USERNAME & PASSWORD BERHASIL GAGAL DIBUAT";
      cout << endl;
      cout << "===========================================";
      cout << endl;
      goto jawabanUser;
    }
  }else if(pilihan == 3){

    string userName;
    string passWord;
    createUser();
relog:
    cout << "===========================================" << endl;
    cout << "    Login Dengan Akun Yang Baru Dibuat     " << endl;
    cout << "===========================================" << endl;
    cout << "===========================================" << endl;
    cout << "1. Login Dengan Akun Admin" << endl;
    cout << "2. Login Dengan Akun Pengguna" << endl;
    cout << "===========================================" << endl;
    cout << "Pilih [1-2] : ";
    cin >> pilih;
    cout << "   Username : ";
    cin >> userName;
    cout << "   Password : ";
    cin >> passWord;
    if(pilih == 1){
      if(userName == savedata[0] && passWord == savedata[1]){
        admin();
      }else{
      cout << "===========================================" << endl;
      cout << "         USERNAME & PASSWORD SALAH         " << endl;
      cout << "===========================================" << endl;
      goto relog;
      }
    }else if(pilih == 2){
      if(userName == saved[0] && passWord == saved[1]){
        menuPelanggan();
      }else{
      cout << "===========================================" << endl;
      cout << "         USERNAME & PASSWORD SALAH         " << endl;
      cout << "===========================================" << endl;
      goto relog;
      }
    }

    
    
  }else if(pilihan == 4){
    exit(-1);
  }
}

// BAGIAN ADMIN
void app::admin() {
pilihanAdmin:
  cout << clrs;
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "          BERHASIL LOGIN           ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "               ADMIN               ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Lihat Data Hewan";
  cout << endl;
  cout << "2. Lihat Data Pelanggan";
  cout << endl;
  cout << "3. Masukan Data Vaksin";
  cout << endl;
  cout << "4. Masukan Data Hewan";
  cout << endl;
  cout << "5. Data Veterinarian";
  cout << endl;
  cout << "6. Lihat Data Vaksin";
  cout << endl;
  cout << "7. Masukan Data Makanan";
  cout << endl;
  cout << "8. Masukan Data Pendapatan";
  cout << endl;
  cout << "9. Data Pasien Prioritas";
  cout << endl;
  cout << "10. Lihat Struktur Dokter";
  cout << endl;
  cout << "11. Lihat Data Makanan Etalase";
  cout << endl;
  cout << "12. Lihat Data KTP Yang Baru DiDaftarkan";
  cout << endl;
  cout << "13. Exit";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "Masukan Pilihan [1-13] : ";
  cin >> pilihan;
  if (pilihan == 1) {
    string isidataHewan[30];
    int sizeofdatabasehewan = sizeof(isidataHewan) / sizeof(isidataHewan[0]);
    read.open("./dummy/databaseHewan.txt", ios::in);

    for (int i = 0; i < sizeofdatabasehewan; i++) {
      getline(read, isidataHewan[i]);
    }
    read.close();

    // MENAMPILKAN DATABASE HEWAN
    cout << clrs;
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "             BERHASIL              ";
    cout << endl;
    cout << "          DATABASE HEWAN           ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << endl;
    for (int i = 0; i < 30; i++) {
      cout << isidataHewan[i];
      cout << endl;
    }
      cout << "Kembali ke Menu Awal [y/n] : ";
      cin >> jawabanPengguna;
      if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
      cout << clrs;
      goto pilihanAdmin;
      }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
      cout << "===================================";
      cout << endl;
      cout << "      TERIMAKASIH SUDAH MASUK      ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      exit(-1);
      }
  } else if (pilihan == 2) {

    // MENAMPILKAN DATABASE PELANGGAN
    cout << clrs;
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "             BERHASIL              ";
    cout << endl;
    cout << "        DATABASE PELANGGAN         ";
    cout << endl;
    cout << "===================================";
    cout << endl;

    string isidata[150];
    read.open("./dummy/dataktp.txt");
    for (int i = 0; i < sizeof(isidata) / sizeof(isidata[0]); i++) {
      getline(read, isidata[i]);
    }
    bacadata.close();

    for (int i = 0; i < sizeof(isidata) / sizeof(isidata[0]); i++) {
      cout << isidata[i];
      cout << endl;
    }
      cout << "Kembali ke Menu Awal [y/n] : ";
      cin >> jawabanPengguna;
      if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
      cout << clrs;
      goto pilihanAdmin;
      }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
      cout << "===================================";
      cout << endl;
      cout << "      TERIMAKASIH SUDAH MASUK      ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      exit(-1);
      }
    
  } else if (pilihan == 3) {
    cout << "===================================";
    cout << endl;
    cout << "           DATABASE VAKSIN         ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "Masukan jumlah data : ";
    cin >> jumlah;

    // dataVaksin.ReSize(jumlah);
    Array1D<string> dataVaksin(jumlah);
    cout << "=================================";
    cout << endl;
    for (int i = 0; i < jumlah; i++) {
      cout << "Vaksin ke - " << i + 1 << " : ";
      cin >> ws;
      getline(cin, dataVaksin[i]);
      cout << endl;
    }
    tulisdata.open("./dummy/databaseVaksin.txt", ios::app);
    for (int i = 0; i < jumlah; i++) {
      tulisdata << dataVaksin[i];
      tulisdata << endl;
    }
    cout << "==================================";
    cout << endl;
    tulisdata.close();
    cout << clrs;
    cout << endl;
    cout << "========================";
    cout << endl;
    cout << "       LIHAT DATA ?     ";
    cout << endl;
    cout << "========================";
    cout << endl;
    cout << "[y/n] : ";
    cin >> jawabanUser;
    if (jawabanUser == 'Y' || jawabanUser == 'y') {
      goto pilihanAdmin;
    } else if (jawabanUser == 'N' || jawabanUser == 'n') {
      cout << clrs;
      cout << endl;
      cout << "====================";
      cout << endl;
      cout << "   PROGRAM SELESAI  ";
      cout << endl;
      cout << "====================";
      cout << endl;
    }
    cout << "Kembali ke Menu Awal [y/n] : ";
    cin >> jawabanPengguna;
    if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
    goto pilihanAdmin;
    cout << clrs;
    }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
          cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
    }
  } else if (pilihan == 4) {
    cout << "==========================";
    cout << endl;
    cout << "Masukan Jumlah Hewan : ";
    cin >> n;
    hewanDatabase(n, 0);
    cout << "=========================";
    cout << endl;
  } else if (pilihan == 5) {

    // PERGI KE OPSI VETERINARIAN ATAU DOKTER HEWAN
    veterinarian();

  } else if (pilihan == 6) {
    cout << clrs;
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "             BERHASIL              ";
    cout << endl;
    cout << "          DATABASE VAKSIN          ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << endl;
    string lihatDataVaksin[30];
    read.open("./dummy/databaseVaksin.txt");
    for (int i = 0; i < 30; i++) {
      getline(read, lihatDataVaksin[i]);
    }
    bacadata.close();
    for (int i = 0; i < 30; i++) {
      cout << lihatDataVaksin[i];
      cout << endl;
    }

  } else if (pilihan == 7) {

    cout << "========================";
    cout << endl;
    cout << "  MASUKAN DATA MAKANAN  ";
    cout << endl;
    cout << "========================";
    cout << endl;
    cout << "1. Tambah Data";
    cout << endl;
    cout << "2. Hapus Data";
    cout << endl;
    cout << "3. Kembali ke Menu";
    cout << endl;
    cout << "4.Exit";
    cout << endl;
    cout << "Masukan Pilihan[1-4] : ";
    cin >> pilihan;
  stack:
    cout << "\033[2J\033[0;0H";
    displayStack();
    if (pilihan == 1) {
      push();
      goto stack;
    } else if (pilihan == 2) {
      pop();
      goto stack;
    }else if(pilihan == 3) {
      cout << "Kembali ke Menu Awal [y/n] : ";
      cin >> jawabanPengguna;
      if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
      cout << clrs;
      goto pilihanAdmin;
      }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
      cout << "===================================";
      cout << endl;
      cout << "      TERIMAKASIH SUDAH MASUK      ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      exit(-1);
      }
    }else if(pilihan == 4){
      exit(-1);
    }
  } else if (pilihan == 8) {
    SetSizeStack();
    cout << "Kembali ke Menu Awal [y/n] : ";
    cin >> jawabanPengguna;
    if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
    goto pilihanAdmin;
    cout << clrs;
    }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
          cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
    }
  } else if (pilihan == 9) {
    // BAGIAN PRIORITI QUEUE
    SomeFunPriorQueue();
    displayPriorQueue();
    cout << "Kembali ke Menu Awal [y/n] : ";
    cin >> jawabanPengguna;
    if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
    goto pilihanAdmin;
    cout << clrs;
    }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
    cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
    }
  } else if (pilihan == 10) {
    tree();
    cout << "Kembali ke Menu Awal [y/n] : ";
    cin >> jawabanPengguna;
    if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
    goto pilihanAdmin;
    cout << clrs;
    }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
    cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
    }
  } else if (pilihan == 11) {
    LihatDataMakanan();
    cout << "Kembali ke Menu Awal [y/n] : ";
    cin >> jawabanPengguna;
    if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
    goto pilihanAdmin;
    cout << clrs;
    }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
          cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
    }
  } else if (pilihan == 12) {
    cout << clrs;
    cout << endl;
    displaydataAdmin();
    cout << "Kembali ke Menu Awal [y/n] : ";
    cin >> jawabanPengguna;
    if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
    goto pilihanAdmin;
    cout << clrs;
    }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
          cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
    }
  } else if (pilihan == 13) {
    cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
  }
}
void app::hewanDatabase(int n, int x = 0) {
  if (n <= 0) {
    // jika nilai n kurang dari 0 nanti ini bakal ke eksekusi
    admin();
  } else {

    tulisdata.open("./dummy/databaseHewan.txt", ios::app);
    cout << "Masukan Data ke - " << x + 1 << "  ";
    cout << endl;
    getchar();

    cout << "Masukan Jenis Hewan : ";
    cin >> ws;
    getline(cin, hewan[x].jenisHewan);
    tulisdata << "Jenis  : " << hewan[x].jenisHewan;
    tulisdata << endl;
    cout << endl;

    cout << "Masukan Nama Hewan  : ";
    getline(cin, hewan[x].namaHewan);
    tulisdata << "Nama : " << hewan[x].namaHewan;
    tulisdata << endl;
    cout << endl;

    cout << "Masukan Umur Hewan  : ";
    cin >> ws;
    getline(cin, hewan[x].umurHewan);
    tulisdata << "Umur : " << hewan[x].umurHewan;
    tulisdata << endl;
    cout << endl;

    cout << "Layanan Hewan       : ";
    cin >> ws;
    getline(cin, hewan[x].pelayananHewan);
    tulisdata << "Pelayanan : " << hewan[x].pelayananHewan;
    tulisdata << endl;
    cout << endl;
    tulisdata.close();
    return hewanDatabase(n - 1, x + 1);
  }
}

// BAGIAN DOKTER HEWAN / VETERINARIAN
void app::veterinarian() {
lihatDataVet:
  cout << "===================================";
  cout << endl;
  cout << "             VETERINARIAN          ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Tambah Data Depan";
  cout << endl;
  cout << "2. Hapus Data Depan ";
  cout << endl;
  cout << "3. Lihat Data Vet";
  cout << endl;
  cout << "4. Exit";
  cout << endl;
  cout << "Pilih [1-4] : ";
  cin >> pilihan;
  cout << "======================================";
  cout << endl;
  Node *kepala;
  Node *satu = NULL;
  Node *dua = NULL;
  Node *tiga = NULL;
  Node *empat = NULL;
  Node *lima = NULL;

  satu = new Node();
  dua = new Node();
  tiga = new Node();
  empat = new Node();
  lima = new Node();

  satu->data = "Dokter Pukis";
  dua->data = "Dokter Ucup";
  tiga->data = "Dokter Paijo";
  empat->data = "Dokter Yoga";
  lima->data = "Dokter Akmal";

  satu->next = dua;
  dua->next = tiga;
  tiga->next = empat;
  empat->next = lima;
  lima->next = NULL;
  kepala = satu;

  if (pilihan == 1) {
    getchar();
    string namaVeterinarian;
    cout << "===============================";
    cout << endl;
    cout << "Masukan Nama Veterinarian : ";
    cout << endl;
    cout << "===============================";
    cout << endl;
    getline(cin, namaVeterinarian);
    Node *newNode;
    newNode = new Node();
    newNode->data = namaVeterinarian;
    newNode->next = kepala;
    kepala = newNode;
    while (kepala != NULL) {
      cout << kepala->data;
      cout << endl;
      kepala = kepala->next;
    }
    cout << "=========================";
    cout << endl;
    cout << "Data Berhasil Ditambah";
    cout << endl;
    cout << "=========================";
    cout << endl;
    cout << endl;
    goto lihatDataVet;

  } else if (pilihan == 2) {
    Node *temp;
    temp = kepala;
    while (temp->next->next != NULL) {
      temp = temp->next;
    }
    temp->next = NULL;
    cout << "=========================";
    cout << endl;
    cout << "Data Berhasil Dihapus";
    cout << endl;
    cout << "=========================";
    cout << endl;
    cout << endl;
    goto lihatDataVet;
  } else if (pilihan == 3) {
    while (kepala != NULL) {
      cout << kepala->data;
      cout << endl;
      kepala = kepala->next;
    }
  } else if (pilihan == 4) {
    exit(-1);
  } else {
    return login();
  }
}
// BAGIAN MENU PELANGGAN
void app::menuPelanggan() {
pilihanMenu:
  cout << "===================================";
  cout << endl;
  cout << "                MENU               ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Penitipan Hewan";
  cout << endl;
  cout << "2. Beli Makanan";
  cout << endl;
  cout << "3. Layanan Medical ";
  cout << endl;
  cout << "4. Grooming Hewan";
  cout << endl;
  cout << "5. Antar Makanan Hewan";
  cout << endl;
  cout << "6. Layanan Vet Ke Rumah";
  cout << endl;
  cout << "7. Antrian Pelanggan";
  cout << endl;
  cout << "8. Exit";
  cout << endl;
  cout << "Pilihan [1-8] : ";
  cin >> pilihan;
  if (pilihan == 1) {
    string alasan, durasi;
    cout << "===================================";
    cout << endl;
    cout << "           PENITIPAN HEWAN         ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    getchar();
    cout << "Jenis Hewan : ";
    getline(cin, animal.jenisHewan);
    cout << "Umur Hewan : ";
    getline(cin, animal.umurHewan);
    cout << "Alasan Penitipan : ";
    getline(cin, alasan);
    cout << "Lama Penitipan : ";
    getline(cin, durasi);
    cout << "====isi data selesai====";
    cout << endl;
    cout << "=====TERIMAKASIH=====";
    cout << endl;
    cout << "ingin melanjutkan? [y/n] : ";
    cin >> jawabanUser;
    if (jawabanUser == 'Y' || jawabanUser == 'y') {
      menuPelanggan();
    } else if (jawabanUser == 'N' || jawabanUser == 'n') {
      cout << "TRANSAKSI BERAKHIR TERIMAKASIH";
      cout << endl;
      exit(-1);
    }

  } else if (pilihan == 2) {
    string isidataMakanan[5];
    cout << "===================================";
    cout << endl;
    cout << "               MAKANAN             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. ETALASE SATU";
    cout << endl;
    cout << "2. ETALASE DUA ";
    cout << endl;
    cout << "3. ETALASE TIGA";
    cout << endl;
    cout << "4. KEMBALI KE MENU";
    cout << endl;
    cout << "5. EXIT";
    cout << endl;
    cout << "Pilih [1-5] : ";
    cin >> pilih;
    if (pilih == 1) {
      cout << "DISPLAY ETALASE 1" << endl;
      cout << endl;
      pembelianMakananBagianSatu();
    } else if (pilih == 2) {
      cout << "DISPLAY ETALASE 2" << endl;
      cout << endl;
      pembelianMakananBagianDua();
    } else if (pilih == 3) {
      pembelianMakananBagianTiga();
    }else if(pilih == 4) {
      cout << "Kembali ke Menu Awal [y/n] : ";
      cin >> jawabanPengguna;
      if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
      cout << clrs;
      goto pilihanMenu;
      }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
      cout << "===================================";
      cout << endl;
      cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
      cout << endl;
      cout << "===================================";
      cout << endl;
      exit(-1);
      }
    }else if (pilih == 5) {
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
    }
    // read.open("./dummy/daftarmakanan.txt");
    // for (int i = 0; i <= 5; i++) {
    //   getline(read, isidataMakanan[i]);
    // }
    // read.close();

    // for (int i = 0; i < 5; i++) {
    //   cout << isidataMakanan[i];
    //   cout << endl;
    // }
  } else if (pilihan == 3) {
    cout << "===================================";
    cout << endl;
    cout << "           LAYANAN MEDICAL         ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Konsultasi";
    cout << endl;
    cout << "2. Vaksinasi";
    cout << endl;
    cout << "3. Pengobatan & Perawatan";
    cout << endl;
    cout << "4. Kembali Ke Menu Awal";
    cout << endl;
    cout << "5. Exit ";
    cout << endl;
    cout << "Pilih [1-5] : ";
    cin >> pilihan;
    if (pilihan == 1) {
      cout << "==========================";
      cout << endl;
      cout << "| Anda Memilih Konsultasi |";
      cout << endl;
      cout << "==========================";
      cout << endl;
      cout << endl;
      cout << "Masukan Nama Pemilik : ";
      cin.ignore();
      getline(cin, datpel1.nama);
      cout << "Masukkan Alamat : ";
      getline(cin, datpel1.alamat);
      cout << "Masukkan NIK : ";
      getline(cin, datpel1.nik);
      cout << "Masukan Keluhan : ";
      getline(cin, pelayanan.layanan);
      cout << "Jenis Hewan : ";
      getline(cin, animal.jenisHewan);
      tulisdata.open("./dummy/dataKonsultasi.txt");
      tulisdata << "====================================";
      tulisdata << endl;
      tulisdata << "Nama Pemilik: " << datpel1.nama;
      tulisdata << endl;
      tulisdata << "Alamat : " << datpel1.alamat;
      tulisdata << endl;
      tulisdata << "NIK : " << datpel1.nik;
      tulisdata << endl;
      tulisdata << "Jenis Hewan : " << animal.jenisHewan;
      tulisdata << endl;
      tulisdata << "Keluhan : " << pelayanan.layanan;
      tulisdata << endl;
      tulisdata << "====================================";
      tulisdata << endl;
      tulisdata.close();
            cout << "Kembali ke Menu Awal [y/n] : ";
            cin >> jawabanPengguna;
            if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
            cout << clrs;
            goto pilihanMenu;
            }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
            cout << "===================================";
            cout << endl;
            cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
            cout << endl;
            cout << "===================================";
            cout << endl;
            exit(-1);
            }

    } else if (pilihan == 2) {
      cout << "===============================";
      cout << endl;
      cout << "     Anda Memilih Vaksinasi";
      cout << endl;
      cout << "===============================";
      cout << endl;
      cout << " Masukkan Data Terlebih Dahulu";
      cout << endl;
      cout << "===============================";
      cout << endl;
      getchar();
      cout << "Masukkan Nama : ";
      getline(cin, datpel1.nama);
      cout << "Masukan Alamat : ";
      getline(cin, datpel1.alamat);
      cout << "Masukan NiK : ";
      getline(cin, datpel1.nik);
      cout << "Jenis Hewan : ";
      getline(cin, animal.jenisHewan);

      cout << "=========PILIHAN VAKSIN========";
      cout << endl;
      cout << "================================";
      cout << endl;
      bacadata.open("./dummy/databaseVaksin.txt");
      for (int i = 0; i < 11; i++) {
        getline(bacadata, vaksin[i]);
      }
      bacadata.close();

      for (int i = 0; i < 11; i++) {
        cout << "Pilihan ke - " << i + 1 << " : " << vaksin[i];
        cout << endl;
      }
      cout << "Masukan Pilihan Vaksin : ";
      cin >> pilihan;
      for (int i = 0; i < 1; i++) {
        cout << "Kamu Memilih Vaksin " << vaksin[pilihan - 1];
        cout << endl;
      }
            cout << "Kembali ke Menu Awal [y/n] : ";
            cin >> jawabanPengguna;
            if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
            cout << clrs;
            goto pilihanMenu;
            }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
            cout << "===================================";
            cout << endl;
            cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
            cout << endl;
            cout << "===================================";
            cout << endl;
            exit(-1);
            }
    } else if (pilihan == 3) {
      pengobatan();
            cout << "Kembali ke Menu Awal [y/n] : ";
            cin >> jawabanPengguna;
            if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
            cout << clrs;
            goto pilihanMenu;
            }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
            cout << "===================================";
            cout << endl;
            cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
            cout << endl;
            cout << "===================================";
            cout << endl;
            exit(-1);
            }
    } else if (pilihan == 4) {
      menuPelanggan();
    } else if (pilihan == 5) {
      exit(-1);
    }
  } else if (pilihan == 4) {
    cout << "===================================";
    cout << endl;
    cout << "              GROOMING             ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Grooming Kucing";
    cout << endl;
    cout << "2. Grooming Anjing";
    cout << endl;
    cout << "3. Kembali ke Menu Awal";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "Pilih [1-3] : ";
    cin >> pilihan;
    if (pilihan == 1) {
      harga = 150000;
      cout << "==============================";
      cout << endl;
      cout << "        GROOMING KUCING       ";
      cout << endl;
      cout << "==============================";
      cout << endl;
      cin.ignore();
      cout << "Masukan Nama Kucing : ";
      getline(cin, animal.namaHewan);
      cout << "Masukan Umur Kucing : ";
      getline(cin, animal.umurHewan);
    bayarGrooming1:
      cout << "Harga : " << harga;
      cout << endl;
      functionPembayaranGrooming();
      cout << "Bayar : ";
      cin >> bayar;
      if (bayar < harga) {
        cout << "Uangmu Kurang";
        cout << endl;
        goto bayarGrooming1;
      } else {
        cout << "Kembalian : " << transaksi(harga, bayar);
        cout << endl;
      }
      // 154 - start
      tulisdata.open("./dummy/invoiceGrooming.txt");
      tulisdata << "-========================================-";
      tulisdata << endl;
      tulisdata << "========INVOICE GROOMING KUCING========";
      tulisdata << endl;
      tulisdata << "Nama Hewan Peliharaan : " << animal.namaHewan;
      tulisdata << endl;
      tulisdata << "Umur Hewan Peliharaan : " << animal.umurHewan;
      tulisdata << endl;
      tulisdata << "Harga Grooming        : " << harga;
      tulisdata << endl;
      tulisdata << "Jumlah Bayar          : " << bayar;
      tulisdata << endl;
      tulisdata << "Kembalian             : " << transaksi(harga, bayar);
      tulisdata << endl;
      tulisdata << "===============TERIMAKASIH=============";
      tulisdata << endl;
      tulisdata << "-========================================-";
      tulisdata << endl;
      tulisdata << endl;
      tulisdata.close();
      string dataInvoiceGrooming[9];
      bacadata.open("./dummy/invoiceGrooming.txt");
      for (int i = 0; i < 9; i++) {
        getline(bacadata, dataInvoiceGrooming[i]);
      }
      bacadata.close();
      cout << "=======================================";
      cout << endl;
      cout << "Apakah ingin mencetak Invoice [y/n] : ";
      cin >> jawabanUser;
      cout << "=======================================";
      cout << endl;
      cout << endl;
      if (jawabanUser == 'Y' || jawabanUser == 'y') {
        for (int n = 0; n < 9; n++) {
          cout << dataInvoiceGrooming[n] << endl;
        }
        cout << "====================";
        cout << endl;
        cout << "TRANSAKSI SELESAI";
        cout << endl;
        cout << "====================";
        cout << endl;
            cout << "Kembali ke Menu Awal [y/n] : ";
            cin >> jawabanPengguna;
            if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
            cout << clrs;
            goto pilihanMenu;
            }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
            cout << "===================================";
            cout << endl;
            cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
            cout << endl;
            cout << "===================================";
            cout << endl;
            exit(-1);
            }
      } else if (jawabanUser == 'N' || jawabanUser == 'n') {
        cout << "====================";
        cout << endl;
        cout << "TRANSAKSI SELESAI";
        cout << endl;
        cout << "====================";
        cout << endl;
        exit(-1);
      }
    } else if (pilihan == 2) {
      harga = 230000;
      cout << "==============================";
      cout << endl;
      cout << "        GROOMING ANJING       ";
      cout << endl;
      cout << "==============================";
      cout << endl;
      cin.ignore();
      cout << "Masukan Nama Anjing : ";
      getline(cin, animal.namaHewan);
      cout << "Masukan Umur Anjing : ";
      getline(cin, animal.umurHewan);
    bayarGrooming2:
      cout << "Harga : ";
      cout << harga;
      cout << endl;
      functionPembayaranGrooming();
      cout << "Bayar : ";
      cin >> bayar;
      if (bayar < harga) {
        cout << "Uangmu Kurang";
        cout << endl;
        goto bayarGrooming2;
      } else {
        cout << "Kembalian : " << transaksi(harga, bayar);
        cout << endl;
      }
      tulisdata.open("./dummy/invoiceGrooming.txt");
      tulisdata << "=======================================";
      tulisdata << endl;
      tulisdata << "========INVOICE GROOMING ANJING========";
      tulisdata << endl;
      tulisdata << "Nama Hewan Peliharaan : " << animal.namaHewan;
      tulisdata << endl;
      tulisdata << "Umur Hewan Peliharaan : " << animal.umurHewan;
      tulisdata << endl;
      tulisdata << "Harga Grooming        : " << harga;
      tulisdata << endl;
      tulisdata << "Jumlah Bayar          : " << bayar;
      tulisdata << endl;
      tulisdata << "Kembalian             : " << transaksi(harga, bayar);
      tulisdata << endl;
      tulisdata << "===============TERIMAKASIH=============";
      tulisdata << endl;
      tulisdata << "=======================================";
      tulisdata.close();
      // 154 - end
      string dataInvoiceGrooming[9];
      bacadata.open("./dummy/invoiceGrooming.txt");
      for (int i = 0; i < 9; i++) {
        getline(bacadata, dataInvoiceGrooming[i]);
      }
      bacadata.close();
      cout << "Apakah ingin mencetak Invoice [y/n] : ";
      cin >> jawabanUser;
      cout << endl;
      if (jawabanUser == 'Y' || jawabanUser == 'y') {
        for (int n = 0; n < 9; n++) {
          cout << dataInvoiceGrooming[n];
          cout << endl;
        }
        cout << "===================";
        cout << endl;
        cout << "TRANSAKSI SELESAI";
        cout << endl;
        cout << "===================";
        cout << endl;
        cout << endl;
            cout << "Kembali ke Menu Awal [y/n] : ";
            cin >> jawabanPengguna;
            if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
            cout << clrs;
            goto pilihanMenu;
            }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
            cout << "===================================";
            cout << endl;
            cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
            cout << endl;
            cout << "===================================";
            cout << endl;
            exit(-1);
            }
      } else if (jawabanUser == 'N' || jawabanUser == 'n') {
        cout << "===================";
        cout << endl;
        cout << "TRANSAKSI SELESAI ";
        cout << endl;
        cout << "===================";
        cout << endl;
        cout << endl;
        exit(-1);
      }
    }else if(pilihan == 3){
      cout << clrs;
      goto pilihanMenu;
    }else if(pilihan == 4){
      exit(-1);
    }

  } else if (pilihan == 5) {
    cout << "===================================";
    cout << endl;
    cout << "          ANTAR MAKANAN            ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "1. Etalase Satu";
    cout << endl;
    cout << "2. Etalase Dua";
    cout << endl;
    cout << "3. Etalase Tiga";
    cout << endl;
    cout << "4. Exit";
    cout << endl;
    cout << "Pilih [1-4] : ";
    cin >> pilih;
    if (pilih == 1) {
      PembayaranOnlinePertama();
    } else if (pilih == 2) {
      PembayaranOnlineKedua();
    } else if (pilih == 3) {
      PembayaranOnlineKetiga();
    } else if (pilih == 4) {
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
    }
  } else if (pilihan == 6) {
    bool cekString = 0;
    cout << clrs;
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "            SELAMAT DATANG         ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "              PELAYANAN            ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "            VET ON THE GO          ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "Masukan Nama Lengkap Anda : ";
    cin >> ws;
    getline(cin, vog.name);
    cout << "Masukan Alamat Lengkap Anda : ";
    cin >> ws;
    getline(cin, vog.address);
    cout << "Masukan No.Telepon : ";
    cin >> vog.noHP;
    cout << endl;
    Vog();
    cout << "Kembali ke Menu Awal [y/n] : ";
    cin >> jawabanPengguna;
    if(jawabanPengguna == 'y'|| jawabanPengguna == 'Y'){
    cout << clrs;
    goto pilihanMenu;
    }else if(jawabanPengguna == 'n' || jawabanPengguna == 'Y'){
    cout << "===================================";
    cout << endl;
    cout << "    TERIMAKASIH SUDAH BERKUNJUNG   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    exit(-1);
    }
    tulisdata.open("./dummy/lokasipelangganvog.txt");
    tulisdata << "=================================\n";
    tulisdata << "        -LOKASI PELANGGAN-        \n";
    tulisdata << "  GUNAKAN SEBAGAI PETUNJUK ARAH  \n";
    tulisdata << "=================================\n";
    tulisdata << "Nama Pelanggan : " << vog.name << endl;
    tulisdata << "Alamat         : " << vog.address << endl;
    tulisdata << "No Telepon     : " << vog.noHP << endl;
    tulisdata << "=================================\n";
    tulisdata << "          HATI HATI DIJALAN      \n";
    tulisdata << "       BERIKAN LAYANAN TERBAIK   \n";
    tulisdata << "=================================\n";
    tulisdata.close();
    // // fungsi untuk mengecek apakah string kosong atau tidak;
    if (vog.name.empty()) {
      cekString = 1;
    } else {
      cekString = 0;
    }

    if (!cekString) {

    } else {
      cout << "String Kosong";
    }

  } else if (pilihan == 7) {
    cout << "===================================";
    cout << endl;
    cout << "         ANTRIAN PELANGGAN         ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    functionQueue();
  } else if (pilihan == 8) {
    exit(1);
  } else {
    cout << "===========================";
    cout << endl;
    cout << "  [PILIHAN ANDA TIDAK ADA] ";
    cout << endl;
    cout << "===========================";
    cout << endl;

    // kembali ke menu pelanggan
    menuPelanggan();
  }
}
int main() {
  app x;
  // x.funcKTP();
  x.login();
  return 0;
}