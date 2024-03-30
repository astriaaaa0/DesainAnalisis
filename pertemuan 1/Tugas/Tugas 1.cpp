#include <iostream>
#include <string>

using namespace std;

void Array(string bk[], int k) 
{
    int i, j;
    string temp;
    for (i=0; i<k; i++) {
        for(j=0; j<k-i-1; j++) {
            if(bk[j] > bk[j+1]) { 
            temp = bk[j];
            bk[j] = bk[j + 1];
            bk[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int k;
    string Bk[100];

    cout << "Masukkan Banyak Buku = ";
    cin >>k;
    cin.ignore();
    
    cout <<endl;
    for (int i=0; i<k; i++)
    {
        cout << "Judul Buku Ke " <<i+1<< " = ";
        getline(cin, Bk[i]);
    }
//	cout<<endl;
    cout << "\nData Setelah Sorting =\n";
    Array(Bk, k);
    for (int i=0; i<k; i++) {
        cout << Bk[i] << endl;
    }
//    cout << endl;

    return 0;
}
