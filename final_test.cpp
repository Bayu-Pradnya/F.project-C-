#include <iostream>
#include <cstring>
using namespace std;

char* pointer(char *kata){
    char* ptr1 = kata;
    char* ptr2 = kata;

    int len = strlen(kata);
    if(len >= 2){
        char first = kata[0];
        char last = kata[len-1];
        ptr1[len-1] = first;
        ptr2[0] = last;
    }

    return kata;
}

double persegi(double sisi){
    double hasil = 0;
    hasil = sisi * sisi;
    return hasil;
}

double persepan(double pan, double leb){
    double hasil = 0;
    hasil = pan * leb;
    return hasil;
}

double lingkaran(double rusuk){
    double phi = 3.14;
    double hasil = 0;
    hasil = phi * rusuk * rusuk;
    return hasil;
}

double kubus(double sisi){
    double hasil = 0;
    hasil = sisi * sisi * sisi;
    return hasil;
}

double balok(double pan, double leb, double ting){
    double hasil = 0;
    hasil = pan * leb * ting;
    return hasil;
}

double tabung(double rusuk, double ting){
    double phi = 3.14;
    double hasil = 0;
    hasil = phi * rusuk * rusuk * ting;
    return hasil;
}

int main(){
    int N,M;
    char kata[100];
    bool kondisi = true;
    while(true){
        cout << "Silahkan pilih fungsi system : " << endl;
        cout << "1. Pointer" << endl;
        cout << "2. Luas dan Volume" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan pilihan : ";
        cin >> N;

        if(N == 1){
            cout << "Masukkan Kata : ";
            cin >> kata;
            cout << "Hasil = " << pointer(kata) << endl; 
        }

        else if(N == 2){
            while(kondisi){
                int pilih;
                cout << "Pilih bangun datar atau bangun ruang:\n";
                cout << "1. Luas Persegi\n";
                cout << "2. Luas Persegi panjang\n";
                cout << "3. Luas Lingkaran\n";
                cout << "4. Volume Kubus\n";
                cout << "5. Volume Balok\n";
                cout << "6. Volume Tabung\n";
                cout << "7. Keluar\n";
                cout << "Pilihan Anda:";
                cin  >> pilih;

                if(pilih == 1){
                    double sisi;
                    cout << "Masukkan panjang Sisi : ";
                    cin >> sisi;
                    cout << "Hasil = " << persegi(sisi) << endl; 
                }

                else if(pilih == 2){
                    double pan,leb;
                    cout << "Masukkan Panjang : ";
                    cin >> pan;
                    cout << "Masukkan Lebar : ";
                    cin >> leb;
                    cout << "Hasil = " << persepan(pan,leb) << endl; 
                }

                else if(pilih == 3){
                    double rusuk;
                    cout << "Masukkan panjang Rusuk : ";
                    cin >> rusuk;
                    cout << "Hasil = " << lingkaran(rusuk) << endl; 
                }

                else if(pilih == 4){
                    double sisi;
                    cout << "Masukkan panjang Sisi : ";
                    cin >> sisi;
                    cout << "Hasil = " << kubus(sisi) << endl; 
                }

                else if(pilih == 5){
                    double pan,leb,ting;
                    cout << "Masukkan Panjang : ";
                    cin >> pan;
                    cout << "Masukkan Lebar : ";
                    cin >> leb;
                    cout << "Masukkan Tinggi : ";
                    cin >> ting;
                    cout << "Hasil = " << balok(pan,leb,ting) << endl; 
                }

                else if(pilih == 6){
                    double rusuk,ting;
                    cout << "Masukkan panjang Rusuk : ";
                    cin >> rusuk;
                    cout << "Masukkan Tinggi : ";
                    cin >> ting;
                    cout << "Hasil = " << tabung(rusuk,ting) << endl; 
                }

                else if(pilih == 7){
                    break;
                }

                else{
                    cout << "Pilihan tidak ada" << endl ;
                }
            }
        }

        if(N == 3){
            break;
        }
    }
}

