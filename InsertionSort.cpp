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

void InsertionSort(){
    int temp, j;
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while (j>= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void Display(){
    cout << "\nElement array yang telah tersusun: \n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    input();
    InsertionSort();
    Display();
    system("pause");
    return 0;
}