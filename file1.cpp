#include <iostream>
using namespace std;

//membuat fungsi 1 untuk menghitung nilai BMI
float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

//membuat fungsi 2 untuk mengecek kondisi berat badan
string tentukanStatus(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else 
    if (bmi < 25) {
        return "Berat Badan Normal";
    } else 
    if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}