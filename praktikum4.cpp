#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung BMI
// Rumus: BMI = berat / (tinggi * tinggi)
float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan status berat badan berdasarkan nilai BMI
string cekStatus(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    } else if (bmi < 25) {
        return "Berat Badan Normal";
    } else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    } else {
        return "Obesitas";
    }
}

// Prosedur untuk memasukkan data berat dan tinggi (menggunakan pass-by-reference)
void inputData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

int main() {
    float berat, tinggi, bmi;
    
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    
    // Memanggil prosedur input
    inputData(berat, tinggi);
    
    // Menghitung BMI menggunakan fungsi
    bmi = hitungBMI(berat, tinggi);
    
    cout << endl << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    
    // Menampilkan status menggunakan fungsi cekStatus
    cout << "Status   : " << cekStatus(bmi) << endl;

    return 0;
}