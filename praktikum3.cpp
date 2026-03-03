//Library
#include <iostream>
using namespace std;

//Deklarasi Global
    float p, l;

//Implementasi Prosedur & Fungsi
void input (){\
    cout << "Masukkan Panjang : ";
    cin >> p;
    cout << "Masukkan Lebar : ";
    cin >> l;
}

float LuasPersegi(){
    return p * l;
}

void Output(){
    cout << "Hasilnya = " << LuasPersegi();
}
//Program Utama
int main()
{//start
    input();
    Output();
}//selesai