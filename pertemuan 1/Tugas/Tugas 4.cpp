# include<iostream>
using namespace std;

int main (){
	int j;
	
	cout<<"Masukan jumlah elemen = ";
	cin>>j;
	cout<<endl;
	
	int array[j];

	cout<<"Masukkan Nilai Elemen = ";	
	for (int i=0; i<j; i++){
	cin>> array [i];
	}
	
	cout<<"Data Sebelum Sorting = ";
	for (int i=0; i<j; i++){
		cout<< array[i] << " ";
	}
	cout << endl;
	
    for (int i=0; i<j-1; i++) {
        int p=i;
        for (int n=i+1; n<j; n++) {
            if (array[n] < array[p]) {
                p=i;
            }
        }
  
        int temp = array[i];
        array[i] = array[p];
        array[p] = temp;

        cout << "Iterasi ke " << i+1 << "= " <<endl;
        for (int l=0; l<j; l++){
            cout << array[l] << " ";
		}
		cout <<endl;
    }
    
    cout << "Array Setelah Sorting = ";
    for (int i=0; i<j; i++)
    cout << array[i] << "  ";
    cout <<endl;
}
