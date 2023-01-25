#ifndef QUEUEWITHPRIOR__
#define QUEUEWITHPRIOR__

#include "variabel.h"
#include<iostream>
#include<queue>
using namespace std;

//queue
priority_queue<string> thisQueue;
string saveQueueDatStream[100];
void SomeFunPriorQueue(){
  int indexx=0;
  cout << "========================";
  cout << endl;
  cout << "     PRIORITY QUEUE     ";
  cout << endl;
  cout << "  BERBASIS HURUF AWAL   ";
  cout << endl;
  cout << "========================";
  cout << endl;
  cout << "Masukan Banyak Data : ";
  cin >> jumlah;
  for(int i = 0;i<jumlah;i++){
    cout << "Masukan Nama : ";
    cin >> dataStreamQueue;
    thisQueue.push(dataStreamQueue);
    saveQueueDatStream[indexx] = dataStreamQueue;
    indexx++;
  }
}

void displayPriorQueue(){
  while(!thisQueue.empty()){
    cout << " " << thisQueue.top();
    cout << endl;
    thisQueue.pop();
  }
}

void DequeuePriorQueue(){
  thisQueue.pop();
}

#endif