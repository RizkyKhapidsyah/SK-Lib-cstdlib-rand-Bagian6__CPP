#include <cstdlib>
#include <iostream>
#include <time.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    // Program ini akan membuat urutan yang berbeda dari
    // angka acak pada setiap program yang dijalankan
         
    // Gunakan waktu saat ini sebagai seed untuk generator acak
    srand(time_t(0)); //time(0)

    for (int i = 0; i < 4; i++) {
        cout << rand() << " ";
    }
        
    _getch();
    return 0;
}