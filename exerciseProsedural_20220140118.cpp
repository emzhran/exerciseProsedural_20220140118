// exerciseProsedural_20220140118.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double rerata(double a, double b) {
    return (a+b)/2;
}

string status(double c){
    if (c >=70)
    return "Lulus";
    else
    return "Gagal";
}

int main(){
    double nilM, nilB;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilM;
    cout << "Masukkan nilai Bahasa Indonesia = ";
    cin >> nilB;
    cout << "status kelulusan = " << status(rerata(nilM,nilB));
    return 0 ;
}