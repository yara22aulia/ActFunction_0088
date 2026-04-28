#include <iostream>

using namespace std;

int main() {
    // Panjang array menggunakan 2 digit terakhir NIM (20250140088 -> 88)
    int n = 88; 
    int nickname[n];
    int jumlah_input;

    cout << "Nama: Yara Aulia" << endl;
    cout << "NIM: 20250140088" << endl;
    cout << "-----------------------------------" << endl;

    // Meminta user menentukan berapa banyak data yang ingin diinput (maksimal 88)
    cout << "Masukkan jumlah data yang ingin diinput (maks 88): ";
    cin >> jumlah_input;

    if (jumlah_input > n) {
        cout << "Jumlah melebihi kapasitas NIM (88)!" << endl;
        return 1;
    }

    // Input data
    for (int i = 0; i < jumlah_input; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> nickname[i];
    }

    // Proses Sorting (Selection Sort)
    // 1. Repeat steps 2 and 3 varying j from 0 to n - 2
    for (int j = 0; j <= jumlah_input - 2; j++) {
        
        // 2. Find the minimum value in arr[j] to arr[n-1]
        int min_index = j; // a. Set min_index = j
        
        // b. Repeat step c varying i from j + 1 to n - 1
        for (int i = j + 1; i <= jumlah_input - 1; i++) {
            // c. If arr[i] < arr[min_index]
            if (nickname[i] < nickname[min_index]) {
                min_index = i; // i. min_index = i
            }
        }
        
        // 3. Swap arr[j] with arr[min_index]
        int temp = nickname[j];
        nickname[j] = nickname[min_index];
        nickname[min_index] = temp;
    }

    // Menampilkan data setelah disortir
    cout << "\n--- Data Setelah Disortir ---" << endl;
    for (int i = 0; i < jumlah_input; i++) {
        cout << nickname[i] << " ";
    }
    cout << endl;

    return 0;
}