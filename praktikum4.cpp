//Library
#include <iostream>
using namespace std;

// Prosedur untuk memasukkan data
void inputData(float &berat, float &tinggi) {
    cout << "Masukkan berat badan (kg) : 50 ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter) : 18.5 ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
float hitungBMI(float berat, float tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk menentukan status BMI
string statusBMI(float bmi) {
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    }
    else if (bmi < 25) {
        return "Berat Badan Normal";
    }
    else if (bmi < 30) {
        return "Berat Badan Kelebihan";
    }
    else {
        return "Obesitas";
    }
}

int main() {
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    // panggil prosedur input
    inputData(berat, tinggi);

    // hitung BMI
    bmi = hitungBMI(berat, tinggi);

    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status : " << statusBMI(bmi) << endl;

    return 0;
}//selesai