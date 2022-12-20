#include<iostream>
using namespace std;
int main (){

    int A=12, B=20, temp;

    // Tidak Menggunakan pertukaran variabel sementara

    cout << "Nilai Awal A="<< A << " dan B=" << B << endl;

       A = A + B;
       B = A - B;
       A = A - B;
    
    cout << "Nilai Setelah Ditukar A=" << A << " dan B=" << B << endl;
    cout << endl;

    return 0;

}