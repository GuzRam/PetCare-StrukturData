#ifndef __
#define __
#include "variabel.h"
#include "149ktpPelanggan.h"
#include "154ktpAdmin.h"
#include <iostream>
using namespace std;

void createUser(){
    cout << "====================" << endl;
    cout << "1.Buat Akun Admins" << endl;
    cout << "====================" << endl;
    cout << "2.Buat Akun Pengguna" << endl;
    cout << "====================" << endl;
    cout << "Pilih [1-2] : ";
    cin >> pilih;
    if(pilih == 1){
        loginktpAdmin();
    }else if(pilih == 2){
        loginktpPelanggan();
    }
}
#endif