#ifndef tubes_H
#define tubes_H
#include <iostream>

// Define Pointer
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(R) (R).first
#define last(R) (R).last

using namespace std;

// ---- Deklarasi Pointer addressAPK --- //
typedef int *addressAnggota;
typedef struct elmAPK *addressAPK;
typedef struct elmObat *addressObat;

// ----- Deklarasi Tipe Bentukan Infotype ----- //
struct infotypeAPK
{
    string idAPK;
    string namaAPK;
    string alamat;
    string tanggal; //Fix String
    float pajak;
};

struct infotypeObat {
    string idObat;
    string namaObat;
    float hargaObat;
    addressAnggota anggota;
};

// ------ Tipe Bentukan Element List ------ //
struct elmAPK
{
    infotypeAPK info;
    addressObat daftarObat;
    addressAPK next;
    addressAPK prev;
};

struct elmObat {
    infotypeObat info;
    addressObat next;
    addressAnggota daftarAnggota;
};

// ------ Tipe Bentukan List ----- //
struct apotek
{
    addressAPK first;
    addressAPK last;
};

struct Obat {
    addressObat first;
};

//----------------- Fungsi dan Prosedur Default ----------------//
void createListAPK(apotek &R);
void createAPK(infotypeAPK &APK);
void createObat(infotypeObat &ObatAPK);
addressAPK alokasiAPK(infotypeAPK APK);
addressObat alokasiObat(infotypeObat ObatAPK);

addressAPK findElmAPK(apotek R, string idAPK);
addressObat findElmObat(addressAPK PAPK, string idObat);

void printInfoAPK(apotek APK);
void printInfoObat(apotek APK);
void editInfoAPK(apotek &APK);
void editHargaObat(apotek &APK);
void searchAPK(apotek APK);
void searchObat(apotek APK);

void insertObatFirst(addressAPK PAPK, infotypeObat addObat);
void insertObatLast(addressAPK PAPK, infotypeObat addObat);
void insertObatAfter(addressAPK PAPK, infotypeObat addObat);
void addObatAPK(apotek &APK);

addressAPK deleteFirstAPK(apotek &APK);
void deleteLastAPK(apotek &APK);
void deleteAfterAPK(apotek &APK);
void deleteAPKbyID(apotek &APK);
void deleteAPKOption(apotek &APK);

void deleteObatFirst(apotek &APK);
void deleteObatAfter(apotek &APK);
void deleteObatLast(apotek &APK);
void deleteObatByID(apotek &APK);
void deleteObatOption(apotek &APK);

void insertFirstAPK(apotek &R, addressAPK P);
void insertLastAPK(apotek &R, addressAPK P);
void insertAfterAPK(apotek &R, addressAPK P);
void addapotek(apotek &R);

void countTotalAPK(apotek APK);
void countTotalObat(apotek APK);
void countObat(apotek APK);

int countLengthAPK(apotek APK);
apotek mergeInAPK(apotek left, apotek right);
apotek mergeSortAPK(apotek APK);
void sortapotek(apotek &APK);

int countLengthObat(addressObat PAPK);
addressObat deleteObatFirstMergeSort(addressObat &M);
void insertObatFirstMergeSort(addressObat &PAPK, addressObat M);
void insertObatLastMergeSort(addressObat &PAPK, addressObat P);
addressObat mergeInObat(addressObat left, addressObat right);
addressObat mergeSortObat(addressObat PAPK);
void sortObat(apotek &APK);

#endif // tubes_H
