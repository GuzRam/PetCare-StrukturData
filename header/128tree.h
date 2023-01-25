#ifndef TREE__
#define TREE__
// Binary Tree in C++
#include "variabel.h"
#include <iostream>
#include <string>
using namespace std;

struct node {
  string data;
  node *left;
  node *right;
  node(string e) {
    this->data = e;
    left = right = NULL;
  }
};

// preorder
void preorder(node *NewNode) {
  if (NewNode == NULL)
    return;
  cout << NewNode->data << "\n | ";
  cout << endl;
  preorder(NewNode->left);
  preorder(NewNode->right);
}
// inorder
void inorder(node *NewNode) {
  if (NewNode != NULL) {
    inorder(NewNode->left);
    cout << "\n";
    cout << NewNode->data;
    cout << endl;
    cout << " | ";
    cout << endl;
    inorder(NewNode->right);
  }
}
// postorder
void postorder(node *NewNode) {
  if (NewNode != NULL) {
    postorder(NewNode->left);
    postorder(NewNode->right);
    cout << "\n ";
    cout << NewNode->data;
    cout << endl;
    cout << " | ";
    cout << endl;
  }
}
void tree() {
retree:
  node *akar = new node("Dokter Pukis");
  akar->left = new node("Dokter Paijo");
  akar->right = new node("Dokter Oki");
  akar->left->left = new node("Dokter Surya");
  akar->left->right = new node("Dokter Kiko");
  akar->right->left = new node("Dokter Kioxia");
  akar->right->right = new node("Dokter Ucup");
  akar->right->right->right = new node("Dokter Usup");

  cout << "===================================";
  cout << endl;
  cout << "     STRUKTUR DOKTER DENGAN TREE   ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "1. Tampilkan Secara PreOrder";
  cout << endl;
  cout << "2. Tampilkan Secara InOrder";
  cout << endl;
  cout << "3. Tampilkan Secara PostOrder";
  cout << endl;
  cout << "4. Kembali Ke Menu Awal";
  cout << endl;
  cout << "Pilih [1-4] : ";
  cin >> pilih;
  switch (pilih) {
  case 1:
    cout << "===================================";
    cout << endl;
    cout << "     STRUKTUR DOKTER DENGAN TREE   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "             PREORDER              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    preorder(akar);
    cout << endl;
    cout << endl;
    cout << "Kembali [y?n] : ";
    cin >> jawabanPengguna;
    if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
      cout << clrs;
      goto retree;
    } else if (jawabanPengguna == 'n' || jawabanPengguna == 'N') {

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
    break;
  case 2:
    cout << "===================================";
    cout << endl;
    cout << "     STRUKTUR DOKTER DENGAN TREE   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "              INORDER              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    inorder(akar);
    cout << endl;
    cout << endl;
    cout << "Kembali [y?n] : ";
    cin >> jawabanPengguna;
    if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
      cout << clrs;
      goto retree;
    } else if (jawabanPengguna == 'n' || jawabanPengguna == 'N') {
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
    break;
  case 3:
    cout << "===================================";
    cout << endl;
    cout << "     STRUKTUR DOKTER DENGAN TREE   ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "===================================";
    cout << endl;
    cout << "            POSTORDER              ";
    cout << endl;
    cout << "===================================";
    cout << endl;
    postorder(akar);
    cout << endl;
    cout << endl;
    cout << "Kembali [y?n] : ";
    cin >> jawabanPengguna;
    if (jawabanPengguna == 'y' || jawabanPengguna == 'Y') {
      cout << clrs;
      goto retree;
    } else if (jawabanPengguna == 'n' || jawabanPengguna == 'N') {
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
    break;
  default:
    cout << endl;
    cout << "==================================";
    cout << endl;
    cout << "        KEMBALI KE MENU AWAL      ";
    cout << endl;
    cout << "==================================";
    cout << endl;
    //goto retree;
    break;
  }
}
#endif