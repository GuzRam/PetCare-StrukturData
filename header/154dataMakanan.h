#ifndef DATAMAKANAN__
#define DATAMAKANAN__
//#include "../main.cpp"
#include "variabel.h"
#include <fstream>
#include <iostream>

using namespace std;
string makananRoyalCaninAnjing[22];
string makananRoyalCaninKucing[31];
string makananAlpoAnjing[6];
string makananAlpoKucing[6];
string makananpedigreen[4];
string makananproplanAnjing[7];
string makananinstinct[7];
string makananhug[6];
string minumanGroowpy[2];
string minumanLacMilk[2];
string makananMonge[6];
string makananMeoKucing[8];
string makananWhiskasKucing[6];
string makananMaxLifeKucing[3];
string makananLifeCat[4];
string makananIamsKucing[4];
string makananProPlanKucing[6];
string makananPurinaSuperCat[4];
string makananSuperCat[3];
string makananKitCat[5];
string makananProDietDRY[8];
string makananProDietWET[8];

int hargamakananRoyalCaninAnjing[22];
int hargamakananRoyalCaninKucing[31];
int hargamakananAlpoAnjing[6];
int hargamakananAlpoKucing[6];
int hargamakananpedigreen[4];
int hargamakananproplanAnjing[7];
int hargamakananinstinct[7];
int hargamakananhug[6];
int hargaminumanGroowpy[2];
int hargaminumanLacMilk[2];
int hargamakananMonge[6];
int hargamakananMeoKucing[8];
int hargamakananWhiskasKucing[6];
int hargamakananMaxLifeKucing[3];
int hargamakananLifeCat[4];
int hargamakananIamsKucing[4];
int hargamakananProPlanKucing[6];
int hargamakananPurinaSuperCat[4];
int hargamakananSuperCat[4];
int hargamakananKitCat[5];
int hargamakananProDietDRY[8];
int hargamakananProDietWET[8];
void FoodData() {
  // bagian royal Canin Anjing
  cout << endl;
  makananRoyalCaninAnjing[0] = " Hepatic";
  makananRoyalCaninAnjing[1] = " Skin Support";
  makananRoyalCaninAnjing[2] = " Adult";
  makananRoyalCaninAnjing[3] = " Diabetic";
  makananRoyalCaninAnjing[4] = " Fibre Response";
  makananRoyalCaninAnjing[5] = " Dental Small Dog";
  makananRoyalCaninAnjing[6] = " Gasto Intestinal Low Fat";
  makananRoyalCaninAnjing[7] = " Cardirac";
  makananRoyalCaninAnjing[8] = " Renal Dry";
  makananRoyalCaninAnjing[9] = " Obesity Management";
  makananRoyalCaninAnjing[10] = " DermaComfort DryFood";
  makananRoyalCaninAnjing[11] = " DermaComfort WetFood";
  makananRoyalCaninAnjing[12] = " Skin Support";
  makananRoyalCaninAnjing[13] = " Recover Canine";
  makananRoyalCaninAnjing[14] = " Recovery Canine Feline";
  makananRoyalCaninAnjing[15] = " Maxi Adult";
  makananRoyalCaninAnjing[16] = " Skin Care";
  makananRoyalCaninAnjing[17] = " Vaterinary Renal Canine";
  makananRoyalCaninAnjing[18] = " Mini Indoor Puppy";
  makananRoyalCaninAnjing[19] = " Chihuahua Adult";
  makananRoyalCaninAnjing[20] = " Chihuahua Puppy";
  makananRoyalCaninAnjing[21] = " Baby Dog Milk - Susu Untuk Anak Anjing";

  // bagian royal Canin Kucing

  makananRoyalCaninKucing[0] = " Senior Consult";
  makananRoyalCaninKucing[1] = " Renal With Tuna";
  makananRoyalCaninKucing[2] = " Weight Management";
  makananRoyalCaninKucing[3] = " Sensitivity Control";
  makananRoyalCaninKucing[4] = " Hypoallergenic Cat";
  makananRoyalCaninKucing[5] = " Veterinary Gastro Insetial";
  makananRoyalCaninKucing[6] = " Pediastric Growth";
  makananRoyalCaninKucing[7] = " Hepatic";
  makananRoyalCaninKucing[8] = " Renal With Chicken";
  makananRoyalCaninKucing[9] = " Padiatric";
  makananRoyalCaninKucing[10] = " Mobility";
  makananRoyalCaninKucing[11] = " Fibre Response";
  makananRoyalCaninKucing[12] = " Urinary Care";
  makananRoyalCaninKucing[13] = " Dental";
  makananRoyalCaninKucing[14] = " Analergenic";
  makananRoyalCaninKucing[15] = " Persian Kitten";
  makananRoyalCaninKucing[16] = " Hair And Skin Care";
  makananRoyalCaninKucing[17] = " Mother And Kitten";
  makananRoyalCaninKucing[18] = " Maine Coon For Adult";
  makananRoyalCaninKucing[19] = " Protein Exigent";
  makananRoyalCaninKucing[20] = " Indoor 27";
  makananRoyalCaninKucing[21] = " British Shorthair";
  makananRoyalCaninKucing[22] = " Renal Cat";
  makananRoyalCaninKucing[23] = " Sensitivity Control Cat";
  makananRoyalCaninKucing[24] = " Fit 32";
  makananRoyalCaninKucing[25] = " Sterilised 37";
  makananRoyalCaninKucing[26] = " Digestive Care";
  makananRoyalCaninKucing[27] = " Sensible 33";
  makananRoyalCaninKucing[28] = " Exigent 33 Aromatic Attraction";
  makananRoyalCaninKucing[29] = " Exigent Savour Sensation";
  makananRoyalCaninKucing[30] = " Intense Beauty Jelly";

  // Bagian Makanan Anjing Alpo

  makananAlpoAnjing[0] = " DryFood For Dog ";
  makananAlpoAnjing[1] = " WetFood For Dog ";
  makananAlpoAnjing[2] = " Wetfood For Dog (Canned)";
  makananAlpoAnjing[3] = " DryFood For Puppy ";
  makananAlpoAnjing[4] = " WetFood For Puppy ";
  makananAlpoAnjing[5] = " Wetfood For Puppy (Canned)";

  // Bagian Makanan Kucing Alpo

  makananAlpoKucing[0] = " DryFood For Cat ";
  makananAlpoKucing[1] = " WetFood For Cat";
  makananAlpoKucing[2] = " WetFood For Cat (Canned)";
  makananAlpoKucing[3] = " DryFood For Kitten";
  makananAlpoKucing[4] = " WetFood For Kitten";
  makananAlpoKucing[5] = " WetFood For Kitten (Canned)";

  // Bagian Makanan Anjing Pedigree Pouch

  makananpedigreen[0] = " Puppy Chicken (Egg & Milk) (Sachet)";
  makananpedigreen[1] = " Puppy Chicken (Canned) ";
  makananpedigreen[2] = " Small Dog ";
  makananpedigreen[3] = " Beef Chicken ";

  // Bagian Makanan Anjing Pro Plan

  makananproplanAnjing[0] = " Healty Growth Small (Chicken)";
  makananproplanAnjing[1] = " Healty Growth Medium (Chicken)";
  makananproplanAnjing[2] = " Healty Growth Large (Chicken)";
  makananproplanAnjing[3] = " Adult Essential Small (Chicken)";
  makananproplanAnjing[4] = " Adult Essential Medium (Chicken)";
  makananproplanAnjing[5] = " Adult Essential Large (Chicken)";

  // Bagian Makanan Instinct Anjing

  makananinstinct[0] = " Natural Real Salmon";
  makananinstinct[1] = " Healty Craving Real Duck";
  makananinstinct[2] = " Healty Craving Real Rabbit";
  makananinstinct[3] = " Healty Craving Real Chicken";
  makananinstinct[4] = " Healty Craving Real Beef";
  makananinstinct[5] = " Healty Natural Brown Rice";
  makananinstinct[6] = " Healty Natural Oatmeal";

  // Bagian Makanan HUG Anjing

  makananhug[0] = " Pork With Apple For Puppy";
  makananhug[1] = " Chicken With Carrot";
  makananhug[2] = " Beef With Potato";
  makananhug[3] = " Cold Pressed";
  makananhug[4] = " Bird Pressed";
  makananhug[5] = " Mixed Taster";

  // Bagian Minuman Groowpy - Anjing

  minumanGroowpy[0] = " MILK for Puppy";
  minumanGroowpy[1] = " MILK for Dog";

  // Minuman Kucing Lac Milk
  minumanLacMilk[0] = " MILK for Kitten";
  minumanLacMilk[1] = " MILK for Cat";

  // Bagian Makanan Anjing Monge SUPERPREMIUM

  makananMonge[0] = " Monoprotein Turkey With Rice & Potato";
  makananMonge[1] = " Rich In Chicken";
  makananMonge[2] = " Salmon With Rice";
  makananMonge[3] = " Duck With Salmon";
  makananMonge[4] = " Pork With Rice";
  makananMonge[5] = " Trout With Rice";

  // Bagian Makanan Kucing ME - O

  makananMeoKucing[0] = " Kitten Ocean Fish";
  makananMeoKucing[1] = " For Persian";
  makananMeoKucing[2] = " Gournament";
  makananMeoKucing[3] = " Seafood";
  makananMeoKucing[4] = " Salmon";
  makananMeoKucing[5] = " Beef";
  makananMeoKucing[6] = " Chicken & Vegetables";
  makananMeoKucing[7] = " Tuna";

  // Bagian Makanan Kucing Whiskas

  makananWhiskasKucing[0] = " Tasty Mix Pouch Chicken";
  makananWhiskasKucing[1] = " Tasty Mix Pouch Wakame";
  makananWhiskasKucing[2] = " Tasty Mix Pouch Tuna & Wortel";
  makananWhiskasKucing[3] = " Tasty Mix Pouch Saus Kanimaka & Wortel";
  makananWhiskasKucing[4] = " Tasty Mix Pouch Ikan Kembung";
  makananWhiskasKucing[5] = " Tasty Mix Pouch Saba Panggang";

  // Bagian Makanan Kucing MaxLife

  makananMaxLifeKucing[0] = " Mackerel Kitten Pouch";
  makananMaxLifeKucing[1] = " Mackerel Adult Pouch";
  makananMaxLifeKucing[2] = " Mackerel Can";

  // Bagian Makanan Kucing LIFECAT

  makananLifeCat[0] = " Salmon Adult";
  makananLifeCat[1] = " Chicken & Tuna";
  makananLifeCat[2] = " Chicken for Kitten";
  makananLifeCat[3] = " Tuna for Kitten";

  // Bagian Makanan Kucing IAMS

  makananIamsKucing[0] = " Health Weight & Hairball Care";
  makananIamsKucing[1] = " Health Adult & Kitten";
  makananIamsKucing[2] = " Tuna & Salmon";
  makananIamsKucing[3] = " Health With Chicken";

  // Bagian Makanan Kucing PRO PLAN

  makananProPlanKucing[0] = " Chicken Optirenal";
  makananProPlanKucing[1] = " Tender Liver & Chicken";
  makananProPlanKucing[2] = " Grilled Tuna";
  makananProPlanKucing[3] = " Salmon Spinach";
  makananProPlanKucing[4] = " Chicken Pasta Spinach";
  makananProPlanKucing[5] = " Urinary Tract Health Chicken";

  // Bagian Makanan Kucing Purina

  makananPurinaSuperCat[0] = " Dental Chicken Cat Snack";
  makananPurinaSuperCat[1] = " Seafood Sensation";
  makananPurinaSuperCat[2] = " Kitten Discoveries";
  makananPurinaSuperCat[3] = " Urinary Care Chicken";

  // Bagian Makanan Kucing SUPERCAT

  makananSuperCat[0] = " SUPERCAT adult Wet Food";
  makananSuperCat[1] = " SUPERCAT adult Dry Food";
  makananSuperCat[2] = " SUPERCAT liquid Snack";

  // Bagian Makanan Kucing KITCAT

  makananKitCat[0] = " Premium Cat Food (Canned)";
  makananKitCat[1] = " Goat Milk Gourmet";
  makananKitCat[2] = " Gravy Canned Food";
  makananKitCat[3] = " Toppers Canned Food";
  makananKitCat[4] = " Mousse Canned Food";

  // Bagian Makanan PRO DIET
  // WET FOOD
  makananProDietWET[0] = " Salmon & Grilled Mackerel";
  makananProDietWET[1] = " Grilled Mackarel";
  makananProDietWET[2] = " Fresh Tuna";
  makananProDietWET[3] = " Fresh Mackarel";
  makananProDietWET[4] = " Ocean Fish";
  makananProDietWET[5] = " Chicken & Tuna";
  makananProDietWET[6] = " Seafood Platter";
  makananProDietWET[7] = " Mackerel";

  // DRY FOOD
  makananProDietDRY[0] = " Fresh Tuna for Kitten";
  makananProDietDRY[1] = " Ocean Fish";
  makananProDietDRY[2] = " Mackarel & Milk";
  makananProDietDRY[3] = " Gourmet Seafood";
  makananProDietDRY[4] = " COD & Chicken";
  makananProDietDRY[5] = " Salmon & Chicken";
  makananProDietDRY[6] = " Chicken & Tuna";
  makananProDietDRY[7] = " Classic Tuna";
}

void hargaMakanan() {
  // harga makanan Royal Canin Anjing
  hargamakananRoyalCaninAnjing[0] = 50000;
  hargamakananRoyalCaninAnjing[1] = 65000;
  hargamakananRoyalCaninAnjing[2] = 80000;
  hargamakananRoyalCaninAnjing[3] = 70000;
  hargamakananRoyalCaninAnjing[4] = 55000;
  hargamakananRoyalCaninAnjing[5] = 55000;
  hargamakananRoyalCaninAnjing[6] = 52000;
  hargamakananRoyalCaninAnjing[7] = 60000;
  hargamakananRoyalCaninAnjing[8] = 65000;
  hargamakananRoyalCaninAnjing[9] = 61000;
  hargamakananRoyalCaninAnjing[10] = 54000;
  hargamakananRoyalCaninAnjing[11] = 57000;
  hargamakananRoyalCaninAnjing[12] = 69000;
  hargamakananRoyalCaninAnjing[13] = 80000;
  hargamakananRoyalCaninAnjing[14] = 60000;
  hargamakananRoyalCaninAnjing[15] = 78000;
  hargamakananRoyalCaninAnjing[16] = 69000;
  hargamakananRoyalCaninAnjing[17] = 69000;
  hargamakananRoyalCaninAnjing[18] = 70000;
  hargamakananRoyalCaninAnjing[19] = 89000;
  hargamakananRoyalCaninAnjing[20] = 91000;
  hargamakananRoyalCaninAnjing[21] = 57000;

  // harga makanan Royal Canin Kucing
  hargamakananRoyalCaninKucing[0] = 50000;
  hargamakananRoyalCaninKucing[1] = 65000;
  hargamakananRoyalCaninKucing[2] = 35000;
  hargamakananRoyalCaninKucing[2] = 50000;
  hargamakananRoyalCaninKucing[3] = 30000;
  hargamakananRoyalCaninKucing[4] = 70000;
  hargamakananRoyalCaninKucing[5] = 80000;
  hargamakananRoyalCaninKucing[6] = 90000;
  hargamakananRoyalCaninKucing[7] = 90000;
  hargamakananRoyalCaninKucing[8] = 90000;
  hargamakananRoyalCaninKucing[9] = 90000;
  hargamakananRoyalCaninKucing[10] = 90000;
  hargamakananRoyalCaninKucing[11] = 90000;
  hargamakananRoyalCaninKucing[12] = 90000;
  hargamakananRoyalCaninKucing[13] = 90000;
  hargamakananRoyalCaninKucing[14] = 90000;
  hargamakananRoyalCaninKucing[15] = 90000;
  hargamakananRoyalCaninKucing[16] = 90000;
  hargamakananRoyalCaninKucing[17] = 90000;
  hargamakananRoyalCaninKucing[18] = 90000;
  hargamakananRoyalCaninKucing[19] = 90000;
  hargamakananRoyalCaninKucing[20] = 90000;
  hargamakananRoyalCaninKucing[21] = 90000;
  hargamakananRoyalCaninKucing[22] = 90000;
  hargamakananRoyalCaninKucing[23] = 90000;
  hargamakananRoyalCaninKucing[24] = 90000;
  hargamakananRoyalCaninKucing[25] = 90000;
  hargamakananRoyalCaninKucing[26] = 90000;
  hargamakananRoyalCaninKucing[27] = 90000;
  hargamakananRoyalCaninKucing[28] = 90000;
  hargamakananRoyalCaninKucing[29] = 90000;
  hargamakananRoyalCaninKucing[30] = 90000;

  // harga makanan alpo Anjing
  hargamakananAlpoAnjing[0] = 65000;
  hargamakananAlpoAnjing[1] = 65000;
  hargamakananAlpoAnjing[2] = 65000;
  hargamakananAlpoAnjing[3] = 65000;
  hargamakananAlpoAnjing[4] = 65000;
  hargamakananAlpoAnjing[5] = 65000;

  // harga makanan alpo Kucing
  hargamakananAlpoKucing[0] = 70000;
  hargamakananAlpoKucing[1] = 70000;
  hargamakananAlpoKucing[2] = 70000;
  hargamakananAlpoKucing[3] = 70000;
  hargamakananAlpoKucing[4] = 70000;
  hargamakananAlpoKucing[5] = 70000;

  // harga makanan pedigreen Pouch Anjing
  hargamakananpedigreen[0] = 65000;
  hargamakananpedigreen[1] = 65000;
  hargamakananpedigreen[2] = 65000;
  hargamakananpedigreen[3] = 65000;

  // harga makanan ProPlan Anjing
  hargamakananproplanAnjing[0] = 50000;
  hargamakananproplanAnjing[1] = 45000;
  hargamakananproplanAnjing[2] = 55000;
  hargamakananproplanAnjing[3] = 50000;
  hargamakananproplanAnjing[4] = 60000;
  hargamakananproplanAnjing[5] = 70000;

  // harga makanan Instinct Anjing
  hargamakananinstinct[0] = 70000;
  hargamakananinstinct[1] = 70000;
  hargamakananinstinct[2] = 70000;
  hargamakananinstinct[3] = 70000;
  hargamakananinstinct[4] = 70000;
  hargamakananinstinct[5] = 70000;
  hargamakananinstinct[6] = 70000;

  // harga makanan HUG Anjing
  hargamakananhug[0] = 45000;
  hargamakananhug[1] = 50000;
  hargamakananhug[2] = 55000;
  hargamakananhug[3] = 60000;
  hargamakananhug[4] = 65000;
  hargamakananhug[5] = 70000;

  // harga minuman Groowpy Anjing
  hargaminumanGroowpy[0] = 50000;
  hargaminumanGroowpy[1] = 50000;

  // harga minuman Lac Milk Kucing
  hargaminumanLacMilk[0] = 50000;
  hargaminumanLacMilk[1] = 50000;

  // harga makanan anjing Monge
  hargamakananMonge[0] = 55000;
  hargamakananMonge[1] = 55000;
  hargamakananMonge[2] = 45000;
  hargamakananMonge[3] = 65000;
  hargamakananMonge[4] = 75000;
  hargamakananMonge[5] = 55000;

  // harga makanan Kucing Me O
  hargamakananMeoKucing[0] = 55000;
  hargamakananMeoKucing[1] = 65000;
  hargamakananMeoKucing[2] = 65000;
  hargamakananMeoKucing[3] = 75000;
  hargamakananMeoKucing[4] = 65000;
  hargamakananMeoKucing[5] = 85000;
  hargamakananMeoKucing[6] = 65000;
  hargamakananMeoKucing[7] = 95000;

  // harga makanan kucing Whiskas
  hargamakananWhiskasKucing[0] = 55000;
  hargamakananWhiskasKucing[1] = 65000;
  hargamakananWhiskasKucing[2] = 75000;
  hargamakananWhiskasKucing[3] = 85000;
  hargamakananWhiskasKucing[4] = 95000;
  hargamakananWhiskasKucing[5] = 45000;

  // harga makanan kucing Max Life
  hargamakananMaxLifeKucing[0] = 50000;
  hargamakananMaxLifeKucing[1] = 45000;
  hargamakananMaxLifeKucing[2] = 65000;

  // harga makanan kucing Life Cat
  hargamakananLifeCat[0] = 75000;
  hargamakananLifeCat[1] = 45000;
  hargamakananLifeCat[2] = 85000;
  hargamakananLifeCat[3] = 95000;

  // harga makanan kucing IAMS
  hargamakananIamsKucing[0] = 73000;
  hargamakananIamsKucing[1] = 86000;
  hargamakananIamsKucing[2] = 67000;
  hargamakananIamsKucing[3] = 94000;

  // harga makanan kucing ProPlan
  hargamakananProPlanKucing[0] = 23000;
  hargamakananProPlanKucing[1] = 63000;
  hargamakananProPlanKucing[2] = 85000;
  hargamakananProPlanKucing[3] = 94000;
  hargamakananProPlanKucing[4] = 64000;
  hargamakananProPlanKucing[5] = 86000;

  // harga makanan kucing Purina SUPERCAT
  hargamakananPurinaSuperCat[0] = 55000;
  hargamakananPurinaSuperCat[1] = 65000;
  hargamakananPurinaSuperCat[2] = 75000;
  hargamakananPurinaSuperCat[3] = 85000;

  // harga makanan kucing SuperCat
  hargamakananSuperCat[0] = 40000;
  hargamakananSuperCat[1] = 50000;
  hargamakananSuperCat[2] = 60000;
  hargamakananSuperCat[3] = 80000;

  // harga makanan kucing KITCAT
  hargamakananKitCat[0] = 43000;
  hargamakananKitCat[1] = 63000;
  hargamakananKitCat[2] = 53000;
  hargamakananKitCat[3] = 63000;
  hargamakananKitCat[4] = 53000;

  // harga makanan kucing PRODIET (DRY)
  hargamakananProDietDRY[0] = 50000;
  hargamakananProDietDRY[1] = 60000;
  hargamakananProDietDRY[2] = 70000;
  hargamakananProDietDRY[3] = 80000;
  hargamakananProDietDRY[4] = 90000;
  hargamakananProDietDRY[5] = 100000;
  hargamakananProDietDRY[6] = 65000;
  hargamakananProDietDRY[7] = 57000;

  // harga makanan kucing PRODIET (WET)
  hargamakananProDietWET[0] = 60000;
  hargamakananProDietWET[1] = 60000;
  hargamakananProDietWET[2] = 43000;
  hargamakananProDietWET[3] = 60000;
  hargamakananProDietWET[4] = 60000;
  hargamakananProDietWET[5] = 56000;
  hargamakananProDietWET[6] = 53000;
  hargamakananProDietWET[7] = 54000;
}

void LihatDataMakanan() {
  int indexa = 0;
  string tempMakanan[1000];
  cout << clrs;
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "      DATA MAKANAN PADA ETALASE    ";
  cout << endl;
  cout << "===================================";
  cout << endl;
  bacadata.open("./dummy/daftarmakanan.txt");
  while (getline(bacadata, tempMakanan[indexa])) {
    cout << tempMakanan[indexa];
    indexa++;
    cout << endl;
  }
  bacadata.close();
  cout << endl;
  // cout << clrs;
  cout << endl;
  cout << endl;
  cout << "===================================";
  cout << endl;
  cout << "           PROGRAM SELESAI         ";
  cout << endl;
  cout << "===================================";
  cout << endl;
}
#endif