#include <iostream>
using namespace std;

class Mahasiswa{
public:
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs; //object
     mhs.nim = 2021;
    mhs.nama = "ChocoCip";
    mhs.nilai = 89.5;
    mhs.printData();

}