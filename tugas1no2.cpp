#include<iostream>
using namespace std;
int main (){

    int A=12, B=20, temp;

    //Menggunakan pertukaran variabel sementara

    cout << "Nilai Awal A="<< A << " dan B=" << B << endl;

    temp = A;

    A = B;
    B = temp;
    cout << "Nilai Setelah Ditukar A=" << A << " dan B=" << B << endl;
    cout << endl;

    return 0;

}