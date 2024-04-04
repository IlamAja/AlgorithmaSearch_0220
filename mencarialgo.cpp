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
    
}