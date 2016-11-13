#include "tubes.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
    apotek mainAPK; createListAPK(mainAPK);
    addressAPK addAPK; infotypeAPK dataAPK;
    addressObat addObat; infotypeObat dataObat;

{   //---- Test Case Data ----//
    // TEST CASE INSERT APK //
    dataAPK.idAPK = "ID1";
    dataAPK.namaAPK = "APK Yuslan";
    dataAPK.alamat = "Jalan Medan Utama";
    dataAPK.tanggal = "02 September 2011";
    dataAPK.pajak = 10;
    addAPK = alokasiAPK(dataAPK);
    insertLastAPK(mainAPK, addAPK);

    dataAPK.idAPK = "ID2";
    dataAPK.namaAPK = "APK Cinta Nusantara";
    dataAPK.alamat = "Jalan Cinta Utama Dunia";
    dataAPK.tanggal = "14 February 2014";
    dataAPK.pajak = 10;
    addAPK = alokasiAPK(dataAPK);
    insertLastAPK(mainAPK, addAPK);

    dataAPK.idAPK = "ID3";
    dataAPK.namaAPK = "APK Gak Laku";
    dataAPK.alamat = "Jalan Gak Jelas";
    dataAPK.tanggal = "02 September 2099";
    dataAPK.pajak = 10;
    addAPK = alokasiAPK(dataAPK);
    insertLastAPK(mainAPK, addAPK);


//     TEST CASE INSERT Obat //
    dataObat.idObat = "M1";
    dataObat.namaObat = "Nasi Goreng";
    dataObat.hargaObat = 5000;
    addAPK = findElmAPK(mainAPK,"ID1");
    insertObatFirst(addAPK,dataObat);

    dataObat.idObat = "M2";
    dataObat.namaObat = "Ramen Ichiraku";
    dataObat.hargaObat = 3000;
    addAPK = findElmAPK(mainAPK,"ID2");
    insertObatFirst(addAPK,dataObat);

    dataObat.idObat = "M3";
    dataObat.namaObat = "Indomie Rebus";
    dataObat.hargaObat = 3500;
    addAPK = findElmAPK(mainAPK,"ID1");
    insertObatFirst(addAPK,dataObat);

    dataObat.idObat = "M4";
    dataObat.namaObat = "Cheese Omelet Rice";
    dataObat.hargaObat = 10000;
    addAPK = findElmAPK(mainAPK,"ID2");
    insertObatFirst(addAPK,dataObat);

    dataObat.idObat = "M5";
    dataObat.namaObat = "Nasi Goreng ala Munzul";
    dataObat.hargaObat = 5000;
    addAPK = findElmAPK(mainAPK,"ID1");
    insertObatLast(addAPK,dataObat);
}

//     Obat Utama - Tugas Besar Patungan
    ObatLabel:
    system("cls");
    cout << "#### TUGAS BESAR STRUKTUR DATA ####"<<endl
         << "       #### DEEP WEB TEAM ####"<<endl
         <<endl
         << "Obat :   1. Insert Toko Apotek"<<endl
         << "         2. Insert Obat Apotek"<<endl
         << "         3. Edit Info Apotek"<<endl // Berdasarkan ID
         << "         4. Edit Info Obat Apotek"<<endl // Berdasarkan ID Obat
         << "         5. Delete Apotek"<<endl // Berdasarkan ID
         << "         6. Delete Obat APK"<<endl // Berdasarkan ID Obat
         << "         7. Print Info Apotek"<<endl
         << "         8. Print APK & Obatnya"<<endl
         << "         9. Search Apotek"<<endl //Berdasarkan ID APK
         << "         10. Search Obat APK"<<endl //Berdasarkan Apotek
         << "         11. Sort Apotek by ID"<<endl
         << "         12. Sort Obat APK by ID"<<endl
         << "         13. Hitung Total APK / Obat"<<endl
         << "         666. EXIT"<<endl;
    cout << endl;
    cout << "Input Your Obat (NUM) : "; int Obat;
    cin>>Obat; cin.ignore();
    switch (Obat) {
      case 1  :  system("cls"); addapotek(mainAPK);     getch(); goto ObatLabel;
      case 2  :  system("cls"); addObatAPK(mainAPK);         getch(); goto ObatLabel;
      case 3  :  system("cls"); editInfoAPK(mainAPK);        getch(); goto ObatLabel;
      case 4  :  system("cls"); editHargaObat(mainAPK);     getch(); goto ObatLabel;
      case 5  :  system("cls"); deleteAPKOption(mainAPK);    getch(); goto ObatLabel;
      case 6  :  system("cls"); deleteObatOption(mainAPK);  getch(); goto ObatLabel;
      case 7  :  system("cls"); printInfoAPK(mainAPK);       getch(); goto ObatLabel;
      case 8  :  system("cls"); printInfoObat(mainAPK);     getch(); goto ObatLabel;
      case 9  :  system("cls"); searchAPK(mainAPK);          getch(); goto ObatLabel;
      case 10  :  system("cls"); searchObat(mainAPK);        getch(); goto ObatLabel;
      case 11  :  system("cls"); sortapotek(mainAPK);    getch(); goto ObatLabel;
      case 12  :  system("cls"); sortObat(mainAPK);          getch(); goto ObatLabel;
      case 13  :  system("cls"); countObat(mainAPK);          getch(); goto ObatLabel;
      case 666  :  goto ExitLabel; // Case Exit
      default : cin.ignore();  goto ObatLabel; // Case Handling Inputan Lain
    }
    ExitLabel: ;

    return 0;
}
