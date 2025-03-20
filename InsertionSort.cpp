#include <iostream>
using namespace std;

int arr[20]; //array dengan panjang maksimal 20
int n; // variabel jumlah elemen dalam array

void input(){
    while (true){
        cout << "Masukkan jumlah data pada array (maksimal 20): ";
        cin >> n;    
    }
    cout << "\nArray yang anda masukkan maksimal 20 elemen.\n";
    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }

}

