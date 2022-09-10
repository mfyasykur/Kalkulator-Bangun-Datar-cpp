#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <fstream>
#include <windows.h>
#include <math.h>

using namespace std;

///PROGRAM KALKULATOR BANGUN DATAR///

//Fungsi Searching (menggunakan binary search)
int function_binary_search(string data[], int jml_indeks, string data_dicari){
    //Deklarasi Fungsi
    int atas, bawah, tengah, posisi; //tipe variabel yang digunakan

    bawah   = 0;
    atas    = jml_indeks-1;
    posisi  = -1;

    //Algoritma Binary Search
    while (bawah <= atas){  //perulangan while
        tengah =(atas + bawah)/2;
        if (data_dicari == data[tengah]){   //kondisi pernyataan
        posisi = tengah;
        break;  //berhenti
        }
        else if(data_dicari < data[tengah]) atas = tengah -1;//kondisi pernyataan jika if tidak memenuhi
        else if(data_dicari > data[tengah]) bawah = tengah + 1;//kondisi pernyataan jika if tidak memenuhi
    }//end of while
    return posisi;//untuk mentransfer kembali atau mengembalikan nilai variabel posisi
}

//Prosedur Sorting (menggunakan bubble sort)
void bubble_sort(string arrs[],int panjang){
    //Deklarasi
    bool not_sorted = true;
    int j=0;
    string temp;

    //Algoritma Bubble Sort (Ascending)
    while (not_sorted){//perulangan while
        not_sorted = false;
        j++;
        for (int i = 0;i < panjang-j; i++){//perulangan while
            //kodisi if pernyataan untuk mencari nilai
            if (arrs[i] > arrs[i+1]){
                temp = arrs[i];
                arrs[i] = arrs[i+1];
                arrs [i+1] = temp;
                not_sorted = true;
            }//endl of if
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

//Prosedur output sorting
void print_array(string a[], int length){
    for (int i = 0;i < length; i ++){  //perulangan for
        cout << i+1 <<"." << a[i] << " " << endl;   //output
    }//end of for
    cout << endl;
}

//Deklarasi Global
    float s, p, l, a, t, AB, BC, CD, AC, AD, b, c, hasil, L, K, x, y, r, S, phi=3.14;
    string keluar, pilihan;

///Prosedur Menu Utama
void menu_utama(){

    //Header
    cout << "\t|=================================================================|" << endl;
    cout << "\t|                     KALKULATOR BANGUN DATAR                     |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t|-----------------------------------------------------------------|" << endl;
    cout << "\t|        Program ini menyediakan kalkulator yang disertai         |" << endl;
    cout << "\t|               rumus-rumus perhitungan bangun datar              |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| * * * * * * * * * * * * *  MENU UTAMA * * * * * * * * * * * * * |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| 1. KALKULATOR BANGUN DATAR                                      |" << endl;
    cout << "\t| 2. TABEL RUMUS BANGUN DATAR                                     |" << endl;
    cout << "\t| 3. CARI BANGUN DATAR                                            |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 99.TENTANG                                                      |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu Utama

///Prosedur MainMenu 1.KALKULATOR BANGUN DATAR
void kalkulator_bangun_datar(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                 >>> KALKULATOR BANGUN DATAR <<<                 |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Daftar Bangun Datar:                                            |" << endl;
    cout << "\t| 1. PERSEGI                                                      |" << endl;
    cout << "\t| 2. PERSEGI PANJANG                                              |" << endl;
    cout << "\t| 3. SEGITIGA  SIKU-SIKU                                          |" << endl;
    cout << "\t| 4. SEGITIGA SAMA KAKI                                           |" << endl;
    cout << "\t| 5. SEGITIGA SAMA SISI                                           |" << endl;
    cout << "\t| 6. JAJAR GENJANG                                                |" << endl;
    cout << "\t| 7. TRAPESIUM                                                    |" << endl;
    cout << "\t| 8. LAYANG-LAYANG                                                |" << endl;
    cout << "\t| 9. BELAH KETUPAT                                                |" << endl;
    cout << "\t| 10.LINGKARAN                                                    |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur MainMenu 1.KALKULATOR BANGUN DATAR

///Prosedur Menu 1.PERSEGI
void persegi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         >>> PERSEGI <<<                         |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Sisi (Jika diketahui Luas)                                   |" << endl;
    cout << "\t| 4. Sisi (Jika diketahui Keliling)                               |" << endl;
    cout << "\t| 5. Diagonal                                                     |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 1.PERSEGI

//Prosedur SubMenu Luas PERSEGI
void luas_persegi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         >>> PERSEGI <<<                         |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Sisi (s) : ";
    cin >> s;

    hasil = s*s; //rumus luas persegi

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = s x s" << endl;
    cout << "\t   = " << s << " x " << s << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas PERSEGI

//Prosedur SubMenu Keliling PERSEGI
void keliling_persegi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         >>> PERSEGI <<<                         |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi (s) : ";
    cin >> s;

    hasil = 4*s; //rumus keliling persegi

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = 4 x s" << endl;
    cout << "\t   = 4 x " << s << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling PERSEGI

//Prosedur SubMenu Sisi (Jika diketahui Luas PERSEGI)
void sisi_persegi_a(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         >>> PERSEGI <<<                         |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi (s) (Jika diketahui Luas PERSEGI)" << endl;
    cout << "\t -----------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L) : ";
    cin >> L;

    hasil = sqrt(L); //rumus

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = s x s" << endl;
    cout << "\t   = s^2" << endl;
    cout << "\t s = Akar(L)" << endl;
    cout << "\t   = Akar(" << L << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi (Jika diketahui Luas PERSEGI)

//Prosedur SubMenu Sisi (Jika diketahui Keliling PERSEGI)
void sisi_persegi_b(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         >>> PERSEGI <<<                         |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi (s) (Jika diketahui Keliling PERSEGI)" << endl;
    cout << "\t -----------------------------------------------------" << endl;
    cout << "\t Masukkan Keliling (K) : ";
    cin >> K;

    hasil = K/4; //rumus

    cout << "\t Hasil                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = 4 x s" << endl;
    cout << "\t s = K / 4" << endl;
    cout << "\t   = " << K << " / 4" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi (Jika diketahui Keliling PERSEGI)

//Prosedur SubMenu Diagonal PERSEGI
void diagonal_persegi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         >>> PERSEGI <<<                         |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Diagonal (d)" << endl;
    cout << "\t -------------------------------" << endl;
    cout << "\t Masukkan Sisi (s) : ";
    cin >> s;

    hasil = sqrt(2*pow(s,2)); //rumus

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t d = Akar(2 x s^2)" << endl;
    cout << "\t   = Akar(2 x " << s << "^2)" << endl;
    cout << "\t   = Akar(2 x " << pow(s,2) << ")" << endl;
    cout << "\t   = Akar(" << 2*pow(s,2) << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Diagonal PERSEGI

///Prosedur Menu 2.PERSEGI PANJANG
void persegipanjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Panjang (Jika diketahui Lebar dan Luas)                      |" << endl;
    cout << "\t| 4. Panjang (Jika diketahui Lebar dan Keliling)                  |" << endl;
    cout << "\t| 5. Lebar (Jika diketahui Panjang dan Luas)                      |" << endl;
    cout << "\t| 6. Lebar (Jika diketahui Panjang dan Keliling)                  |" << endl;
    cout << "\t| 7. Diagonal                                                     |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 2.PERSEGI PANJANG

//Prosedur SubMenu Luas PERSEGI PANJANG
void luas_persegipanjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Panjang (p) : ";
    cin >> p;
    cout << "\t Masukkan Lebar (l)   : ";
    cin >> l;

    hasil = p*l; //rumus luas persegi panjang

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = p x l" << endl;
    cout << "\t   = " << p << " x " << l << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas PERSEGI PANJANG

//Prosedur SubMenu Keliling PERSEGI PANJANG
void keliling_persegipanjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Panjang (p) : ";
    cin >> p;
    cout << "\t Masukkan Lebar (l)   : ";
    cin >> l;

    hasil = 2*(p+l); //rumus keliling persegi panjang

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = p + l + p + l" << endl;
    cout << "\t   = 2 (p + l)" << endl;
    cout << "\t   = 2 (" << p << " + " << l << ")" << endl;
    cout << "\t   = 2 (" << p+l << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of rosedur SubMenu Keliling PERSEGI PANJANG

//Prosedur SubMenu Panjang (Jika diketahui Lebar dan Luas PERSEGI PANJANG)
void panjang_persegipanjang_a(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Panjang (p) (Jika diketahui Lebar dan Luas)" << endl;
    cout << "\t ------------------------------------------------------" << endl;
    cout << "\t Masukkan Lebar (l) : ";
    cin >> l;
    cout << "\t Masukkan Luas (L)  : ";
    cin >> L;

    hasil = L/l; //rumus

    cout << "\t Hasil              : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = p x l" << endl;
    cout << "\t p = L / l" << endl;
    cout << "\t   = " << L << " / " << l << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Panjang (Jika diketahui Lebar dan Luas PERSEGI PANJANG)

//Prosedur SubMenu Panjang (Jika diketahui Lebar dan Keliling PERSEGI PANJANG)
void panjang_persegipanjang_b(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Panjang (p) (Jika diketahui Lebar dan Keliling)" << endl;
    cout << "\t ----------------------------------------------------------" << endl;
    cout << "\t Masukkan Lebar (l)    : ";
    cin >> l;
    cout << "\t Masukkan Keliling (K) : ";
    cin >> K;

    hasil = (K-2*l)/2; //rumus

    cout << "\t Hasil                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = 2 x (p + l)" << endl;
    cout << "\t   = 2p + 2l" << endl;
    cout << "\t p = (K - 2l)/2" << endl;
    cout << "\t   = (" << K << " - " << "2(" << l << ")) / 2" << endl;
    cout << "\t   = (" << K << " - " << 2*l << ") / 2" << endl;
    cout << "\t   = (" << K-2*l << ") / 2" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Panjang Sisi (Jika diketahui Lebar dan Keliling PERSEGI PANJANG)

//Prosedur SubMenu Lebar (Jika diketahui Panjang dan Luas PERSEGI PANJANG)
void lebar_persegipanjang_a(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Lebar (l) (Jika diketahui Panjang dan Luas)" << endl;
    cout << "\t ------------------------------------------------------" << endl;
    cout << "\t Masukkan Panjang (p) : ";
    cin >> p;
    cout << "\t Masukkan Luas (L)    : ";
    cin >> L;

    hasil = L/p; //rumus

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = p x l" << endl;
    cout << "\t l = L / p" << endl;
    cout << "\t   = " << L << " / " << p << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Lebar (Jika diketahui Panjang dan Luas PERSEGI PANJANG)

//Prosedur SubMenu Lebar (Jika diketahui Panjang dan Keliling PERSEGI PANJANG)
void lebar_persegipanjang_b(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Lebar (l) (Jika diketahui Panjang dan Keliling)" << endl;
    cout << "\t ----------------------------------------------------------" << endl;
    cout << "\t Masukkan Panjang (p)  : ";
    cin >> p;
    cout << "\t Masukkan Keliling (K) : ";
    cin >> K;

    hasil = (K-2*p)/2; //rumus

    cout << "\t Hasil                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = 2 x (p + l)" << endl;
    cout << "\t   = 2p + 2l" << endl;
    cout << "\t l = (K - 2p)/2" << endl;
    cout << "\t   = (" << K << " - " << "2(" << p << ")) / 2" << endl;
    cout << "\t   = (" << K << " - " << 2*p << ") / 2" << endl;
    cout << "\t   = (" << (K-2*p) << ") / 2" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Lebar Sisi (Jika diketahui Panjang dan Keliling PERSEGI PANJANG)

//Prosedur SubMenu Diagonal PERSEGI PANJANG
void diagonal_persegipanjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                     >>> PERSEGI PANJANG <<<                     |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Diagonal (d)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Panjang (p) : ";
    cin >> p;
    cout << "\t Masukkan Lebar (l)   : ";
    cin >> l;

    hasil = sqrt(pow(p,2) + pow(l,2));           //rumus

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t d = Akar(p^2 + l^2)" << endl;
    cout << "\t   = Akar(" << p << "^2 + " << l << "^2)" << endl;
    cout << "\t   = Akar(" << pow(p,2) << " + " << pow(l,2) << ")" << endl;
    cout << "\t   = Akar(" << pow(p,2) + pow(l,2) << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Diagonal PERSEGI PANJANG

///Prosedur Menu 3.SEGITIGA SIKU-SIKU
void segitiga_sikusiku(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Alas (Jika diketahui Tinggi dan Luas)                        |" << endl;
    cout << "\t| 4. Tinggi (Jika diketahui Alas dan Luas)                        |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| Pythagoras                                                      |" << endl;
    cout << "\t| 5. Alas (Sisi a)                                                |" << endl;
    cout << "\t| 6. Tinggi (Sisi b)                                              |" << endl;
    cout << "\t| 7. Sisi Miring (Sisi c)                                         |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 3.SEGITIGA SIKU-SIKU

//Prosedur SubMenu Luas SEGITIGA SIKU-SIKU
void luas_segitiga_sikusiku(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Alas (a)   : ";
    cin >> a;
    cout << "\t Masukkan Tinggi (t) : ";
    cin >> t;

    hasil = 0.5*a*t; //rumus luas persegi panjang

    cout << "\t Hasil               : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x a x t" << endl;
    cout << "\t   = 1/2 x " << a << " x " << t << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas SEGITIGA SIKU-SIKU

//Prosedur SubMenu Keliling SEGITIGA SIKU-SIKU
void keliling_segitiga_sikusiku(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi AB : ";
    cin >> AB;
    cout << "\t Masukkan Sisi BC : ";
    cin >> BC;
    cout << "\t Masukkan Sisi AC : ";
    cin >> AC;

    hasil = AB+BC+AC; //rumus keliling segitiga siku-siku

    cout << "\t Hasil            : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = AB + BC + AC" << endl;
    cout << "\t   = " << AB << " + " << BC << " + " << AC << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling SEGITIGA SIKU-SIKU

//Prosedur SubMenu Alas (Jika diketahui Tinggi dan Luas SEGITIGA SIKU-SIKU)
void alas_segitiga_sikusiku(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Alas (a) (Jika diketahui Tinggi dan Luas)" << endl;
    cout << "\t ----------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)   : ";
    cin >> L;
    cout << "\t Masukkan Tinggi (t) : ";
    cin >> t;

    hasil = (2*L)/t; //rumus

    cout << "\t Hasil               : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x a x t" << endl;
    cout << "\t a = (2 x L) / t" << endl;
    cout << "\t   = (2 x " << L << ") / " << t << endl;
    cout << "\t   = (" << 2*L << ") / " << t << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Alas (Jika diketahui Tinggi dan Luas SEGITIGA SIKU-SIKU)

//Prosedur SubMenu Tinggi (Jika diketahui Alas dan Luas SEGITIGA SIKU-SIKU)
void tinggi_segitiga_sikusiku(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Tinggi (t) (Jika diketahui Alas dan Luas)" << endl;
    cout << "\t ----------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)   : ";
    cin >> L;
    cout << "\t Masukkan Alas (a)   : ";
    cin >> a;

    hasil = (2*L)/a; //rumus

    cout << "\t Hasil               : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x a x t" << endl;
    cout << "\t t = (2 x L) / a" << endl;
    cout << "\t   = (2 x " << L << ") / " << a << endl;
    cout << "\t   = (" << 2*L << ") / " << a << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Tinggi (Jika diketahui Alas dan Luas SEGITIGA SIKU-SIKU)

//Prosedur SubMenu Alas (Sisi a) SEGITIGA SIKU-SIKU
void pythagoras_a(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Alas (Sisi a)" << endl;
    cout << "\t ------------------------" << endl;
    cout << "\t Masukkan Tinggi (Sisi b)      : ";
    cin >> b;
    cout << "\t Masukkan Sisi Miring (Sisi c) : ";
    cin >> c;

    hasil = sqrt(pow(c,2) - pow(b,2));   //rumus pythagoras

    cout << "\t Hasil                         : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t 'Teorema Pythagoras':" << endl;
    cout << "\t  c^2 = a^2 + b^2" << endl;
    cout << "\t  a^2 = c^2 - b^2" << endl;
    cout << "\t   a  = Akar(c^2 - b^2)" << endl;
    cout << "\t      = Akar(" << c << "^2 - " << b << "^2)" << endl;
    cout << "\t      = Akar(" << pow(c,2) << " - " << pow(b,2) << ")" << endl;
    cout << "\t      = Akar(" << pow(c,2) - pow(b,2) << ")" << endl;
    cout << "\t      = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Alas (Sisi a) SEGITIGA SIKU-SIKU

//Prosedur SubMenu Tinggi (Sisi b) SEGITIGA SIKU-SIKU
void pythagoras_b(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Tinggi (Sisi b)" << endl;
    cout << "\t --------------------------" << endl;
    cout << "\t Masukkan Alas (Sisi a)        : ";
    cin >> a;
    cout << "\t Masukkan Sisi Miring (Sisi c) : ";
    cin >> c;

    hasil = sqrt(pow(c,2) - pow(a,2));   //rumus pythagoras

    cout << "\t Hasil                         : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t 'Teorema Pythagoras':" << endl;
    cout << "\t  c^2 = a^2 + b^2" << endl;
    cout << "\t  b^2 = c^2 - a^2" << endl;
    cout << "\t      = " << c << "^2 - " << a << "^2" << endl;
    cout << "\t   b  = Akar(" << pow(c,2) << " - " << pow(a,2) << ")" << endl;
    cout << "\t      = Akar(" << pow(c,2) - pow(a,2) << ")" << endl;
    cout << "\t      = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Tinggi (Sisi b) SEGITIGA SIKU-SIKU

//Prosedur SubMenu Sisi Miring (Sisi c) SEGITIGA SIKU-SIKU
void pythagoras_c(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SIKU-SIKU <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi Miring (Sisi c)" << endl;
    cout << "\t -------------------------------" << endl;
    cout << "\t Masukkan Alas (Sisi a)   : ";
    cin >> a;
    cout << "\t Masukkan Tinggi (Sisi b) : ";
    cin >> b;

    hasil = sqrt(pow(a,2) + pow(b,2));   //rumus pythagoras

    cout << "\t Hasil                    : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t 'Teorema Pythagoras':" << endl;
    cout << "\t  c^2 = a^2 + b^2" << endl;
    cout << "\t      = " << a << "^2 + " << b << "^2" << endl;
    cout << "\t   c  = Akar(" << pow(a,2) << " + " << pow(b,2) << ")" << endl;
    cout << "\t      = Akar(" << pow(a,2) + pow(b,2) << ")" << endl;
    cout << "\t      = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi Miring (Sisi c) SEGITIGA SIKU-SIKU

///Prosedur Menu 4.SEGITIGA SAMA KAKI
void segitiga_samakaki(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA KAKI <<<                   |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Alas                                                         |" << endl;
    cout << "\t| 4. Tinggi                                                       |" << endl;
    cout << "\t| 5. Sisi Miring (Sisi a dan c)                                   |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 4.SEGITIGA SAMA KAKI

//Prosedur SubMenu Luas SEGITIGA SAMA KAKI
void luas_segitiga_samakaki(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA KAKI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Sisi a atau c : ";
    cin >> a;
    cout << "\t Masukkan Sisi b        : ";
    cin >> b;

    S = 0.5*(a+b+a);
    hasil = sqrt(S*(S-a)*(S-b)*(S-a));           //rumus luas segitiga sama kaki

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = Akar(S(S-a)(S-b)(S-c)) dimana S = 1/2 x (a + b + c)" << endl;
    cout << "\t                                     = 1/2 x (" << a << " + " << b << " + " << a << ")" << endl;
    cout << "\t                                     = 1/2 x (" << a+b+a << ")" << endl;
    cout << "\t                                     = " << S << endl;
    cout << "\t sehingga:" << endl;
    cout << "\t L = Akar(S(S-a)(S-b)(S-c))" << endl;
    cout << "\t   = Akar(" << S << "(" << S << "-" << a << ")(" << S << "-" << b << ")(" << S << "-" << a << "))" << endl;
    cout << "\t   = Akar(" << S << " x " << "(" << S-a << ")(" << S-b << ")(" << S-a << ")" << endl;
    cout << "\t   = Akar(" << S*(S-a)*(S-b)*(S-a) << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas SEGITIGA SAMA KAKI

//Prosedur SubMenu Keliling SEGITIGA SAMA KAKI
void keliling_segitiga_samakaki(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA KAKI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi a atau c : ";
    cin >> a;
    cout << "\t Masukkan Sisi b        : ";
    cin >> b;

    hasil = a+b+a; //rumus keliling segitiga sama kaki

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = AB + BC + AC" << endl;
    cout << "\t   = a + b + c" << endl;
    cout << "\t   = " << a << " + " << b << " + " << a << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling SEGITIGA SAMA KAKI

//Prosedur SubMenu Alas SEGITIGA SAMA KAKI
void alas_segitiga_samakaki(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA KAKI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Alas (Sisi b)" << endl;
    cout << "\t ------------------------" << endl;
    cout << "\t Masukkan Sisi a atau c : ";
    cin >> c;
    cout << "\t Masukkan Tinggi (t)    : ";
    cin >> t;

    hasil = 2*sqrt(pow(c,2) - pow(t,2)); //rumus alas segitiga sama kaki

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t 'Teorema Pythagoras':" << endl;
    cout << endl;
    cout << "\t untuk a = c, sehingga" << endl;
    cout << "\t 1/2(b^2) = c^2 - t^2" << endl;
    cout << "\t     b^2  = 2 x (c^2 - t^2)" << endl;
    cout << "\t       b  = 2 x Akar(c^2 - t^2)" << endl;
    cout << "\t          = 2 x Akar(" << c << "^2 - " << t << "^2)" << endl;
    cout << "\t          = 2 x Akar(" << pow(c,2) << " - " << pow(t,2) << ")" << endl;
    cout << "\t          = 2 x Akar(" << pow(c,2) - pow(t,2) << ")" << endl;
    cout << "\t          = 2 x " << sqrt(pow(c,2) - pow(t,2)) << endl;
    cout << "\t          = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Alas SEGITIGA SAMA KAKI

//Prosedur SubMenu Tinggi SEGITIGA SAMA KAKI
void tinggi_segitiga_samakaki(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA KAKI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Tinggi (t)" << endl;
    cout << "\t ---------------------" << endl;
    cout << "\t Masukkan Sisi a atau c : ";
    cin >> c;
    cout << "\t Masukkan Alas (Sisi b) : ";
    cin >> b;

    hasil = sqrt(pow(c,2) - pow((b/2),2)); //rumus tinggi segitiga sama kaki

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t 'Teorema Pythagoras':" << endl;
    cout << endl;
    cout << "\t untuk a = c, sehingga" << endl;
    cout << "\t t^2 = c^2 - (b/2)^2" << endl;
    cout << "\t  t  = Akar(c^2 - (b/2)^2)" << endl;
    cout << "\t     = Akar(" << c << "^2 - (" << b << "/2)^2)" << endl;
    cout << "\t     = Akar(" << pow(c,2) << " - " << b/2 << "^2)" << endl;
    cout << "\t     = Akar(" << pow(c,2) << " - " << pow((b/2),2) << ")" << endl;
    cout << "\t     = Akar(" << pow(c,2) - pow((b/2),2) << ")" << endl;
    cout << "\t     = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Tinggi SEGITIGA SAMA KAKI

//Prosedur SubMenu Sisi Miring SEGITIGA SAMA KAKI
void sisimiring_segitiga_samakaki(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA KAKI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi Miring (Sisi a dan c)" << endl;
    cout << "\t --------------------------------------" << endl;
    cout << "\t Masukkan Alas (sisi b) : ";
    cin >> b;
    cout << "\t Masukkan Tinggi (t)    : ";
    cin >> t;

    hasil = sqrt(pow((b/2),2) + pow(t,2)); //rumus sisi miring segitiga sama kaki

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t 'Teorema Pythagoras':" << endl;
    cout << endl;
    cout << "\t untuk a = c, sehingga" << endl;
    cout << "\t c^2 = t^2 + (b/2)^2" << endl;
    cout << "\t  c  = Akar(t^2 + (b/2)^2)" << endl;
    cout << "\t     = Akar(" << t << "^2 + (" << b << "/2)^2)" << endl;
    cout << "\t     = Akar(" << pow(t,2) << " + " << b/2 << "^2)" << endl;
    cout << "\t     = Akar(" << pow(t,2) << " + " << pow((b/2),2) << ")" << endl;
    cout << "\t     = Akar(" << pow((b/2),2) + pow(t,2) << ")" << endl;
    cout << "\t     = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi Miring SEGITIGA SAMA KAKI

///Prosedur Menu 5.SEGITIGA SAMA SISI
void segitiga_samasisi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA SISI <<<                   |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Sisi (Jika diketahui Luas)                                   |" << endl;
    cout << "\t| 4. Tinggi (Jika diketahui Sisi dan Luas)                        |" << endl;
    cout << "\t| 5. Tinggi (Jika diketahui Sisi lain)                            |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 5.SEGITIGA SAMA SISI

//Prosedur SubMenu Luas SEGITIGA SAMA SISI
void luas_segitiga_samasisi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA SISI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Sisi (s) : ";
    cin >> s;

    S = 0.5*(3*s);
    x = S-s;
    hasil = sqrt(S * pow(x,3));           //rumus luas segitiga sama sisi

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t karena a = b = c, maka:" << endl;
    cout << "\t L = Akar(S x (S-s)^3) dimana S = 1/2 x (3 x s)" << endl;
    cout << "\t                                = 1/2 x (3 x " << s << ")" << endl;
    cout << "\t                                = 1/2 x (" << 3*s << ")" << endl;
    cout << "\t                                = " << S << endl;
    cout << "\t sehingga:" << endl;
    cout << "\t L = Akar(S x (S-s)^3)" << endl;
    cout << "\t   = Akar(" << S << " x " << "(" << S << "-" << s << ")^3)" << endl;
    cout << "\t   = Akar(" << S << " x " << S-s << "^3)" << endl;
    cout << "\t   = Akar(" << S << " x " << pow(x,3) << ")" << endl;
    cout << "\t   = Akar(" << S * pow(x,3) << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << endl;
    cout << "\t cara cepat:" << endl;
    cout << "\t L = 1/2 x s x t" << endl;
    cout << "\t   = 1/2 x s x (s/2 x Akar(3)) --> Lihat tabel rumus" << endl;
    cout << "\t   = (s^2)/4 x Akar(3)" << endl;
    cout << "\t L = (" << s << "^2)/4 x Akar(3)" << endl;
    cout << "\t   = " << (pow(s,2))/4 << " x " << sqrt(3) << endl;
    cout << "\t   = " << (pow(s,2))/4 * sqrt(3) << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas SEGITIGA SAMA SISI

//Prosedur SubMenu Keliling SEGITIGA SAMA SISI
void keliling_segitiga_samasisi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA SISI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi (s) : ";
    cin >> s;

    hasil = 3*s; //rumus keliling segitiga sama sisi

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = 3 x s" << endl;
    cout << "\t   = 3 x " << s << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling SEGITIGA SAMA SISI

//Prosedur SubMenu Sisi (Jika diketahui Luas SEGITIGA SAMA SISI)
void sisi_segitiga_samasisi(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA SISI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi (s) (Jika diketahui Luas)" << endl;
    cout << "\t -----------------------------------------" << endl;
    cout << "\t Masukkan Luas (L) : ";
    cin >> L;

    hasil = sqrt((4*L*sqrt(3))/3); //rumus sisi segitiga sama sisi

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t s = Akar((4 x L x Akar(3)) / 3)" << endl;
    cout << "\t   = Akar((4 x " << L << " x (" << sqrt(3) << ")) / 3)" << endl;
    cout << "\t   = Akar(" << 4*L*sqrt(3) << " / 3)" << endl;
    cout << "\t   = Akar(" << (4*L*sqrt(3))/3 << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi (Jika diketahui Luas SEGITIGA SAMA SISI)

//Prosedur SubMenu Tinggi (Jika diketahui Sisi dan Luas SEGITIGA SAMA SISI)
void tinggi_segitiga_samasisi_a(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA SISI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Tinggi (t) (Jika diketahui Sisi dan Luas)" << endl;
    cout << "\t ----------------------------------------------------" << endl;
    cout << "\t Masukkan Sisi (s) yang diketahui : ";
    cin >> s;
    cout << "\t Masukkan Luas (L)                : ";
    cin >> L;

    hasil = (2 * L) / s; //rumus tinggi segitiga sama kaki

    cout << "\t Hasil                            : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t t = (2 x L) / s" << endl;
    cout << "\t   = (" << 2 * L << ") / " << s << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Tinggi (Jika diketahui Sisi dan Luas SEGITIGA SAMA SISI)

//Prosedur SubMenu Tinggi (Jika diketahui Sisi lain) SEGITIGA SAMA SISI
void tinggi_segitiga_samasisi_b(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> SEGITIGA SAMA SISI <<<                   |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Tinggi (t) (Jika diketahui Sisi lain)" << endl;
    cout << "\t ------------------------------------------------" << endl;
    cout << "\t Masukkan Sisi (s) yang diketahui : ";
    cin >> s;

    hasil = sqrt(pow(s,2) - pow((s/2),2)); //rumus tinggi segitiga sama kaki

    cout << "\t Hasil                            : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t 'Teorema Pythagoras':" << endl;
    cout << endl;
    cout << "\t t^2 = s^2 - (s/2)^2" << endl;
    cout << "\t  t  = Akar(s^2 - (s/2)^2)" << endl;
    cout << "\t     = Akar(" << s << "^2 - (" << s << "/2)^2)" << endl;
    cout << "\t     = Akar(" << pow(s,2) << " - " << s/2 << "^2)" << endl;
    cout << "\t     = Akar(" << pow(s,2) << " - " << pow((s/2),2) << ")" << endl;
    cout << "\t     = Akar(" << pow(s,2) - pow((s/2),2) << ")" << endl;
    cout << "\t     = " << hasil << endl;
    cout << endl;
    cout << "\t cara cepat:" << endl;
    cout << "\t t^2 = s^2 - (s/2)^2" << endl;
    cout << "\t  t  = Akar(s^2 - (s/2)^2)" << endl;
    cout << "\t     = Akar(s^2 - (s^2)/4)" << endl;
    cout << "\t     = Akar(3/4 x s^2)" << endl;
    cout << "\t  t  = s/2 x Akar(3)" << endl;   //cara cepat
    cout << "\t     = " << s << "/2 x Akar (3)" << endl;
    cout << "\t     = " << s/2 << " x " << sqrt(3) << endl;
    cout << "\t     = " << s/2 * sqrt(3) << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Tinggi (Jika diketahui Sisi lain) SEGITIGA SAMA SISI

///Prosedur Menu 6.JAJAR GENJANG
void jajargenjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> JAJAR GENJANG <<<                        |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Alas (Jika diketahui Tinggi dan Luas)                        |" << endl;
    cout << "\t| 4. Alas (Jika diketahui Sisi Miring dan Keliling)               |" << endl;
    cout << "\t| 5. Tinggi (Jika diketahui Alas dan Luas)                        |" << endl;
    cout << "\t| 6. Sisi Miring (Jika diketahui Alas dan Keliling)               |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 6.JAJAR GENJANG

//Prosedur SubMenu Luas JAJAR GENJANG
void luas_jajargenjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> JAJAR GENJANG <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Alas (a)   : ";
    cin >> a;
    cout << "\t Masukkan Tinggi (t) : ";
    cin >> t;

    hasil = a*t; //rumus luas jajar genjang

    cout << "\t Hasil               : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = a x t" << endl;
    cout << "\t   = " << a << " x " << t << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas JAJAR GENJANG

//Prosedur SubMenu Keliling JAJAR GENJANG
void keliling_jajargenjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> JAJAR GENJANG <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi a : ";
    cin >> a;
    cout << "\t Masukkan Sisi b : ";
    cin >> b;

    hasil = 2*(a+b); //rumus keliling jajar genjang

    cout << "\t Hasil           : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = AB + BC + CD + AD" << endl;
    cout << "\t atau" << endl;
    cout << "\t K = 2 x (a+b)" << endl;
    cout << "\t   = 2 x (" << a << " + " << b << ")" << endl;
    cout << "\t   = 2 x (" << a+b << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling JAJAR GENJANG

//Prosedur SubMenu Alas (Jika diketahui Tinggi dan Luas JAJAR GENJANG)
void alas_jajargenjang_a(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> JAJAR GENJANG <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Alas (a) (Jika diketahui Tinggi dan Luas)" << endl;
    cout << "\t ----------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)   : ";
    cin >> L;
    cout << "\t Masukkan Tinggi (t) : ";
    cin >> t;

    hasil = L/t; //rumus

    cout << "\t Hasil               : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = a x t" << endl;
    cout << "\t a = L / t" << endl;
    cout << "\t   = " << L << " / " << t << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Alas (Jika diketahui Tinggi dan Luas JAJAR GENJANG)

//Prosedur SubMenu Alas (Jika diketahui Sisi Miring dan Keliling JAJAR GENJANG)
void alas_jajargenjang_b(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> JAJAR GENJANG <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Alas (a) (Jika diketahui Sisi Miring dan Keliling)" << endl;
    cout << "\t -------------------------------------------------------------" << endl;
    cout << "\t Masukkan Sisi Miring (Sisi b) : ";
    cin >> b;
    cout << "\t Masukkan Keliling (K)         : ";
    cin >> K;

    hasil = (K/2)-b; //rumus

    cout << "\t Hasil                         : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = 2 x (a + b)" << endl;
    cout << "\t a = (K / 2) - b" << endl;
    cout << "\t   = (" << K << " / 2) - " << b << endl;
    cout << "\t   = (" << K/2 << ") - " << b << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Alas (Jika diketahui Sisi Miring dan Keliling JAJAR GENJANG)

//Prosedur SubMenu Tinggi (Jika diketahui Alas dan Luas JAJAR GENJANG)
void tinggi_jajargenjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> JAJAR GENJANG <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Tinggi (t) (Jika diketahui Alas dan Luas)" << endl;
    cout << "\t ----------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)      : ";
    cin >> L;
    cout << "\t Masukkan Alas (Sisi a) : ";
    cin >> a;

    hasil = L/a;   //rumus

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = a x t" << endl;
    cout << "\t t = L / a" << endl;
    cout << "\t   = " << L << " / " << a << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Tinggi (Jika diketahui Alas dan Luas JAJAR GENJANG)

//Prosedur SubMenu Sisi Miring (Jika diketahui Alas dan Keliling JAJAR GENJANG)
void sisimiring_jajargenjang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                    >>> JAJAR GENJANG <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi Miring (Sisi b) (Jika diketahui Alas dan Keliling)" << endl;
    cout << "\t ------------------------------------------------------------------" << endl;
    cout << "\t Masukkan Alas (Sisi a) : ";
    cin >> a;
    cout << "\t Masukkan Keliling (K)  : ";
    cin >> K;

    hasil = (K/2)-a;   //rumus

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = 2 x (a + b)" << endl;
    cout << "\t b = (K / 2) - a" << endl;
    cout << "\t   = (" << K << " / 2) - " << a << endl;
    cout << "\t   = (" << K/2 << ") - " << a << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi Miring (Jika diketahui Alas dan Keliling JAJAR GENJANG)

///Prosedur Menu 7.TRAPESIUM
void trapesium(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> TRAPESIUM <<<                        |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Sisi a (AB) (Jika diketahui Luas dan Tinggi)                 |" << endl;
    cout << "\t| 4. Sisi b (CD) (Jika diketahui Luas dan Tinggi)                 |" << endl;
    cout << "\t| 5. Tinggi (Jika diketahui Luas dan Sisi Sejajar)                |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 7.TRAPESIUM

//Prosedur SubMenu Luas TRAPESIUM
void luas_trapesium(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> TRAPESIUM <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Sisi a (AB) : ";
    cin >> a;
    cout << "\t Masukkan Sisi b (CD) : ";
    cin >> b;
    cout << "\t Masukkan Tinggi (t)  : ";
    cin >> t;

    hasil = (a+b)/2 * t; //rumus luas trapesium

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x (AB + CD) x t" << endl;
    cout << "\t   = 1/2 x (a + b) x t" << endl;
    cout << "\t   = 1/2 x (" << a << " + " << b << ") x " << t << endl;
    cout << "\t   = 1/2 x (" << a+b << ") x " << t << endl;
    cout << "\t   = " << 1/2*(a+b) << " x " << t << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas TRAPESIUM

//Prosedur SubMenu Keliling TRAPESIUM
void keliling_trapesium(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> TRAPESIUM <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi AB : ";
    cin >> AB;
    cout << "\t Masukkan Sisi BC : ";
    cin >> BC;
    cout << "\t Masukkan Sisi CD : ";
    cin >> CD;
    cout << "\t Masukkan Sisi AD : ";
    cin >> AD;

    hasil = AB+BC+CD+AD; //rumus keliling trapesium

    cout << "\t Hasil            : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = AB + BC + CD + AD" << endl;
    cout << "\t   = " << AB << " + " << BC << " + " << CD << " + " << AD << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling TRAPESIUM

//Prosedur SubMenu Sisi a (AB) (Jika diketahui Luas dan Tinggi TRAPESIUM)
void sisi_a_trapesium(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> TRAPESIUM <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi a (AB) (Jika diketahui Luas dan Tinggi)" << endl;
    cout << "\t -------------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)    : ";
    cin >> L;
    cout << "\t Masukkan Tinggi (t)  : ";
    cin >> t;
    cout << "\t Masukkan Sisi b (CD) : ";
    cin >> b;

    hasil = (2*L/t)-b; //rumus

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x (AB + CD) x t" << endl;
    cout << "\t   = 1/2 x (a + b) x t" << endl;
    cout << "\t a = (2 x L / t) - b" << endl;
    cout << "\t   = (2 x " << L << " / " << t << ") - " << b << endl;
    cout << "\t   = (" << 2*L << " / " << t << ") - " << b << endl;
    cout << "\t   = (" << 2*L/t << ") - " << b << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi a (AB) (Jika diketahui Luas dan Tinggi TRAPESIUM)

//Prosedur SubMenu Sisi b (CD) (Jika diketahui Luas dan Tinggi TRAPESIUM)
void sisi_b_trapesium(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> TRAPESIUM <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi b (CD) (Jika diketahui Luas dan Tinggi)" << endl;
    cout << "\t -------------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)    : ";
    cin >> L;
    cout << "\t Masukkan Tinggi (t)  : ";
    cin >> t;
    cout << "\t Masukkan Sisi a (AB) : ";
    cin >> a;

    hasil = (2*L/t)-a; //rumus

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x (AB + CD) x t" << endl;
    cout << "\t   = 1/2 x (a + b) x t" << endl;
    cout << "\t b = (2 x L / t) - a" << endl;
    cout << "\t   = (2 x " << L << " / " << t << ") - " << a << endl;
    cout << "\t   = (" << 2*L << " / " << t << ") - " << a << endl;
    cout << "\t   = (" << 2*L/t << ") - " << a << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi b (CD) (Jika diketahui Luas dan Tinggi TRAPESIUM)

//Prosedur SubMenu Tinggi (Jika diketahui Luas dan Sisi Sejajar TRAPESIUM)
void tinggi_trapesium(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> TRAPESIUM <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Tinggi (t) (Jika diketahui Luas dan Sisi Sejajar)" << endl;
    cout << "\t ------------------------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)      : ";
    cin >> L;
    cout << "\t Masukkan Alas (Sisi a) : ";
    cin >> a;
    cout << "\t Masukkan Alas (Sisi b) : ";
    cin >> b;

    hasil = 2*L/(a+b);   //rumus

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x (AB + CD) x t" << endl;
    cout << "\t   = 1/2 x (a + b) x t" << endl;
    cout << "\t t = 2 x L / (a + b)" << endl;
    cout << "\t   = 2 x " << L << " / (" << a << " + " << b << ")" << endl;
    cout << "\t   = " << 2*L << " / " << a+b << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Tinggi (Jika diketahui Luas dan Sisi Sejajar TRAPESIUM)

///Prosedur Menu 8.LAYANG-LAYANG
void layanglayang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> LAYANG-LAYANG <<<                      |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Diagonal 1 (Jika diketahui Luas)                             |" << endl;
    cout << "\t| 4. Diagonal 2 (Jika diketahui Luas)                             |" << endl;
    cout << "\t| 5. Sisi a atau b (Jika diketahui Keliling)                      |" << endl;
    cout << "\t| 6. Sisi c atau d (Jika diketahui Keliling)                      |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 8.LAYANG-LAYANG

//Prosedur SubMenu Luas LAYANG-LAYANG
void luas_layanglayang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> LAYANG-LAYANG <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Diagonal 1 (d1) : ";
    cin >> x;
    cout << "\t Masukkan Diagonal 2 (d2) : ";
    cin >> y;

    hasil = 0.5*x*y; //rumus luas layang-layang

    cout << "\t Hasil                    : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x d1 x d2" << endl;
    cout << "\t   = 1/2 x AC x BD" << endl;
    cout << "\t   = 1/2 x " << x << " x " << y << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas LAYANG-LAYANG

//Prosedur SubMenu Keliling LAYANG-LAYANG
void keliling_layanglayang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> LAYANG-LAYANG <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi a (AD) : ";
    cin >> a;
    cout << "\t Masukkan Sisi c (BC) : ";
    cin >> c;

    hasil = 2*(a+c); //rumus keliling layang-layang

    cout << "\t Hasil                : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t karena a = b dan c = d, sehingga:" << endl;
    cout << "\t K = AB + BC + CD + AD" << endl;
    cout << "\t   = a + b + c + d" << endl;
    cout << "\t   = 2 x (a + c)" << endl;
    cout << "\t   = 2 x (" << a << " + " << c << ")" << endl;
    cout << "\t   = 2 x (" << a+c << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling LAYANG-LAYANG

//Prosedur SubMenu Diagonal 1 (Jika diketahui Luas LAYANG-LAYANG)
void diagonal_a_layanglayang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> LAYANG-LAYANG <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Diagonal 1 (d1) atau Sisi AC" << endl;
    cout << "\t ---------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)                     : ";
    cin >> L;
    cout << "\t Masukkan Diagonal 2 (d2) atau Sisi BD : ";
    cin >> y;

    hasil = 2*L/y; //rumus

    cout << "\t Hasil                                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t d1 = 2 x L / d2" << endl;
    cout << "\t AC = 2 x L / BD" << endl;
    cout << "\t    = 2 x " << L << " / " << y << endl;
    cout << "\t    = 2 x " << L/y << endl;
    cout << "\t    = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Diagonal 1 (Jika diketahui Luas LAYANG-LAYANG)

//Prosedur SubMenu Diagonal 2 (Jika diketahui Luas LAYANG-LAYANG)
void diagonal_b_layanglayang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> LAYANG-LAYANG <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Diagonal 2 (d1) atau Sisi BD" << endl;
    cout << "\t ---------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)                     : ";
    cin >> L;
    cout << "\t Masukkan Diagonal 1 (d1) atau Sisi AC : ";
    cin >> x;

    hasil = 2*L/x; //rumus

    cout << "\t Hasil                                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t d2 = 2 x L / d1" << endl;
    cout << "\t BD = 2 x L / AC" << endl;
    cout << "\t    = 2 x " << L << " / " << x << endl;
    cout << "\t    = 2 x " << L/x << endl;
    cout << "\t    = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Diagonal 2 (Jika diketahui Luas LAYANG-LAYANG)

//Prosedur SubMenu Sisi a atau b (Jika diketahui Keliling LAYANG-LAYANG)
void sisi_a_layanglayang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> LAYANG-LAYANG <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi a (AD) atau b (DC)" << endl;
    cout << "\t ----------------------------------" << endl;
    cout << "\t Masukkan Keliling (K) : ";
    cin >> K;
    cout << "\t Masukkan Sisi c (BC)  : ";
    cin >> c;

    hasil = (0.5*K)-c;   //rumus

    cout << "\t Hasil                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t AD = DC = (1/2 x K) - BC" << endl;
    cout << "\t  a = b  = (1/2 x K) - c" << endl;
    cout << "\t         = (1/2 x " << K << ") - " << c << endl;
    cout << "\t         = (" << 0.5*K << ") - " << c << endl;
    cout << "\t         = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi a atau b (Jika diketahui Keliling LAYANG-LAYANG)

//Prosedur SubMenu Sisi c atau d (Jika diketahui Keliling LAYANG-LAYANG)
void sisi_c_layanglayang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> LAYANG-LAYANG <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi c (BC) atau d (AB)" << endl;
    cout << "\t ----------------------------------" << endl;
    cout << "\t Masukkan Keliling (K) : ";
    cin >> K;
    cout << "\t Masukkan Sisi a (AD)  : ";
    cin >> a;

    hasil = (0.5*K)-a;   //rumus

    cout << "\t Hasil                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t BC = AB = (1/2 x K) - AD" << endl;
    cout << "\t  c = d  = (1/2 x K) - a" << endl;
    cout << "\t         = (1/2 x " << K << ") - " << a << endl;
    cout << "\t         = (" << 0.5*K << ") - " << a << endl;
    cout << "\t         = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi c atau d (Jika diketahui Keliling LAYANG-LAYANG)

///Prosedur Menu 9.BELAH KETUPAT
void belahketupat(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> BELAH KETUPAT <<<                      |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Diagonal 1 (Jika diketahui Luas)                             |" << endl;
    cout << "\t| 4. Diagonal 2 (Jika diketahui Luas)                             |" << endl;
    cout << "\t| 5. Sisi (Jika diketahui Keliling)                               |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 9.BELAH KETUPAT

//Prosedur SubMenu Luas BELAH KETUPAT
void luas_belahketupat(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> BELAH KETUPAT <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Diagonal 1 (d1) : ";
    cin >> x;
    cout << "\t Masukkan Diagonal 2 (d2) : ";
    cin >> y;

    hasil = 0.5*x*y; //rumus luas layang-layang

    cout << "\t Hasil                    : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = 1/2 x d1 x d2" << endl;
    cout << "\t   = 1/2 x AC x BD" << endl;
    cout << "\t   = 1/2 x " << x << " x " << y << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas BELAH KETUPAT

//Prosedur SubMenu Keliling BELAH KETUPAT
void keliling_belahketupat(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> BELAH KETUPAT <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Sisi (s) : ";
    cin >> s;

    hasil = 4*s; //rumus keliling belah ketupat

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = s + s + s + s" << endl;
    cout << "\t   = 4 x s" << endl;
    cout << "\t   = 4 x " << s << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling BELAH KETUPAT

//Prosedur SubMenu Diagonal 1 (Jika diketahui Luas BELAH KETUPAT)
void diagonal_a_belahketupat(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> BELAH KETUPAT <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Diagonal 1 (d1) atau Sisi AC" << endl;
    cout << "\t ---------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)                     : ";
    cin >> L;
    cout << "\t Masukkan Diagonal 2 (d2) atau Sisi BD : ";
    cin >> y;

    hasil = 2*L/y; //rumus

    cout << "\t Hasil                                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t d1 = 2 x L / d2" << endl;
    cout << "\t AC = 2 x L / BD" << endl;
    cout << "\t    = 2 x " << L << " / " << y << endl;
    cout << "\t    = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Diagonal 1 (Jika diketahui Luas BELAH KETUPAT)

//Prosedur SubMenu Diagonal 2 (Jika diketahui Luas BELAH KETUPAT)
void diagonal_b_belahketupat(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> BELAH KETUPAT <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Diagonal 2 (d1) atau Sisi BD" << endl;
    cout << "\t ---------------------------------------" << endl;
    cout << "\t Masukkan Luas (L)                     : ";
    cin >> L;
    cout << "\t Masukkan Diagonal 1 (d1) atau Sisi AC : ";
    cin >> x;

    hasil = 2*L/x; //rumus

    cout << "\t Hasil                                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t d2 = 2 x L / d1" << endl;
    cout << "\t BD = 2 x L / AC" << endl;
    cout << "\t    = 2 x " << L << " / " << x << endl;
    cout << "\t    = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Diagonal 2 (Jika diketahui Luas BELAH KETUPAT)

//Prosedur SubMenu Sisi (Jika diketahui Keliling BELAH KETUPAT)
void sisi_belahketupat(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                      >>> BELAH KETUPAT <<<                      |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Sisi (Jika diketahui Keliling)" << endl;
    cout << "\t -----------------------------------------" << endl;
    cout << "\t Masukkan Keliling (K) : ";
    cin >> K;

    hasil = K/4;   //rumus

    cout << "\t Hasil                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = s + s + s + s" << endl;
    cout << "\t   = 4 x s" << endl;
    cout << "\t s = K / 4" << endl;
    cout << "\t   = " << K << " / 4" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Sisi (Jika diketahui Keliling BELAH KETUPAT)

///Prosedur Menu 10.LINGKARAN
void lingkaran(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> LINGKARAN <<<                        |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t| Menghitung:                                                     |" << endl;
    cout << "\t| 1. Luas                                                         |" << endl;
    cout << "\t| 2. Keliling                                                     |" << endl;
    cout << "\t| 3. Jari-jari (Jika diketahui Luas)                              |" << endl;
    cout << "\t| 4. Jari-jari (Jika diketahui Keliling)                          |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 88.KEMBALI                                                      |" << endl;
    cout << "\t| 99.KE MENU UTAMA                                                |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur Menu 10.LINGKARAN

//Prosedur SubMenu Luas LINGKARAN
void luas_lingkaran(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> LINGKARAN <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Luas (L)" << endl;
    cout << "\t -------------------" << endl;
    cout << "\t Masukkan Jari-jari (r) : ";
    cin >> r;

    hasil = phi*pow(r,2); //rumus luas lingkaran

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = phi x r^2" << endl;
    cout << "\t   = phi x r x r" << endl;
    cout << "\t   = 3,14 x " << r << " x " << r << endl;
    cout << "\t   = 3,14 x " << pow(r,2) << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Luas LINGKARAN

//Prosedur SubMenu Keliling LINGKARAN
void keliling_lingkaran(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> LINGKARAN <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Keliling (K)" << endl;
    cout << "\t -----------------------" << endl;
    cout << "\t Masukkan Jari-jari (r) : ";
    cin >> r;

    hasil = phi*(2*r); //rumus keliling lingkaran

    cout << "\t Hasil                  : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = phi x d" << endl;
    cout << "\t   = phi x 2 x r" << endl;
    cout << "\t   = 3,14 x 2 x " << r << endl;
    cout << "\t   = 3,14 x " << 2*r << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Keliling LINGKARAN

//Prosedur SubMenu Jari-jari (Jika diketahui Luas LINGKARAN)
void jarijari_lingkaran_a(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> LINGKARAN <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Jari-jari (r) (Jika diketahui Luas)" << endl;
    cout << "\t ----------------------------------------------" << endl;
    cout << "\t Masukkan Luas (L) : ";
    cin >> L;

    hasil = sqrt(L/phi); //rumus

    cout << "\t Hasil             : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t L = phi x r^2" << endl;
    cout << "\t r = Akar(L / phi)" << endl;
    cout << "\t   = Akar(" << L << " / " << phi << ")" << endl;
    cout << "\t   = Akar(" << L/phi << ")" << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Jari-jari (Jika diketahui Luas LINGKARAN)

//Prosedur SubMenu Jari-jari (Jika diketahui Keliling)
void jarijari_lingkaran_b(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                        >>> LINGKARAN <<<                        |" << endl;
    cout << "\t ================================================================= " << endl;
    cout << "\t Menghitung Jari-jari (r) (Jika diketahui Keliling)" << endl;
    cout << "\t --------------------------------------------------" << endl;
    cout << "\t Masukkan Keliling (K) : ";
    cin >> L;

    hasil = K/2*phi; //rumus

    cout << "\t Hasil                 : " << hasil << endl;
    cout << endl;
    cout << "\t >>>" << endl;
    cout << "\t Cara Penyelesaian" << endl;
    cout << "\t K = phi x 2 x r" << endl;
    cout << "\t r = K / 2 x phi" << endl;
    cout << "\t   = " << K << " / 2 x " << phi << endl;
    cout << "\t   = " << K << " / " << 2*phi << endl;
    cout << "\t   = " << hasil << endl;
    cout << "\t _________________________________________________________________ " << endl;
    cout << endl;

}//end of Prosedur SubMenu Jari-jari (Jika diketahui Keliling)

///Prosedur MainMenu 2.TABEL RUMUS BANGUN DATAR
void tabel_rumus(){

    cout << "\t ___________________________________________________________________________  " << endl;
    cout << "\t|                                                                           | " << endl;
    cout << "\t|                       TABEL RUMUS-RUMUS BANGUN DATAR                      | " << endl;
    cout << "\t|===========================================================================| " << endl;
    cout << "\t| No.| Nama Bangun Datar  |     Mencari     |             Rumus             | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 1. | PERSEGI            | Luas (L)        | L = s.s = s^2                 | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = s+s+s+s = 4.s             | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi (s)        | s = Akar(L)                   | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | s = K/4                       | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Diagonal (d)    | d = Akar(2.s.s) = Akar(2.s^2) | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 2. | PERSEGI PANJANG    | Luas (L)        | L = p.l                       | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = 2(p+l) = 2p+2l            | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Panjang (p)     | p = L/l                       | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | p = (K-2l)/2                  | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | lebar (l)       | l = L/p                       | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | l = (K-2p)/2                  | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Diagonal (d)    | d = Akar(p^2 + l^2)           | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 3. | SEGITIGA SIKU-SIKU | Luas (L)        | L = 1/2.a.t                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = AB+BC+AC = a+b+c          | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Alas (a)        | a = 2.L/t                     | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Tinggi (t)      | t = 2.L/a                     | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Pythagoras:     | c^2 = a^2 + b^2               | " << endl;
    cout << "\t|    |                    |                 |                               | " << endl;
    cout << "\t|    |                    | Sisi alas (a)   | a = Akar(c^2 - b^2)           | " << endl;
    cout << "\t|    |                    |                 |                               | " << endl;
    cout << "\t|    |                    | Sisi tinggi (b) | b = Akar(c^2 - a^2)           | " << endl;
    cout << "\t|    |                    |                 |                               | " << endl;
    cout << "\t|    |                    | Sisi miring (c) | c = Akar(a^2 + b^2)           | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 4. | SEGITIGA SAMA KAKI | Luas (L)        | L = Akar(S(S-a)(S-b)(S-c))    | " << endl;
    cout << "\t|    |                    |                 | dengan S = 1/2(a+b+c)         | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = AB+BC+AC = a+b+c          | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Alas (sisi b)   | b  = 2 . Akar(c^2 - t^2)      | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Tinggi (t)      | t  = Akar(c^2 - (b/2)^2)      | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi miring     | karena sisi a = c,            | " << endl;
    cout << "\t|    |                    | (sisi a atau c) | a = c = Akar(t^2 + (b/2)^2)   | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 5. | SEGITIGA SAMA SISI | Luas (L)        | L = Akar(S(S-s)^3)            | " << endl;
    cout << "\t|    |                    |                 | dengan S = 1/2(3.s)           | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | L = 1/4(s^2).Akar(3)          | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = s+s+s = 3.s               | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi (s)        | s = Akar(1/3(4.L.Akar(3)))    | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Tinggi (t)      | t = Akar(s^2 - (s/2)^2)       | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | t = s/2 . Akar(3)             | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | t = 2.L/s                     | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 6. | JAJAR GENJANG      | Luas (L)        | L = a.t                       | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = AB+BC+CD+AD               | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | K = 2(a+b)                    | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Alas (a)        | a = L/t                       | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | a = (K/2)-b                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Tinggi (t)      | t = L/a                       | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi miring     | b = (K/2)-a                   | " << endl;
    cout << "\t|    |                    | (sisi b)        |                               | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 7. | TRAPESIUM          | Luas (L)        | L = 1/2(AB+CD).t              | " << endl;
    cout << "\t|    |                    |                 | L = 1/2(a+b).t                | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = AB + BC + CD + AD         | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi a (AB)     | a = (2.L/t)-b                 | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi b (CD)     | b = (2.L/t)-a                 | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Tinggi (t)      | t = 2.L/(a+b)                 | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 8. | LAYANG-LAYANG      | Luas (L)        | L = 1/2.d1.d2                 | " << endl;
    cout << "\t|    |                    |                 | L = 1/2.AC.BD                 | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = AD+DC+CB+BA = a+b+c+d     | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Diagonal 1 (d1) | d1 = 2.L/d2                   | " << endl;
    cout << "\t|    |                    | (sisi AC)       | AC = 2.L/BD                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Diagonal 2 (d2) | d2 = 2.L/d1                   | " << endl;
    cout << "\t|    |                    | (sisi BD)       | BD = 2.L/AC                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi a atau b   | a = b = (1/2.K)-c             | " << endl;
    cout << "\t|    |                    | (AD) atau (DC)  | AD = DC = (1/2.K)-CB          | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 9. | BELAH KETUPAT      | Luas (L)        | L = 1/2.d1.d2                 | " << endl;
    cout << "\t|    |                    |                 | L = 1/2.AC.BD                 | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = s+s+s+s = 4.s             | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Diagonal 1 (d1) | d1 = 2.L/d2                   | " << endl;
    cout << "\t|    |                    | (sisi AC)       | AC = 2.L/BD                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Diagonal 2 (d2) | d2 = 2.L/d1                   | " << endl;
    cout << "\t|    |                    | (sisi BD)       | BD = 2.L/AC                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Sisi (s)        | s = K/4                       | " << endl;
    cout << "\t|====|====================|=================|===============================| " << endl;
    cout << "\t| 10.| LINGKARAN          | Luas (L)        | L = phi.r.r = phi.r^2         | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Keliling (K)    | K = phi.d                     | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | K = phi.2.r                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Jari-jari (r)   | r = 1/2.d                     | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | r = Akar(L/phi)               | " << endl;
    cout << "\t|    |                    |                 |-------------------------------| " << endl;
    cout << "\t|    |                    |                 | r = K/2.phi                   | " << endl;
    cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
    cout << "\t|    |                    | Diameter (d)    | d = 2.r                       | " << endl;
    cout << "\t ===========================================================================  " << endl;
    cout << endl;

}//end of Prosedur MainMenu 2.TABEL RUMUS BANGUN DATAR

///Prosedur MainMenu 4.TENTANG
void tentang(){

    cout << "\t _________________________________________________________________ " << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         >>> TENTANG <<<                         |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t|                PROGRAM 'KALKULATOR BANGUN DATAR'                |" << endl;
    cout << "\t|                 Berbasis Bahasa Pemrograman C++                 |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                              oleh:                              |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                         Tim (KELOMPOK 2)                        |" << endl;
    cout << "\t|                         ----------------                        |" << endl;
    cout << "\t|                    YUSI RAHMAWATI (19102298)                    |" << endl;
    cout << "\t|                MUHAMMAD FAUZAN YASYKUR (20102041)               |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|                 Program Studi Teknik Informatika                |" << endl;
    cout << "\t|                       Fakultas Informatika                      |" << endl;
    cout << "\t|               INSTITUT TEKNOLOGI TELKOM PURWOKERTO              |" << endl;
    cout << "\t|                            2020/2021                            |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|            diberdayakan dengan aplikasi Code::Blocks            |" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t|=================================================================|" << endl;
    cout << "\t|                                                                 |" << endl;
    cout << "\t| 99.KEMBALI KE MENU UTAMA                                        |" << endl;
    cout << "\t| 00.KELUAR                                                       |" << endl;
    cout << "\t|_________________________________________________________________|" << endl;
    cout << endl;

}//end of Prosedur MainMenu 4.TENTANG


//
///PROGRAM UTAMA
int main()
{
    system ("color 1F");  //warna tema (background biru teks putih)

    //Deklarasi
    string menu0, menu1, menu1_1, menu1_2, menu1_3, menu1_4, menu1_5, menu1_6, menu1_7, menu1_8, menu1_9, menu1_10;

    ///Menu Utama
    Menu0:

    menu_utama(); //memanggil Prosedur Menu Utama

    cout << "\t >> Pilih Menu : ";  //input user (angka)
    cin >> menu0;
    cout << endl;
    system ("cls"); //membersihkan layar

    //Algoritma

    ///MainMenu 1.KALKULATOR BANGUN DATAR
    Menu1:
    if (menu0=="1"){

        kalkulator_bangun_datar();

        cout << "\t >> Pilih Menu : ";  //input user (angka)
        cin >> menu1;
        cout << endl;
        system ("cls");

        //Menu 1.PERSEGI
        Menu1_1:
        if (menu1=="1"){

            persegi();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_1;
            cout << endl;
            system ("cls");

            Menu1_1_1:
            //SubMenu Luas PERSEGI
            if (menu1_1=="1"){

                luas_persegi();
            }
            //SubMenu Keliling PERSEGI
            else if (menu1_1=="2"){

                keliling_persegi();

            }
            //SubMenu Panjang Sisi (Jika diketahui Luas PERSEGI)
            else if (menu1_1=="3"){

                sisi_persegi_a();

            }
            //SubMenu Panjang Sisi (Jika diketahui Keliling PERSEGI)
            else if (menu1_1=="4"){

                sisi_persegi_b();

            }
            //SubMenu Panjang Diagonal PERSEGI
            else if (menu1_1=="5"){

                diagonal_persegi();

            }

            else if (menu1_1=="88"){
                goto Menu1; //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_1=="99"){
                goto Menu0; //kembali ke menu utama
            }

            else if (menu1_1=="00"){
                Keluar:
                cout << endl;
                cout << "\t Apakah Anda ingin menutup program? <y/t> : ";
                cin >> keluar;
                cout << endl;
                system ("cls");
                if(keluar=="y"){
                    exit(0);              //keluar program
                } else if (keluar=="t"){
                    goto Menu1_1;         //kembali ke menu Persegi
                } else goto Keluar;       //mengulang konfirmasi
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_1;   //kembali ke menu Persegi
            }//end of if-else Menu1_1_1 (menghitung persegi)

            //SuperSubMenu Konfirmasi
            Konfirm1:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_1_1;         //menghitung ulang (luas-keliling persegi)
            } else if (pilihan=="88"){
                goto Menu1_1;           //kembali ke menu Persegi
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm1;   //mengulang konfirmasi
            }//end of if-else menu Konfirm1

        } //end of if-else (Menu 1.PERSEGI)

        //Menu 2.PERSEGI PANJANG
        Menu1_2:
        if (menu1=="2"){

            persegipanjang();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_2;
            cout << endl;
            system ("cls");

            Menu1_2_1:
            //SubMenu Luas PERSEGI PANJANG
            if (menu1_2=="1"){

                luas_persegipanjang();

            }
            //SubMenu Keliling PERSEGI PANJANG
            else if (menu1_2=="2"){

                keliling_persegipanjang();

            }
            //SubMenu Panjang Sisi (Jika diketahui Lebar dan Luas PERSEGI PANJANG)
            else if (menu1_2=="3"){

                panjang_persegipanjang_a();

            }
            //SubMenu Panjang Sisi (Jika diketahui Lebar dan Keliling PERSEGI PANJANG)
            else if (menu1_2=="4"){

                panjang_persegipanjang_b();

            }
            //SubMenu Lebar Sisi (Jika diketahui Panjang dan Luas PERSEGI PANJANG)
            else if (menu1_2=="5"){

                lebar_persegipanjang_a();

            }
            //SubMenu Lebar Sisi (Jika diketahui Panjang dan Keliling PERSEGI PANJANG)
            else if (menu1_2=="6"){

                lebar_persegipanjang_b();

            }
             //SubMenu Diagonal PERSEGI PANJANG
            else if (menu1_2=="7"){

                diagonal_persegipanjang();

            }

            else if (menu1_2=="88"){
                goto Menu1; //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_2=="99"){
                goto Menu0; //kembali ke menu utama
            }

            else if (menu1_2=="00"){
                goto Keluar; //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_2;   //kembali ke menu Persegi Panjang
            }//end of if-else Menu1_2_1 (menghitung persegi panjang)

            //SuperSubMenu Konfirmasi
            Konfirm2:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_2_1;         //menghitung ulang (luas-keliling persegi panjang)
            } else if (pilihan=="88"){
                goto Menu1_2;           //kembali ke menu Persegi Panjang
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm2;   //mengulang konfirmasi
            }//end of if-else menu Konfirm2

        } //end of if-else (Menu 2.PERSEGI PANJANG)

        //Menu 3.SEGITIGA SIKU-SIKU
        Menu1_3:
        if (menu1=="3"){

            segitiga_sikusiku();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_3;
            cout << endl;
            system ("cls");

            //SubMenu Luas SEGITIGA SIKU-SIKU
            Menu1_3_1:
            if (menu1_3=="1"){

                luas_segitiga_sikusiku();

            }
            //SubMenu Keliling SEGITIGA SIKU-SIKU
            else if (menu1_3=="2"){

                keliling_segitiga_sikusiku();

            }
            //SubMenu Alas (Jika diketahui Tinggi dan Luas SEGITIGA SIKU-SIKU)
            else if (menu1_3=="3"){

                alas_segitiga_sikusiku();

            }
            //SubMenu Tinggi (Jika diketahui Alas dan Luas SEGITIGA SIKU-SIKU)
            else if (menu1_3=="4"){

                tinggi_segitiga_sikusiku();

            }
            //SubMenu Alas (Sisi a) SEGITIGA SIKU-SIKU
            else if (menu1_3=="5"){

                pythagoras_a();

            }
            //SubMenu Tinggi (Sisi b) SEGITIGA SIKU-SIKU
            else if (menu1_3=="6"){

                pythagoras_b();

            }
            //SubMenu Sisi Miring (Sisi c) SEGITIGA SIKU-SIKU
            else if (menu1_3=="7"){

                pythagoras_c();

            }

            else if (menu1_3=="88"){
                goto Menu1;  //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_3=="99"){
                goto Menu0;   //kembali ke menu utama
            }

            else if (menu1_3=="00"){
                goto Keluar;  //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_3;   //kembali ke menu segitiga siku-siku
            }//end of if-else Menu1_3_1 (menghitung segitiga siku-siku)

            //SuperSubMenu Konfirmasi
            Konfirm3:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_3_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
            } else if (pilihan=="88"){
                goto Menu1_3;           //kembali ke menu Segitiga Siku-sku
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm3;   //mengulang konfirmasi
            }
        } //end of if-else (Menu 3.SEGITIGA SIKU-SIKU)

        //Menu 4.SEGITIGA SAMA KAKI
        Menu1_4:
        if (menu1=="4"){

            segitiga_samakaki();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_4;
            cout << endl;
            system ("cls");

            Menu1_4_1:
            //SubMenu Luas SEGITIGA SAMA KAKI
            if (menu1_4=="1"){

                luas_segitiga_samakaki();

            }
            //SubMenu Keliling SEGITIGA SAMA KAKI
            else if (menu1_4=="2"){

                keliling_segitiga_samakaki();

            }
            //SubMenu Alas SEGITIGA SAMA KAKI
            else if (menu1_4=="3"){

                alas_segitiga_samakaki();

            }
            //SubMenu Tinggi SEGITIGA SAMA KAKI
            else if (menu1_4=="4"){

                tinggi_segitiga_samakaki();

            }
            //SubMenu Sisi Miring SEGITIGA SAMA KAKI
            else if (menu1_4=="5"){

                sisimiring_segitiga_samakaki();

            }

            else if (menu1_4=="88"){
                goto Menu1;     //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_4=="99"){
                goto Menu0;     //kembali ke menu utama
            }

            else if (menu1_4=="00"){
                goto Keluar;    //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_4;   //kembali ke menu segitiga sama kaki
            }//end of if-else Menu1_4_1 (menghitung segitiga sama kaki)

            //SuperSubMenu Konfirmasi
            Konfirm4:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_4_1;         //menghitung ulang (luas-keliling segitiga sama kaki)
            } else if (pilihan=="88"){
                goto Menu1_4;           //kembali ke menu Segitiga Sama Kaki
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm4;   //mengulang konfirmasi
            }
        } //end of if-else (Menu 4.SEGITIGA SAMA KAKI)

        //Menu 5.SEGITIGA SAMA SISI
        Menu1_5:
        if (menu1=="5"){

            segitiga_samasisi();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_5;
            cout << endl;
            system ("cls");

            //SubMenu Luas SEGITIGA SAMA SISI
            Menu1_5_1:
            if (menu1_5=="1"){

                luas_segitiga_samasisi();

            }
            //SubMenu Keliling SEGITIGA SAMA SISI
            else if (menu1_5=="2"){

                keliling_segitiga_samasisi();

            }
            //SubMenu Panjang Sisi (Jika diketahui Luas SEGITIGA SAMA SISI)
            else if (menu1_5=="3"){

                sisi_segitiga_samasisi();

            }
            //SubMenu Tinggi (Jika diketahui Sisi dan Luas SEGITIGA SAMA SISI)
            else if (menu1_5=="4"){

                tinggi_segitiga_samasisi_a();

            }
            //SubMenu Tinggi (Jika diketahui Sisi lain) SEGITIGA SAMA SISI
            else if (menu1_5=="5"){

                tinggi_segitiga_samasisi_b();

            }

            else if (menu1_5=="88"){
                goto Menu1;     //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_5=="99"){
                goto Menu0;      //kembali ke menu utama
            }

            else if (menu1_5=="00"){
                goto Keluar;    //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_1;   //kembali ke menu Segitiga Sama Sisi
            }//end of if-else Menu1_1_1 (menghitung segitiga sama sisi)

            //SuperSubMenu Konfirmasi
            Konfirm5:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_5_1;         //menghitung ulang (luas-keliling segitiga sama sisi)
            } else if (pilihan=="88"){
                goto Menu1_5;           //kembali ke menu Segitiga Sama Sisi
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm5;   //mengulang konfirmasi
            }//end of if-else menu Konfirm5

        } //end of if-else (Menu 5.SEGITIGA SAMA SISI)

        //Menu 6.JAJAR GENJANG
        Menu1_6:
        if (menu1=="6"){

            jajargenjang();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_6;
            cout << endl;
            system ("cls");

            //SubMenu Luas JAJAR GENJANG
            Menu1_6_1:
            if (menu1_6=="1"){

                luas_jajargenjang();

            }
            //SubMenu Keliling JAJAR GENJANG
            else if (menu1_6=="2"){

                keliling_jajargenjang();

            }
            //SubMenu Alas (Jika diketahui Tinggi dan Luas JAJAR GENJANG)
            else if (menu1_6=="3"){

                alas_jajargenjang_a();

            }
            //SubMenu Alas (Jika diketahui Sisi Miring dan Keliling JAJAR GENJANG)
            else if (menu1_6=="4"){

                alas_jajargenjang_b();

            }
            //SubMenu Tinggi (Jika diketahui Alas dan Luas JAJAR GENJANG)
            else if (menu1_6=="5"){

                tinggi_jajargenjang();

            }
            //SubMenu Sisi Miring (Jika diketahui Alas dan Keliling JAJAR GENJANG)
            else if (menu1_6=="6"){

                sisimiring_jajargenjang();

            }

            else if (menu1_6=="88"){
                goto Menu1;  //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_6=="99"){
                goto Menu0;   //kembali ke menu utama
            }

            else if (menu1_6=="00"){
                goto Keluar;  //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_6;   //kembali ke menu Jajar Genjang
            }//end of if-else Menu1_6_1 (menghitung Jajar Genjang)

            //SuperSubMenu Konfirmasi
            Konfirm6:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_6_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
            } else if (pilihan=="88"){
                goto Menu1_6;           //kembali ke menu Segitiga Siku-sku
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm6;   //mengulang konfirmasi
            }//end of if-else SuperSubMenu Konfirmasi
        } //end of if-else (Menu 6.JAJAR GENJANG)

        //Menu 7.TRAPESIUM
        Menu1_7:
        if (menu1=="7"){

            trapesium();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_7;
            cout << endl;
            system ("cls");

            //SubMenu Luas TRAPESIUM
            Menu1_7_1:
            if (menu1_7=="1"){

                luas_trapesium();

            }
            //SubMenu Keliling TRAPESIUM
            else if (menu1_7=="2"){

                keliling_trapesium();

            }
            //SubMenu Sisi a (AB) (Jika diketahui Luas dan Tinggi TRAPESIUM)
            else if (menu1_7=="3"){

                sisi_a_trapesium();

            }
            //SubMenu Sisi b (CD) (Jika diketahui Luas dan Tinggi TRAPESIUM)
            else if (menu1_7=="4"){

                sisi_b_trapesium();

                }
            //SubMenu Tinggi (Jika diketahui Luas dan Sisi Sejajar TRAPESIUM)
            else if (menu1_7=="5"){

                tinggi_trapesium();

            }
            else if (menu1_7=="88"){
                goto Menu1;  //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_7=="99"){
                goto Menu0;   //kembali ke menu utama
            }

            else if (menu1_7=="00"){
                goto Keluar;  //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_7;   //kembali ke menu Trapesium
            }//end of if-else Menu1_7_1 (menghitung Trapesium)

            //SuperSubMenu Konfirmasi
            Konfirm7:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_7_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
            } else if (pilihan=="88"){
                goto Menu1_7;           //kembali ke menu Segitiga Siku-sku
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm7;   //mengulang konfirmasi
            }//end of if-else menu Konfirm7

        } //end of if-else (Menu 7.TRAPESIUM)

        //Menu 8.LAYANG-LAYANG
        Menu1_8:
        if (menu1=="8"){

            layanglayang();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_8;
            cout << endl;
            system ("cls");

            //SubMenu Luas LAYANG-LAYANG
            Menu1_8_1:
            if (menu1_8=="1"){

                luas_layanglayang();

            }
            //SubMenu Keliling LAYANG-LAYANG
            else if (menu1_8=="2"){

                keliling_layanglayang();

            }
            //SubMenu Diagonal 1 (Jika diketahui Luas LAYANG-LAYANG)
            else if (menu1_8=="3"){

                diagonal_a_layanglayang();

            }
            //SubMenu Diagonal 2 (Jika diketahui Luas LAYANG-LAYANG)
            else if (menu1_8=="4"){

                diagonal_b_layanglayang();

            }
            //SubMenu Sisi a atau b (Jika diketahui Keliling LAYANG-LAYANG)
            else if (menu1_8=="5"){

                sisi_a_layanglayang();

            }
            //SubMenu Sisi c atau d (Jika diketahui Keliling LAYANG-LAYANG)
            else if (menu1_8=="6"){

                sisi_c_layanglayang();

            }

            else if (menu1_8=="88"){
                goto Menu1;  //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_8=="99"){
                goto Menu0;   //kembali ke menu utama
            }

            else if (menu1_8=="00"){
                goto Keluar;  //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_8;   //kembali ke menu Layang-layang
            }//end of if-else Menu1_8_1 (menghitung Layang-layang)

            //SuperSubMenu Konfirmasi
            Konfirm8:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_8_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
            } else if (pilihan=="88"){
                goto Menu1_8;           //kembali ke menu Segitiga Siku-sku
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm8;   //mengulang konfirmasi
            }//end of if-else menu Konfirm8

        } //end of if-else (Menu 8.LAYANG-LAYANG)

        //Menu 9.BELAH KETUPAT
        Menu1_9:
        if (menu1=="9"){

            belahketupat();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_9;
            cout << endl;
            system ("cls");

            //SubMenu Luas BELAH KETUPAT
            Menu1_9_1:
            if (menu1_9=="1"){

                luas_belahketupat();

            }
            //SubMenu Keliling BELAH KETUPAT
            else if (menu1_9=="2"){

                keliling_belahketupat();

            }
            //SubMenu Diagonal 1 (Jika diketahui Luas BELAH KETUPAT)
            else if (menu1_9=="3"){

                diagonal_a_belahketupat();

            }
            //SubMenu Diagonal 2 (Jika diketahui Luas BELAH KETUPAT)
            else if (menu1_9=="4"){

                diagonal_b_belahketupat();

            }
            //SubMenu Sisi (Jika diketahui Keliling BELAH KETUPAT)
            else if (menu1_9=="5"){

                sisi_belahketupat();

            }

            else if (menu1_9=="88"){
                goto Menu1;  //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_9=="99"){
                goto Menu0;   //kembali ke menu utama
            }

            else if (menu1_9=="00"){
                goto Keluar;  //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_9;   //kembali ke menu Belah Ketupat
            }//end of if-else Menu1_9_1 (menghitung Belah Ketupat)

            //SuperSubMenu Konfirmasi
            Konfirm9:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_9_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
            } else if (pilihan=="88"){
                goto Menu1_9;           //kembali ke menu Segitiga Siku-sku
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm9;   //mengulang konfirmasi
            }//end of if-else menu Konfirm9

        } //end of if-else (Menu 9.BELAH KETUPAT)

        //Menu 10.LINGKARAN
        Menu1_10:
        if (menu1=="10"){

            lingkaran();

            cout << "\t >> Pilih Menu : ";  //input user (angka)
            cin >> menu1_10;
            cout << endl;
            system ("cls");

            //SubMenu Luas LINGKARAN
            Menu1_10_1:
            if (menu1_10=="1"){

                luas_lingkaran();

            }
            //SubMenu Keliling LINGKARAN
            else if (menu1_10=="2"){

                keliling_lingkaran();

            }
            //SubMenu Jari-jari (Jika diketahui Luas LINGKARAN)
            else if (menu1_10=="3"){

                jarijari_lingkaran_a();

            }
            //SubMenu Jari-jari (Jika diketahui Keliling)
            else if (menu1_10=="4"){

                jarijari_lingkaran_b();

            }

            else if (menu1_10=="88"){
                goto Menu1;  //kembali ke menu kalkulator bangun datar
            }

            else if (menu1_10=="99"){
                goto Menu0;   //kembali ke menu utama
            }

            else if (menu1_10=="00"){
                goto Keluar;  //keluar program
            }

            else {
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Menu1_10;   //kembali ke menu Lingkaran
            }//end of if-else Menu1_10_1 (menghitung Lingkaran)

            //SuperSubMenu Konfirmasi
            Konfirm10:
            cout << endl;
            cout << "\t 1. Hitung Lagi" << endl;
            cout << endl;
            cout << "\t 88.KEMBALI" << endl;
            cout << "\t 99.KE MENU UTAMA" << endl;
            cout << "\t 00.KELUAR" << endl;
            cout << endl;
            cout << "\t >> Masukkan Pilihan: ";
            cin >> pilihan;
            cout << endl;
            system ("cls");

            if (pilihan=="1"){
                goto Menu1_10_1;        //menghitung ulang (luas-keliling segitiga siku-siku)
            } else if (pilihan=="88"){
                goto Menu1_10;          //kembali ke menu Segitiga Siku-sku
            } else if (pilihan=="99"){
                goto Menu0;             //kembali ke menu utama
            } else if (pilihan=="00"){
                goto Keluar;            //keluar program
            } else{
                cout << endl;
                cout << "\t Masukkan angka sesuai pilihan!";
                cout << endl;
                cout << endl;
                system("pause"); //menjeda layar
                system("cls");   //membersihkan layar
                goto Konfirm10;   //mengulang konfirmasi
            }//end of if-else menu Konfirm10

        } //end of if-else (Menu 10.LINGKARAN)

        //Menu 99.KEMBALI KE MENU UTAMA
        if (menu1=="99"){
            goto Menu0;             //kembali ke menu utama
        }
        //MENU 00.KELUAR
        if (menu1=="00"){
            KeluarKalkulator:
            cout << endl;
            cout << "\t Apakah Anda ingin menutup program? <y/t> : ";
            cin >> keluar;
            cout << endl;
            system ("cls");
            if(keluar=="y"){
                exit(0);              //keluar program
            } else if (keluar=="t"){
                goto Menu1_1;         //kembali ke menu Persegi
            } else goto KeluarKalkulator;       //mengulang konfirmasi
        }
        else{
            cout << endl;
            cout << "\t Masukkan angka sesuai pilihan!";
            cout << endl;
            cout << endl;
            system("pause"); //menjeda layar
            system("cls");   //membersihkan layar
            goto Menu1;   //mengulang konfirmasi
        }//end of if-else Menu Kembali

    }//end of main if-else (MainMenu 1.KALKULATOR BANGUN DATAR)

    ///MainMenu 2.TABEL RUMUS BANGUN DATAR
    Menu2:
    if (menu0=="2"){

        tabel_rumus();

        //SubMenu Konfirmasi
        cout << "\t 99.KEMBALI KE MENU UTAMA" << endl;
        cout << "\t 00.KELUAR" << endl;
        cout << endl;
        cout << "\t >> Masukkan Pilihan: ";
        cin >> pilihan;
        cout << endl;
        system ("cls");

        //MENU 99.KEMBALI KE MENU UTAMA
        if (pilihan=="99"){
            goto Menu0;             //kembali ke menu utama
        }
        //MENU 00.KELUAR
        else if (pilihan=="00"){
            KeluarTabel:
            cout << endl;
            cout << "\t Apakah Anda ingin menutup program? <y/t> : ";
            cin >> keluar;
            cout << endl;
            system ("cls");
            if(keluar=="y"){
                exit(0);              //keluar program
            } else if (keluar=="t"){
                goto Menu2;         //kembali ke menu Persegi
            } else goto KeluarTabel;       //mengulang konfirmasi
        }
        else{
            cout << endl;
            cout << "\t Masukkan angka sesuai pilihan!";
            cout << endl;
            cout << endl;
            system("pause"); //menjeda layar
            system("cls");   //membersihkan layar
            goto Menu2;   //kembali ke menu sebelumnya
        }//end of if-else SubMenu Konfirmasi

    }//end of MainMenu 2.TABEL RUMUS BANGUN DATAR

    ///MainMenu 3.CARI BANGUN DATAR
    //Menu3:
    if (menu0=="3"){
        //Deklarasi
        string keyword, cari, pilih;

        //Inisialisasi array
        int length = 21;
        string arr[length] = {"persegi","segi empat","bujur sangkar","persegi panjang","lingkaran","segitiga","segi tiga","segitiga siku-siku","segitiga sama kaki","segitiga sama sisi","segitiga siku siku","siku-siku","sama kaki","sama sisi","trapesium","jajar genjang","belah ketupat","ketupat","layang-layang","layang layang","layang"};

        //Pemanggilan prosedur sorting
        bubble_sort(arr,length);

        //Menu3_1:
        cout << "\t _________________________________________________________________ " << endl;
        cout << "\t|                                                                 |" << endl;
        cout << "\t|                    >>> CARI BANGUN DATAR <<<                    |" << endl;
        cout << "\t ================================================================= " << endl;
        cout << endl;
        cout << "\t >> Apakah Anda ingin menggunakan fitur pencarian? <y/t> : ";
        cin >> cari;
        system("cls");

        //True Answer
        Cari:
        if(cari=="y"){
            cout << "\t _________________________________________________________________ " << endl;
            cout << "\t|                                                                 |" << endl;
            cout << "\t|                    >>> CARI BANGUN DATAR <<<                    |" << endl;
            cout << "\t ================================================================= " << endl;
            cout << endl;

            //Input Keyword
            cout << "\t >> Masukkan nama bangun datar yang ingin dicari : ";
            cin.ignore();
            getline(cin,keyword);
            //Pemanggilan fungsi searching
            int posisi = function_binary_search(arr,length,keyword); //variable posisi=fungsi

            //Hasil_Keyword:
            if(posisi != -1){   //pernyataan kondisi
                cout << endl;
                cout << "\t --> Kata kunci '" << keyword << "' ditemukan <--" << endl;
                cout << endl;

               //Kata Kunci "PERSEGI"

                if(keyword=="persegi"||keyword=="segi empat"||keyword=="bujur sangkar"){
                    KeywordPersegi:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator PERSEGI" << endl;
                    cout << "\t 2. Rumus PERSEGI" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordPersegi_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1.Kalkulator PERSEGI
                    if(pilih=="1"){
                        menu1_1:

                        persegi();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_1;
                        cout << endl;
                        system ("cls");

                        menu1_1_1:
                        //SubMenu Luas PERSEGI
                        if (menu1_1=="1"){

                            luas_persegi();
                        }
                        //SubMenu Keliling PERSEGI
                        else if (menu1_1=="2"){

                            keliling_persegi();

                        }
                        //SubMenu Panjang Sisi (Jika diketahui Luas PERSEGI)
                        else if (menu1_1=="3"){

                            sisi_persegi_a();

                        }
                        //SubMenu Panjang Sisi (Jika diketahui Keliling PERSEGI)
                        else if (menu1_1=="4"){

                            sisi_persegi_b();

                        }
                        //SubMenu Panjang Diagonal PERSEGI
                        else if (menu1_1=="5"){

                            diagonal_persegi();

                        }

                        else if (menu1_1=="88"){
                            goto Menu1; //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_1=="99"){
                            goto Menu0; //kembali ke menu utama
                        }

                        else if (menu1_1=="00"){
                            keluar:
                            cout << endl;
                            cout << "\t Apakah Anda ingin menutup program? <y/t> : ";
                            cin >> keluar;
                            cout << endl;
                            system ("cls");
                            if(keluar=="y"){
                                exit(0);              //keluar program
                            } else if (keluar=="t"){
                                goto menu1_1;         //kembali ke menu Persegi
                            } else goto keluar;       //mengulang konfirmasi
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_1;   //kembali ke menu Persegi
                        }//end of if-else menu1_1_1 (menghitung persegi)

                        //SuperSubMenu Konfirmasi
                        konfirm1:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_1_1;         //menghitung ulang (luas-keliling persegi)
                        } else if (pilihan=="88"){
                            goto menu1_1;           //kembali ke menu Persegi
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm1;   //mengulang konfirmasi
                        }//end of if-else menu konfirm1

                    }//end of if-else Menu 1.Kalkulator PERSEGI

                    //2.Rumus PERSEGI
                    else if(pilih=="2"){
                        cout << "\t ___________________________________________________________________________ " << endl;
                        cout << "\t|                                                                           |" << endl;
                        cout << "\t|                           >>> RUMUS PERSEGI <<<                           |" << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 1. | PERSEGI            | Luas (L)        | L = s.s = s^2                 | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = s+s+s+s = 4.s             | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi (s)        | s = Akar(L)                   | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | s = K/4                       | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Diagonal (d)    | d = Akar(2.s.s) = Akar(2.s^2) | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_Persegi:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordPersegi;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_Persegi;   //mengulang konfirmasi

                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 2.Rumus Persegi
                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordPersegi;   //kembali ke menu KeywordPersegi
                    }//end of if-else KeywordPersegi_1

                } //end of if-else (Kata Kunci 1."PERSEGI")

                //Kata Kunci "PERSEGI PANJANG"

                else if(keyword=="persegi panjang"){
                    KeywordPersegiPanjang:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator PERSEGI PANJANG" << endl;
                    cout << "\t 2. Rumus PERSEGI PANJANG" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordPersegiPanjang_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1.Kalkulator PERSEGI PANJANG
                    if(pilih=="1"){
                        menu1_2:

                        persegipanjang();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_2;
                        cout << endl;
                        system ("cls");

                        menu1_2_1:
                        //SubMenu Luas PERSEGI PANJANG
                        if (menu1_2=="1"){

                            luas_persegipanjang();

                        }
                        //SubMenu Keliling PERSEGI PANJANG
                        else if (menu1_2=="2"){

                            keliling_persegipanjang();

                        }
                        //SubMenu Panjang Sisi (Jika diketahui Lebar dan Luas PERSEGI PANJANG)
                        else if (menu1_2=="3"){

                            panjang_persegipanjang_a();

                        }
                        //SubMenu Panjang Sisi (Jika diketahui Lebar dan Keliling PERSEGI PANJANG)
                        else if (menu1_2=="4"){

                            panjang_persegipanjang_b();

                        }
                        //SubMenu Lebar Sisi (Jika diketahui Panjang dan Luas PERSEGI PANJANG)
                        else if (menu1_2=="5"){

                            lebar_persegipanjang_a();

                        }
                        //SubMenu Lebar Sisi (Jika diketahui Panjang dan Keliling PERSEGI PANJANG)
                        else if (menu1_2=="6"){

                            lebar_persegipanjang_b();

                        }
                        //SubMenu Diagonal PERSEGI PANJANG
                        else if (menu1_2=="7"){

                            diagonal_persegipanjang();

                        }

                        else if (menu1_2=="88"){
                            goto Menu1; //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_2=="99"){
                            goto Menu0; //kembali ke menu utama
                        }

                        else if (menu1_2=="00"){
                            goto keluar; //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_2;   //kembali ke menu Persegi Panjang
                        }//end of if-else menu1_2_1 (menghitung persegi panjang)

                        //SuperSubMenu Konfirmasi
                        konfirm2:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_2_1;         //menghitung ulang (luas-keliling persegi panjang)
                        } else if (pilihan=="88"){
                            goto menu1_2;           //kembali ke menu Persegi Panjang
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm2;   //mengulang konfirmasi
                        }//end of if-else menu Konfirm2

                    }//end of if-else Menu 1.Kalkulator PERSEGI PANJANG

                    //2.Rumus PERSEGI PANJANG
                    else if(pilih=="2"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                           >>> RUMUS PERSEGI PANJANG <<<                   | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 2. | PERSEGI PANJANG    | Luas (L)        | L = p.l                       | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = 2(p+l) = 2p+2l            | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Panjang (p)     | p = L/l                       | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | p = (K-2l)/2                  | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | lebar (l)       | l = L/p                       | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | l = (K-2p)/2                  | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Diagonal (d)    | d = Akar(p^2 + l^2)           | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_PersegiPanjang:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordPersegiPanjang;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_PersegiPanjang;   //mengulang konfirmasi

                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 2.Rumus Persegi Panjang

                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordPersegiPanjang;   //kembali ke menu KeywordPersegi
                    }//end of if-else KeywordPersegiPanjang_1

                } //end of if-else (Kata Kunci "PERSEGI PANJANG")

                //Kata Kunci "SEGITIGA (SIKU-SIKU/SAMA KAKI/SAMA SISI)"

                else if(keyword=="segitiga"||keyword=="segi tiga"||keyword=="segitiga siku-siku"||keyword=="segitiga sama kaki"||keyword=="segitiga sama sisi"||keyword=="segitiga siku siku"||keyword=="siku-siku"||keyword=="sama kaki"||keyword=="sama sisi"){
                    KeywordSegitiga:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator SEGITIGA SIKU-SIKU" << endl;
                    cout << "\t 2. Kalkulator SEGITIGA SAMA KAKI" << endl;
                    cout << "\t 3. Kalkulator SEGITIGA SAMA SISI" << endl;
                    cout << "\t 4. Rumus SEGITIGA SIKU-SIKU" << endl;
                    cout << "\t 5. Rumus SEGITIGA SAMA KAKI" << endl;
                    cout << "\t 6. Rumus SEGITIGA SAMA SISI" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordSegitigaSikuSiku_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1. Kalkulator SEGITIGA SIKU-SIKU
                    if(pilih=="1"){
                        menu1_3:

                        segitiga_sikusiku();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_3;
                        cout << endl;
                        system ("cls");

                        //SubMenu Luas SEGITIGA SIKU-SIKU
                        menu1_3_1:
                        if (menu1_3=="1"){

                            luas_segitiga_sikusiku();

                        }
                        //SubMenu Keliling SEGITIGA SIKU-SIKU
                        else if (menu1_3=="2"){

                            keliling_segitiga_sikusiku();

                        }
                        //SubMenu Alas (Jika diketahui Tinggi dan Luas SEGITIGA SIKU-SIKU)
                        else if (menu1_3=="3"){

                            alas_segitiga_sikusiku();

                        }
                        //SubMenu Tinggi (Jika diketahui Alas dan Luas SEGITIGA SIKU-SIKU)
                        else if (menu1_3=="4"){

                            tinggi_segitiga_sikusiku();

                        }
                        //SubMenu Alas (Sisi a) SEGITIGA SIKU-SIKU
                        else if (menu1_3=="5"){

                            pythagoras_a();

                        }
                        //SubMenu Tinggi (Sisi b) SEGITIGA SIKU-SIKU
                        else if (menu1_3=="6"){

                            pythagoras_b();

                        }
                        //SubMenu Sisi Miring (Sisi c) SEGITIGA SIKU-SIKU
                        else if (menu1_3=="7"){

                            pythagoras_c();

                        }

                        else if (menu1_3=="88"){
                            goto Menu1;  //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_3=="99"){
                            goto Menu0;   //kembali ke menu utama
                        }

                        else if (menu1_3=="00"){
                            goto keluar;  //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_3;   //kembali ke menu segitiga siku-siku
                        }//end of if-else menu1_3_1 (menghitung segitiga siku-siku)

                        //SuperSubMenu Konfirmasi
                        konfirm3:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_3_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
                        } else if (pilihan=="88"){
                            goto menu1_3;           //kembali ke menu Segitiga Siku-sku
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm3;   //mengulang konfirmasi
                        }//end of if-else konfirm3
                    } //end of if-else (1.Kalkulator SEGITIGA SIKU-SIKU)

                    //2. Kalkulator SEGITIGA SAMA KAKI
                    else if(pilih=="2"){
                        menu1_4:

                        segitiga_samakaki();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_4;
                        cout << endl;
                        system ("cls");

                        menu1_4_1:
                        //SubMenu Luas SEGITIGA SAMA KAKI
                        if (menu1_4=="1"){

                            luas_segitiga_samakaki();

                        }
                        //SubMenu Keliling SEGITIGA SAMA KAKI
                        else if (menu1_4=="2"){

                            keliling_segitiga_samakaki();

                        }
                        //SubMenu Alas SEGITIGA SAMA KAKI
                        else if (menu1_4=="3"){

                            alas_segitiga_samakaki();

                        }
                        //SubMenu Tinggi SEGITIGA SAMA KAKI
                        else if (menu1_4=="4"){

                            tinggi_segitiga_samakaki();

                        }
                        //SubMenu Sisi Miring SEGITIGA SAMA KAKI
                        else if (menu1_4=="5"){

                            sisimiring_segitiga_samakaki();

                        }

                        else if (menu1_4=="88"){
                            goto Menu1;     //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_4=="99"){
                            goto Menu0;     //kembali ke menu utama
                        }

                        else if (menu1_4=="00"){
                            goto keluar;    //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_4;   //kembali ke menu segitiga sama kaki
                        }//end of if-else menu1_4_1 (menghitung segitiga sama kaki)

                        //SuperSubMenu Konfirmasi
                        konfirm4:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_4_1;         //menghitung ulang (luas-keliling segitiga sama kaki)
                        } else if (pilihan=="88"){
                            goto menu1_4;           //kembali ke menu Segitiga Sama Kaki
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm4;   //mengulang konfirmasi
                        }

                    } //end of if-else (2.Kalkulator SEGITIGA SAMA KAKI)

                    //3. Kalkulator SEGITIGA SAMA SISI
                    else if(pilih=="3"){
                        menu1_5:

                        segitiga_samasisi();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_5;
                        cout << endl;
                        system ("cls");

                        //SubMenu Luas SEGITIGA SAMA SISI
                        menu1_5_1:
                        if (menu1_5=="1"){

                            luas_segitiga_samasisi();

                        }
                        //SubMenu Keliling SEGITIGA SAMA SISI
                        else if (menu1_5=="2"){

                            keliling_segitiga_samasisi();

                        }
                        //SubMenu Panjang Sisi (Jika diketahui Luas SEGITIGA SAMA SISI)
                        else if (menu1_5=="3"){

                            sisi_segitiga_samasisi();

                        }
                        //SubMenu Tinggi (Jika diketahui Sisi dan Luas SEGITIGA SAMA SISI)
                        else if (menu1_5=="4"){

                            tinggi_segitiga_samasisi_a();

                        }
                        //SubMenu Tinggi (Jika diketahui Sisi lain) SEGITIGA SAMA SISI
                        else if (menu1_5=="5"){

                            tinggi_segitiga_samasisi_b();

                        }

                        else if (menu1_5=="88"){
                            goto Menu1;     //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_5=="99"){
                            goto Menu0;      //kembali ke menu utama
                        }

                        else if (menu1_5=="00"){
                            goto keluar;    //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_5;   //kembali ke menu Segitiga Sama Sisi
                        }//end of if-else menu1_1_1 (menghitung segitiga sama sisi)

                        //SuperSubMenu Konfirmasi
                        konfirm5:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_5_1;         //menghitung ulang (luas-keliling segitiga sama sisi)
                        } else if (pilihan=="88"){
                            goto menu1_5;           //kembali ke menu Segitiga Sama Sisi
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm5;   //mengulang konfirmasi
                        }//end of if-else menu konfirm5

                    } //end of if-else (3.Kalkulator SEGITIGA SAMA SISI)

                    //4.Rumus SEGITIGA SIKU-SIKU
                    else if(pilih=="4"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                        >>> RUMUS SEGITIGA SIKU-SIKU <<<                   | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 3. | SEGITIGA SIKU-SIKU | Luas (L)        | L = 1/2.a.t                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = AB+BC+AC = a+b+c          | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Alas (a)        | a = 2.l/t                     | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Tinggi (t)      | t = 2.l/a                     | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Pythagoras:     | c^2 = a^2 + b^2               | " << endl;
                        cout << "\t|    |                    |                 |                               | " << endl;
                        cout << "\t|    |                    | Sisi alas (a)   | a = Akar(c^2 - b^2)           | " << endl;
                        cout << "\t|    |                    |                 |                               | " << endl;
                        cout << "\t|    |                    | Sisi tinggi (b) | b = Akar(c^2 - a^2)           | " << endl;
                        cout << "\t|    |                    |                 |                               | " << endl;
                        cout << "\t|    |                    | Sisi miring (c) | c = Akar(a^2 + b^2)           | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_SegitigaSikuSiku:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordSegitiga;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_SegitigaSikuSiku;   //mengulang konfirmasi

                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 4.Rumus Segitiga Siku-siku

                    //5.Rumus SEGITIGA SAMA KAKI
                    else if(pilih=="5"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                        >>> RUMUS SEGITIGA SAMA KAKI <<<                   | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 4. | SEGITIGA SAMA KAKI | Luas (L)        | L = Akar(S(S-a)(S-b)(S-c))    | " << endl;
                        cout << "\t|    |                    |                 | dengan S = 1/2(a+b+c)         | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = AB+BC+AC = a+b+c          | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Alas (sisi b)   | b  = 2 . Akar(c^2 - t^2)      | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Tinggi (t)      | t  = Akar(c^2 - (b/2)^2)      | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi miring     | karena sisi a = c,            | " << endl;
                        cout << "\t|    |                    | (sisi a atau c) | a = c = Akar(t^2 + (b/2)^2)   | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_SegitigaSamaKaki:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordSegitiga;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_SegitigaSamaKaki;   //mengulang konfirmasi

                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 5.Rumus Segitiga Sama Kaki

                    //6.Rumus SEGITIGA SAMA SISI
                    else if(pilih=="6"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                        >>> RUMUS SEGITIGA SAMA SISI <<<                   | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 5. | SEGITIGA SAMA SISI | Luas (L)        | L = Akar(S(S-s)^3)            | " << endl;
                        cout << "\t|    |                    |                 | dengan S = 1/2(3.s)           | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | L = 1/4(s^2).Akar(3)          | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = s+s+s = 3.s               | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi (s)        | s = Akar(1/3(4.L.Akar(3)))    | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Tinggi (t)      | t = Akar(s^2 - (s/2)^2)       | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | t = s/2 . Akar(3)             | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | t = 2.L/s                     | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_SegitigaSamaSisi:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordSegitiga;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_SegitigaSamaSisi;   //mengulang konfirmasi

                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 6.Rumus Segitiga Sama Sisi

                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordPersegiPanjang;   //kembali ke menu KeywordPersegi
                    }//end of if-else KeywordSegitigaSikuSiku_1

                } //end of if-else (Kata Kunci "SEGITIGA (SIKU-SIKU/SAMA KAKI/SAMA SISI")

                //Kata Kunci "JAJAR GENJANG"

                else if(keyword=="jajar genjang"){
                    KeywordJajarGenjang:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator JAJAR GENJANG" << endl;
                    cout << "\t 2. Rumus JAJAR GENJANG" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordJajarGenjang_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1.Kalkulator JAJAR GENJANG
                    if(pilih=="1"){
                        menu1_6:

                        jajargenjang();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_6;
                        cout << endl;
                        system ("cls");

                        menu1_6_1:
                        //SubMenu Luas JAJAR GENJANG
                        if (menu1_6=="1"){

                            luas_jajargenjang();

                        }
                        //SubMenu Keliling JAJAR GENJANG
                        else if (menu1_6=="2"){

                            keliling_jajargenjang();

                        }
                        //SubMenu Alas (Jika diketahui Tinggi dan Luas JAJAR GENJANG)
                        else if (menu1_6=="3"){

                            alas_jajargenjang_a();

                        }
                        //SubMenu Alas (Jika diketahui Sisi Miring dan Keliling JAJAR GENJANG)
                        else if (menu1_6=="4"){

                            alas_jajargenjang_b();

                        }
                        //SubMenu Tinggi (Jika diketahui Alas dan Luas JAJAR GENJANG)
                        else if (menu1_6=="5"){

                            tinggi_jajargenjang();

                        }
                        //SubMenu Sisi Miring (Jika diketahui Alas dan Keliling JAJAR GENJANG)
                        else if (menu1_6=="6"){

                            sisimiring_jajargenjang();

                        }

                        else if (menu1_6=="88"){
                            goto Menu1;  //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_6=="99"){
                            goto Menu0;   //kembali ke menu utama
                        }

                        else if (menu1_6=="00"){
                            goto keluar;  //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_6;   //kembali ke menu Jajar Genjang
                        }//end of if-else menu1_6_1 (menghitung Jajar Genjang)

                        //SuperSubMenu Konfirmasi
                        konfirm6:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_6_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
                        } else if (pilihan=="88"){
                            goto menu1_6;           //kembali ke menu Segitiga Siku-sku
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm6;   //mengulang konfirmasi
                        }//end of if-else SuperSubMenu Konfirmasi (konfirm6)
                    } //end of if-else (Menu 1.Kalkulator JAJAR GENJANG)

                    //2.Rumus JAJAR GENJANG
                    else if(pilih=="2"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                       >>> RUMUS JAJAR GENJANG <<<                         | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 6. | JAJAR GENJANG      | Luas (L)        | L = a.t                       | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = AB+BC+CD+AD               | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | K = 2(a+b)                    | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Alas (a)        | a = L/t                       | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | a = (K/2)-b                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Tinggi (t)      | t = L/a                       | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi miring     | b = (K/2)-a                   | " << endl;
                        cout << "\t|    |                    | (sisi b)        |                               | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_JajarGenjang:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordJajarGenjang;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_JajarGenjang;   //mengulang konfirmasi
                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 2.Rumus Jajar Genjang
                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordJajarGenjang;   //kembali ke menu KeywordJajarGenjang
                    }//end of if-else KeywordJajarGenjang_1

                } //end of if-else (Kata Kunci "JAJAR GENJANG")

                //Kata Kunci "TRAPESIUM"

                else if(keyword=="trapesium"){
                    KeywordTrapesium:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator TRAPESIUM" << endl;
                    cout << "\t 2. Rumus TRAPESIUM" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordTrapesium_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1.Kalkulator TRAPESIUM
                    if(pilih=="1"){
                        menu1_7:

                        trapesium();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_7;
                        cout << endl;
                        system ("cls");

                        //SubMenu Luas TRAPESIUM
                        menu1_7_1:
                        if (menu1_7=="1"){

                            luas_trapesium();

                        }
                        //SubMenu Keliling TRAPESIUM
                        else if (menu1_7=="2"){

                            keliling_trapesium();

                        }
                        //SubMenu Sisi a (AB) (Jika diketahui Luas dan Tinggi TRAPESIUM)
                        else if (menu1_7=="3"){

                            sisi_a_trapesium();

                        }
                        //SubMenu Sisi b (CD) (Jika diketahui Luas dan Tinggi TRAPESIUM)
                        else if (menu1_7=="4"){

                            sisi_b_trapesium();

                            }
                        //SubMenu Tinggi (Jika diketahui Luas dan Sisi Sejajar TRAPESIUM)
                        else if (menu1_7=="5"){

                            tinggi_trapesium();

                        }
                        else if (menu1_7=="88"){
                            goto Menu1;  //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_7=="99"){
                            goto Menu0;   //kembali ke menu utama
                        }

                        else if (menu1_7=="00"){
                            goto keluar;  //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_7;   //kembali ke menu Trapesium
                        }//end of if-else menu1_7_1 (menghitung Trapesium)

                        //SuperSubMenu Konfirmasi
                        konfirm7:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_7_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
                        } else if (pilihan=="88"){
                            goto menu1_7;           //kembali ke menu Segitiga Siku-sku
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm7;   //mengulang konfirmasi
                        }//end of if-else menu konfirm7

                    } //end of if-else (Menu 1.Kalkulator TRAPESIUM)

                    //2.Rumus TRAPESIUM
                    else if(pilih=="2"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                           >>> RUMUS TRAPESIUM <<<                         | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 7. | TRAPESIUM          | Luas (L)        | L = 1/2(AB+CD).t              | " << endl;
                        cout << "\t|    |                    |                 | L = 1/2(a+b).t                | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = AB + BC + CD + AD         | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi a (AB)     | a = (2.L/t)-b                 | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi b (CD)     | b = (2.L/t)-a                 | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Tinggi (t)      | t = 2.L/(a+b)                 | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_Trapesium:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordTrapesium;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_Trapesium;   //mengulang konfirmasi
                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 2.Rumus Trapesium
                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordTrapesium;   //kembali ke menu KeywordTrapesium
                    }//end of if-else KeywordTrapesium_1

                } //end of if-else (Kata Kunci "TRAPESIUM")

                //Kata Kunci "LAYANG-LAYANG"

                else if(keyword=="layang-layang"||keyword=="layang layang"||keyword=="layang"){
                    KeywordLayangLayang:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator LAYANG-LAYANG" << endl;
                    cout << "\t 2. Rumus LAYANG-LAYANG" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordLayangLayang_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1.Kalkulator LAYANG-LAYANG
                    if(pilih=="1"){
                        menu1_8:

                        layanglayang();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_8;
                        cout << endl;
                        system ("cls");

                        //SubMenu Luas LAYANG-LAYANG
                        menu1_8_1:
                        if (menu1_8=="1"){

                            luas_layanglayang();

                        }
                        //SubMenu Keliling LAYANG-LAYANG
                        else if (menu1_8=="2"){

                            keliling_layanglayang();

                        }
                        //SubMenu Diagonal 1 (Jika diketahui Luas LAYANG-LAYANG)
                        else if (menu1_8=="3"){

                            diagonal_a_layanglayang();

                        }
                        //SubMenu Diagonal 2 (Jika diketahui Luas LAYANG-LAYANG)
                        else if (menu1_8=="4"){

                            diagonal_b_layanglayang();

                        }
                        //SubMenu Sisi a atau b (Jika diketahui Keliling LAYANG-LAYANG)
                        else if (menu1_8=="5"){

                            sisi_a_layanglayang();

                        }
                        //SubMenu Sisi c atau d (Jika diketahui Keliling LAYANG-LAYANG)
                        else if (menu1_8=="6"){

                            sisi_c_layanglayang();

                        }

                        else if (menu1_8=="88"){
                            goto Menu1;  //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_8=="99"){
                            goto Menu0;   //kembali ke menu utama
                        }

                        else if (menu1_8=="00"){
                        goto keluar;  //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_8;   //kembali ke menu Layang-layang
                        }//end of if-else menu1_8_1 (menghitung Layang-layang)

                        //SuperSubMenu Konfirmasi
                        konfirm8:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_8_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
                        } else if (pilihan=="88"){
                            goto menu1_8;           //kembali ke menu Segitiga Siku-sku
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm8;   //mengulang konfirmasi
                        }//end of if-else menu konfirm8

                    } //end of if-else (Menu 8.Kalkulator LAYANG-LAYANG)

                    //2.Rumus LAYANG-LAYANG
                    else if(pilih=="2"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                        >>> RUMUS LAYANG-LAYANG <<<                        | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 8. | LAYANG-LAYANG      | Luas (L)        | L = 1/2.d1.d2                 | " << endl;
                        cout << "\t|    |                    |                 | L = 1/2.AC.BD                 | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = AD+DC+CB+BA = a+b+c+d     | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Diagonal 1 (d1) | d1 = 2.L/d2                   | " << endl;
                        cout << "\t|    |                    | (sisi AC)       | AC = 2.L/BD                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Diagonal 2 (d2) | d2 = 2.L/d1                   | " << endl;
                        cout << "\t|    |                    | (sisi BD)       | BD = 2.L/AC                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi a atau b   | a = b = (1/2.K)-c             | " << endl;
                        cout << "\t|    |                    | (AD) atau (DC)  | AD = DC = (1/2.K)-CB          | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_LayangLayang:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordLayangLayang;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_LayangLayang;   //mengulang konfirmasi
                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 2.Rumus Layang-layang
                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordLayangLayang;   //kembali ke menu KeywordLayangLayang
                    }//end of if-else KeywordLayangLayang_1

                } //end of if-else (Kata Kunci "LAYANG-LAYANG")

                //Kata Kunci "BELAH KETUPAT"

                else if(keyword=="belah ketupat"||keyword=="ketupat"){
                    KeywordBelahKetupat:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator BELAH KETUPAT" << endl;
                    cout << "\t 2. Rumus BELAH KETUPAT" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordBelahKetupat_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1.Kalkulator BELAH KETUPAT
                    if(pilih=="1"){
                        menu1_9:

                        belahketupat();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_9;
                        cout << endl;
                        system ("cls");

                        //SubMenu Luas BELAH KETUPAT
                        menu1_9_1:
                        if (menu1_9=="1"){

                            luas_belahketupat();

                        }
                        //SubMenu Keliling BELAH KETUPAT
                        else if (menu1_9=="2"){

                            keliling_belahketupat();

                        }
                        //SubMenu Diagonal 1 (Jika diketahui Luas BELAH KETUPAT)
                        else if (menu1_9=="3"){

                            diagonal_a_belahketupat();

                        }
                        //SubMenu Diagonal 2 (Jika diketahui Luas BELAH KETUPAT)
                        else if (menu1_9=="4"){

                            diagonal_b_belahketupat();

                        }
                        //SubMenu Sisi (Jika diketahui Keliling BELAH KETUPAT)
                        else if (menu1_9=="5"){

                            sisi_belahketupat();

                        }

                        else if (menu1_9=="88"){
                            goto Menu1;  //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_9=="99"){
                            goto Menu0;   //kembali ke menu utama
                        }

                        else if (menu1_9=="00"){
                            goto keluar;  //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_9;   //kembali ke menu Belah Ketupat
                        }//end of if-else menu1_9_1 (menghitung Belah Ketupat)

                        //SuperSubMenu Konfirmasi
                        konfirm9:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_9_1;         //menghitung ulang (luas-keliling segitiga siku-siku)
                        } else if (pilihan=="88"){
                            goto menu1_9;           //kembali ke menu Segitiga Siku-sku
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm9;   //mengulang konfirmasi
                        }//end of if-else menu konfirm9
                    }//end of if-else Menu 1.Kalkulator BELAH KETUPAT

                    //2.Rumus BELAH KETUPAT
                    else if(pilih=="2"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                       >>> RUMUS BELAH KETUPAT <<<                         | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 9. | BELAH KETUPAT      | Luas (L)        | L = 1/2.d1.d2                 | " << endl;
                        cout << "\t|    |                    |                 | L = 1/2.AC.BD                 | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = s+s+s+s = 4.s             | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Diagonal 1 (d1) | d1 = 2.L/d2                   | " << endl;
                        cout << "\t|    |                    | (sisi AC)       | AC = 2.L/BD                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Diagonal 2 (d2) | d2 = 2.L/d1                   | " << endl;
                        cout << "\t|    |                    | (sisi BD)       | BD = 2.L/AC                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Sisi (s)        | s = K/4                       | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_BelahKetupat:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordBelahKetupat;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_BelahKetupat;   //mengulang konfirmasi
                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 2.Rumus Belah Ketupat
                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordBelahKetupat;   //kembali ke menu KeywordBelahKetupat
                    }//end of if-else KeywordBelahKetupat_1

                } //end of if-else (Kata Kunci "BELAH KETUPAT")

                //Kata Kunci "LINGKARAN"

                else if(keyword=="lingkaran"){
                    KeywordLingkaran:
                    cout << endl;
                    cout << "\t -------------------------------------" << endl;
                    cout << "\t Menampilkan hasil kata kunci terkait:" << endl;
                    cout << endl;
                    cout << "\t 1. Kalkulator LINGKARAN" << endl;
                    cout << "\t 2. Rumus LINGKARAN" << endl;
                    cout << endl;
                    cout << "\t 99.KE MENU UTAMA" << endl;
                    cout << "\t 00.KELUAR" << endl;
                    cout << "\t======================================" << endl;

                    //KeywordLingkaran_1:
                    cout << "\t >> Masukkan Pilihan: ";
                    cin >> pilih;
                    cout << endl;
                    system("cls");

                    //1.Kalkulator LINGKARAN
                    if(pilih=="1"){
                        menu1_10:

                        lingkaran();

                        cout << "\t >> Pilih Menu : ";  //input user (angka)
                        cin >> menu1_10;
                        cout << endl;
                        system ("cls");

                        //SubMenu Luas LINGKARAN
                        menu1_10_1:
                        if (menu1_10=="1"){

                            luas_lingkaran();

                        }
                        //SubMenu Keliling LINGKARAN
                        else if (menu1_10=="2"){

                            keliling_lingkaran();

                        }
                        //SubMenu Jari-jari (Jika diketahui Luas LINGKARAN)
                        else if (menu1_10=="3"){

                            jarijari_lingkaran_a();

                        }
                        //SubMenu Jari-jari (Jika diketahui Keliling)
                        else if (menu1_10=="4"){

                            jarijari_lingkaran_b();

                        }

                        else if (menu1_10=="88"){
                            goto Menu1;  //kembali ke menu kalkulator bangun datar
                        }

                        else if (menu1_10=="99"){
                            goto Menu0;   //kembali ke menu utama
                        }

                        else if (menu1_10=="00"){
                            goto keluar;  //keluar program
                        }

                        else {
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto menu1_10;   //kembali ke menu Lingkaran
                        }//end of if-else menu1_10_1 (menghitung Lingkaran)

                        //SuperSubMenu Konfirmasi
                        konfirm10:
                        cout << endl;
                        cout << "\t 1. Hitung Lagi" << endl;
                        cout << endl;
                        cout << "\t 88.KEMBALI" << endl;
                        cout << "\t 99.KE MENU UTAMA" << endl;
                        cout << "\t 00.KELUAR" << endl;
                        cout << endl;
                        cout << "\t >> Masukkan Pilihan: ";
                        cin >> pilihan;
                        cout << endl;
                        system ("cls");

                        if (pilihan=="1"){
                            goto menu1_10_1;        //menghitung ulang (luas-keliling segitiga siku-siku)
                        } else if (pilihan=="88"){
                        goto menu1_10;          //kembali ke menu Segitiga Siku-sku
                        } else if (pilihan=="99"){
                            goto Menu0;             //kembali ke menu utama
                        } else if (pilihan=="00"){
                            goto keluar;            //keluar program
                        } else{
                            cout << endl;
                            cout << "\t Masukkan angka sesuai pilihan!";
                            cout << endl;
                            cout << endl;
                            system("pause"); //menjeda layar
                            system("cls");   //membersihkan layar
                            goto konfirm10;   //mengulang konfirmasi
                        }//end of if-else menu konfirm10
                    }//end of if-else Menu 1.Kalkulator LINGKARAN

                    //2.Rumus LINGKARAN
                    else if(pilih=="2"){
                        cout << "\t ___________________________________________________________________________  " << endl;
                        cout << "\t|                                                                           | " << endl;
                        cout << "\t|                         >>> RUMUS LINGKARAN <<<                           | " << endl;
                        cout << "\t|===========================================================================| " << endl;
                        cout << "\t| 10.| LINGKARAN          | Luas (L)        | L = phi.r.r = phi.r^2         | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Keliling (K)    | K = phi.d                     | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | K = phi.2.r                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Jari-jari (r)   | r = 1/2.d                     | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | r = Akar(L/phi)               | " << endl;
                        cout << "\t|    |                    |                 |-------------------------------| " << endl;
                        cout << "\t|    |                    |                 | r = K/2.phi                   | " << endl;
                        cout << "\t|    |                    |-----------------|-------------------------------| " << endl;
                        cout << "\t|    |                    | Diameter (d)    | d = 2.r                       | " << endl;
                        cout << "\t ===========================================================================  " << endl;
                        cout << endl;
                        //SuperSubMenu Konfirmasi
                        Konfirm_Rumus_Lingkaran:
                            cout << endl;
                            cout << "\t 1. Cari Lagi" << endl;
                            cout << endl;
                            cout << "\t 88.KEMBALI" << endl;
                            cout << "\t 99.KE MENU UTAMA" << endl;
                            cout << "\t 00.KELUAR" << endl;
                            cout << endl;
                            cout << "\t >> Masukkan Pilihan: ";
                            cin >> pilihan;
                            cout << endl;
                            system ("cls");

                            if (pilihan=="1"){
                                goto Cari;              //mengulang pencarian
                            } else if (pilihan=="88"){
                                goto KeywordLingkaran;    //kembali ke menu sebelumnya
                            } else if (pilihan=="99"){
                                goto Menu0;             //kembali ke menu utama
                            } else if (pilihan=="00"){
                                goto keluar;            //keluar program
                            } else{
                                cout << endl;
                                cout << "\t Masukkan angka sesuai pilihan!";
                                cout << endl;
                                cout << endl;
                                system("pause"); //menjeda layar
                                system("cls");   //membersihkan layar
                                goto Konfirm_Rumus_Lingkaran;   //mengulang konfirmasi
                            }//end of if-else SuperSubMenu Konfirmasi
                    }//end of if-else Menu 2.Rumus Lingkaran
                    //99.KE MENU UTAMA
                    else if(pilih=="99"){
                        system("cls");
                        goto Menu0;
                    }
                    //00.KELUAR
                    else if(pilih=="00"){
                        system("cls");
                        exit(0);
                    }
                    //Input salah
                    else {
                        cout << endl;
                        cout << "\t Masukkan angka sesuai pilihan!";
                        cout << endl;
                        cout << endl;
                        system("pause"); //menjeda layar
                        system("cls");   //membersihkan layar
                        goto KeywordLingkaran;   //kembali ke menu KeywordLingkaran
                    }//end of if-else KeywordLingkaran_1

                } //end of if-else (Kata Kunci "LINGKARAN")

            }//end of if(posisi!=-1)

            else {  //else of primary exp: if(posisi!=-1)

                KeywordNotFound:
                cout <<endl;
                cout << "\t --> Kata kunci '" << keyword << "' tidak ditemukan! <--" << endl;
                cout << "\t               (Gunakan huruf kecil)" << endl;
                cout << endl;
                cout << endl;
                cout << "\t 1. Cari Ulang" << endl;
                cout << endl;
                cout << "\t 99.KE MENU UTAMA" << endl;
                cout << "\t 00.KELUAR" << endl;
                cout << "\t==========================================================" << endl;
                cout << endl;
                cout << "\t >> Masukkan pilihan : ";
                cin >> pilih;
                system("cls");

                if (pilih=="1"){
                    goto Cari;
                }
                else if (pilih=="99"){
                    goto Menu0;             //kembali ke menu utama
                }
                else if (pilih=="00"){

                    KeluarKeyword:
                    cout << endl;
                    cout << "\t Apakah Anda ingin menutup program? <y/t> : ";
                    cin >> keluar;
                    cout << endl;
                    system ("cls");
                    if(keluar=="y"){
                        exit(0);                //keluar program
                    } else if (keluar=="t"){
                        goto KeywordNotFound;   //kembali ke halaman sebelumnya
                    } else goto KeluarKeyword;  //mengulang konfirmasi

                } else{
                    cout << endl;
                    cout << "\t Masukkan angka sesuai pilihan!";
                    cout << endl;
                    cout << endl;
                    system("pause"); //menjeda layar
                    system("cls");   //membersihkan layar
                    goto KeywordNotFound;
                }//end of if-else KeywordNotFound

            }//end of if-else Hasil Keyword

        }//end of if-else True Answer

        //False Answer
        else if(cari=="t"){
            goto Menu0;
        }
        else cout << "\t Input yang Anda masukkan tidak sesuai!" << endl;
        //end of if-else False Answer
    } //end of if-else (Menu 3.CARI BANGUN DATAR)

    ///MainMenu 4.TENTANG
    Menu4:
    if(menu0=="99"){

        Tentang:

        tentang();

        cout << endl;
        cout << "\t >> Masukkan Pilihan: ";
        cin >> pilihan;
        cout << endl;
        system ("cls");

        if (pilihan=="99"){
            goto Menu0;             //kembali ke menu utama
        }
        else if (pilihan=="00"){

            KeluarTentang:
            cout << endl;
            cout << "\t Apakah Anda ingin menutup program? <y/t> : ";
            cin >> keluar;
            cout << endl;
            system ("cls");
            if(keluar=="y"){
                exit(0);             //keluar program
            } else if (keluar=="t"){
                goto Menu4;          //kembali ke MainMenu 4.TENTANG
            } else goto KeluarTentang;    //mengulang konfirmasi

        } else{
            cout << endl;
            cout << "\t Masukkan angka sesuai pilihan!";
            cout << endl;
            cout << endl;
            system("pause"); //menjeda layar
            system("cls");   //membersihkan layar
            goto Tentang;   //kembali ke menu konfirmasi
            //system ("cls");
        }//end of if-else Konfirma00

    }//end of if-else MainMenu 4.TENTANG

    ///MainMenu 5.KELUAR
    //Menu5:
    if(menu0=="00"){

        Keluar00:
        cout << endl;
        cout << "\t Apakah Anda ingin menutup program? <y/t> : ";
        cin >> keluar;
        cout << endl;
        system ("cls");

        {if(keluar=="y"){
            exit(0);             //keluar program
        } else if (keluar=="t"){
            goto Menu0;          //kembali ke menu utama
        } else goto Keluar00;    //mengulang konfirmasi
        }

    }//end of if-else (MainMenu 5.KELUAR)
    else {  //else of primary exp: if(menu0)
        cout << endl;
        cout << "\t Masukkan angka sesuai pilihan!";
        cout << endl;
        cout << endl;
        system("pause"); //menjeda layar
        system("cls");   //membersihkan layar
        goto Menu0;   //kembali ke menu utama

    }//end of if-else Menu Utama


    return 0;
} //end of main program


//Final Release : 31/01/2021
//Last update : 06/02/2021 17:38 (Bug Fixing & Change Formula)
