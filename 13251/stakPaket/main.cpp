#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;
int top=-1;
string barang[MAX];
int berat[MAX];
string kota[MAX];
void push(){
    if(top >= MAX){
        cout << ">> Stack sudah Penuh !" << endl;
    }else{
        top++;

        cout << " Masukan Nama Barang : ";
        cin >> barang[top];
        cout << " Masukkan Berat Barang  : ";
        cin >> berat[top];
        cout << " Masukkan Kota Tujuan   : ";
        cin >> kota[top];
        cout << " Pada Index ke " << top <<endl;

    }
}
void pop(){
    if(top == -1){
        cout << ">> Stack Kosong !" << endl;
    }else{
        cout << " Data '" << barang[top] << "' pada index ke [" << top << "] dalam Stack Diambil !" << endl;
        barang[top--];
    }
}

void Print(){
    cout << "                                     Stack                                     ";
        cout << "\n=============================================================================" << endl;
        cout << "Nama Barang\t\t" << "Berat Barang\t\t" << "Asal Kota\t\t";
    if (top == -1) {
        cout << "\n=============================================================================" << endl;
        cout << "\t\t\tEmpty !" << endl;
        cout << "=============================================================================" << endl;
    }
    else {
        cout << "\n=============================================================================" << endl;
 for (int i = top; i >= 0; i--){
  cout << barang[i] <<"\t\t\t" << berat[i] << " kg\t\t\t" << kota[i] << endl;
 }
 cout << "====================================================================================" << endl;
    }
}
int main()
{
    int choose;
    do {
        Print();
        cout << "\n 1. Push"
             << "\n 2. Pop"
             << "\n 3. Exit"
             << "\n Pergerakan ( TOP ) : " << top
             << "\n\n >> Choose : "; cin >> choose;
        switch (choose){
            case 1:
                push(); getch();
                break;

            case 2:
                pop(); getch();
                break;

            case 3:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                break;

            default:
                cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;

        }
        }
    while(choose !=3);
}
