#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    int yara[n];

    // Input data
    cout << "Masukkan data:\n";
    for (int i = 0; i < n; i++) {
        cin >> yara[i];
    }

    // Proses Selection Sort
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;

        for (int i = j + 1; i < n; i++) {
            if (yara[i] < yara[min_index]) {
                min_index = i;
            }
        }

        // Tukar
        int temp = yara[j];
        yara[j] = yara[min_index];
        yara[min_index] = temp;
    }

    // Output hasil
    cout << "Hasil setelah sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << yara[i] << " ";
    }

    return 0;
}


----------------------------

#include <iostream>
using namespace std;

int main() {
    int Yara[8];

    // Input data
    cout << "Masukkan 8 data:\n";
    for (int i = 0; i < 8; i++) {
        cin >> Yara[i];
    }

    // Selection Sort
    for (int j = 0; j < 7; j++) {
        int min_index = j;

        for (int i = j + 1; i < 8; i++) {
            if (Yara[i] < Yara[min_index]) {
                min_index = i;
            }
        }

        // Tukar
        int temp = Yara[j];
        Yara[j] = Yara[min_index];
        Yara[min_index] = temp;
    }

    // Output hasil
    cout << "Hasil setelah sorting:\n";
    for (int i = 0; i < 8; i++) {
        cout << Yara[i] << " ";
    }

    return 0;
}