#ifndef STACK__
#define STACK__
#include "array1D.h"
#include<string.h>
#define clearscreen "\033[2J\033[0;0H";


using namespace std;
int ukuran;
Array1D<string> datax(10000);
int top = 0;

/*method untuk isFull berfungsi untuk 
mengecek apakah stack sudah full atau tidak,
jika stack full maka akan mereturn nilai true
dan jika stack tidak full maka akan mereturn 
nilai false
*/


bool isFull(){
  if(top >= ukuran){
    return true;
  }else{
    return false;
  }
}

/*method untuk isEmpty berfungsi untuk 
mengecek apakah stack kosong atau tidak,
jika stack kosong maka akan mereturn nilai true
dan jika stack tidak kosong maka akan mereturn 
nilai false
*/
bool isEmpty(){
  if(top == 0){
    return true;
  }else{
    return false;
  }
}

/*
method untuk memasukan data pada array dinamis yang berfungsi sebagai push data
*/
void push(){
  //jika stack tidak full maka push data ke dalam array dinamis
  if(!isFull()){

    cout << "Masukan Data Pendapatan: ";
    cin.ignore();
    cin >> datax[top];
    top++;
    cout << endl;
  }
};

/*
method untuk mengahpus data pada array dinamis yang berfungsi sebagai pop data
*/
void pop(){
  //jika array tidak kosong maka pop data dari array
  if(!isEmpty()){
    top--;
  }
};

//method untuk menampilkan isi stacking
void displayStack(){
  //cek kondisi jika stack tidak kosong maka tampilkan isi datanya
  if(!isEmpty()){
    cout << "Data Yang Tersimpan : ";
    cout << endl;
    
    for(int i = 0; i <top; i++){
      cout << i+1 << " . " << datax[i];
      cout << endl;
    }

    //jika data yang ada pada stack maka tampilkan dibawah ini
  }else{
    cout << "Data Kosong!";
    cout << endl;
  }
  //jika stack sudah terisi penuh
  if(isFull()){
    cout << "Stack Sudah Penuh";
    cout << endl;
  }
}

void opsiPilihan(){
  int pilihan;
  string data;
rewindStack:
    cout << clearscreen;
    displayStack();
  
    cout << "1.Push Data";
    cout << endl;
  
    cout << "2.Pop Data";
    cout << endl;
  
    cout << "3. Kembali ke Menu";
    cout << endl;

    cout << "Pilih [1-3] : ";
    cin >> pilihan;

      if(pilihan == 1){
          push();
            goto rewindStack;
      }else if(pilihan == 2){
          pop();
            goto rewindStack;
      }else if(pilihan == 3){
        
      }else{
        cout << "Piihan tidak tersedia!";
        cout << endl;
        goto rewindStack;
      }
    
}
void size(int n){
  ukuran = n;
  opsiPilihan();
}

void SetSizeStack(){
  int xy;
  cout << "Masukan Ukuran Stack : ";
  cin >> xy;
  size(xy);
}
#endif