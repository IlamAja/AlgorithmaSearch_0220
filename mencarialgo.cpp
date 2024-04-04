#include <iostream>
using namespace std;

int arr[20]; //array yang akan dicari
int n;       //jumlah elemen dalam array
int i;       //indeks elemen array

void input()
{
    while (true)
    {
        cout << "Masukkan jumlah elemen dalam array : ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray harus mempunyai minimal 1 dan maksimal 20 elemen.\n\n";
    }
    
    cout << "\n-----------------------\n";
    cout << "Masukkan elemen array";
    cout << "-----------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch()
{
    char ch;
    int ctr; //jumlah perbandingan
    int item;

    do
    {
        cout << "\nMasukkan elemen array yang mau anda cari : "; //step1
        cin >> item;

        ctr = 0;
        i = 0; //step2
     while (i < n) //step3
     {
        ctr++;
        if (arr[i] == item)
        {
            cout << "\n" << item << "ditemukan di posisi " << (i + 1) << endl; //step6
            break;
        }
        i++; //step4
     }

     if (i == n) //step 5
        cout << "\n" << item << "tidak ditemukan didalam array\n";
        cout << "\njumlah perbandingan : " << ctr << endl;

        cout << "\nLanjutkan pencarian (y/n) : ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
    
}

void display()
{
    
}