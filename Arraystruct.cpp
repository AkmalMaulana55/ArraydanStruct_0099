#include <iostream>
#include <string>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
    Orang mhs[3];

    for (int i = 0; i <= 2; i++)
    {
    // Mengisi data
    cout << "Mengisi Data" << endl;
    cout << "Nama : " ;
    getline(cin , mhs[i].nama);
    cout << "Desa : ";
    getline(cin , mhs[i].alamat.desa);
    cout << "Kota : ";
    getline(cin , mhs[i].alamat.kota);
    cout << "Umur : ";
    cin >> mhs[i].umur;
    cout << endl;
    cin.ignore();
    }
}