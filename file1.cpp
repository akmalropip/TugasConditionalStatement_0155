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

int main() {
    float beratBadan,tinggiBadan,hasilBMI;
    string statusBMI;

 //membuat prosedur input data
    cout << "--- Selamat Datang Mahasiswa Kelas D 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggiBadan;   

hasilBMI = hitungBMI(beratBadan, tinggiBadan); //memanggil fungsi 1     

statusBMI = tentukanStatus(hasilBMI); //memanggil fungsi 2

 //menampilkan output
     cout << "--- Hasil ---" << endl;
     cout << "BMI Anda : " << hasilBMI << endl;
     cout << "Status   : " << statusBMI << endl;
}     