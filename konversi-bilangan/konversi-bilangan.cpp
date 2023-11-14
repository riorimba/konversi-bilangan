#include <iostream>
#include <cmath>
#include <sstream>
#include <bitset>

using namespace std;

void konversiBiner(string biner) {
    // Konversi ke desimal
    int desimal = 0;
    int pangkat = 0;

    for (int i = biner.length() - 1; i >= 0; i--) {
        if (biner[i] == '1') {
            desimal += pow(2, pangkat);
        }
        pangkat++;
    }

    // Konversi ke oktal
    stringstream octalStream;
    octalStream << oct << desimal;
    string oktal = octalStream.str();

    // Konversi ke heksadesimal
    stringstream hexStream;
    hexStream << hex << desimal;
    string heksa = hexStream.str();

    cout << "Desimal: " << desimal << endl;
    cout << "Oktal: " << oktal << endl;
    cout << "Heksadesimal: " << heksa << endl;
}

void konversiOktal(string oktal) {
    // Konversi ke desimal
    int desimal = stoi(oktal, 0, 8);

    // Konversi ke biner
    stringstream binStream;
    binStream << bitset<12>(desimal);
    string biner = binStream.str();

    // Konversi ke heksadesimal
    stringstream hexStream;
    hexStream << hex << desimal;
    string heksadesimal = hexStream.str();

    cout << "Desimal: " << desimal << endl;
    cout << "Biner: " << biner << endl;
    cout << "Heksadesimal: " << heksadesimal << endl;
}

void konversiDesimal(int desimal) {
    // Konversi ke biner
    stringstream binStream;
    binStream << bitset<12>(desimal);
    string biner = binStream.str();

    // Konversi ke oktal
    stringstream octalStream;
    octalStream << oct << desimal;
    string oktal = octalStream.str();

    // Konversi ke heksadesimal
    stringstream hexStream;
    hexStream << hex << desimal;
    string heksadesimal = hexStream.str();

    // Menampilkan hasil
    cout << "Biner: " << biner << endl;
    cout << "Oktal: " << oktal << endl;
    cout << "Heksadesimal: " << heksadesimal << endl;
}

void konversiHeksadesimal(string heksadesimal) {
    // Konversi ke desimal
    int desimal = stoi(heksadesimal, 0, 16);

    // Konversi ke biner
    stringstream binStream;
    binStream << bitset<12>(desimal);
    string biner = binStream.str();

    // Konversi ke oktal
    stringstream octalStream;
    octalStream << oct << desimal;
    string oktal = octalStream.str();

    // Menampilkan hasil
    cout << "Biner: " << biner << endl;
    cout << "Desimal: " << desimal << endl;
    cout << "Oktal: " << oktal << endl;
}

int main()
{

    bool ulang = false;
    string biner, oktal, heksadesimal;
    int desimal;

    while (!ulang) {
        cout << "KONVERSI BILANGAN!\n";
        cout << "pilih inputan bilangan! \n";
        cout << "1.Biner\n";
        cout << "2.Oktal\n";
        cout << "3.Desimal\n";
        cout << "4.Heksadesimal\n";
        cout << "5.Keluar\n";
        cout << "Masukan pilihan: ";
        int pilihan;
        cin >> pilihan;
        cout << endl;

        switch (pilihan) {
            case 1:
                cout << "=== BINER ===\n";
                cout << "Masukkan bilangan Biner: ";
                cin >> biner;
                konversiBiner(biner);
                cout << endl;
				break;
            case 2:
				cout << "=== OKTAL ===\n";
                cout << "Masukkan bilangan Oktal: ";
                cin >> oktal;
                konversiOktal(oktal);
                cout << endl;
                break;
			case 3:
                cout << "=== DESIMAL ===\n";
                cout << "Masukkan bilangan Desimal: ";
                cin >> desimal;
                konversiDesimal(desimal);
                cout << endl;
				break;
            case 4:
                cout << "=== HEKSADESIMAL ===\n";
                cout << "Masukkan bilangan Heksadesimal: ";
                cin >> heksadesimal;
                konversiHeksadesimal(heksadesimal);
                cout << endl;
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program ini!\n";
                ulang = true;
				break;
        }
    }
}