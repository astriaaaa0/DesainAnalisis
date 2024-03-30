#include<iostream>
using namespace std;

int main (){
	int  j;
	
	cout<<"Masukan Banyak Elemen : ";
	cin>>j;
	cout<<endl;
	
	int array[j];
	
	for (int i=0; i<j; i++){
		cout<<"Masukan Angka ke-" <<i+1<< "= ";
		cin>>array[i];
		cout<<endl;
	}
	
	for (int i=1; i<j; i++){
		int temp = array[i];
		int n = i - 1;
		while (n >= 0 && array[n] > temp){
			array [n+1] = array[n];
			n = n - 1;
		}	
		array[n+1]=temp;
		
		cout<<"Proses Sorting ke "<< i <<endl;
		for (int m=0; m<j; m++)
			cout<<array[m] << " ";
			cout<<endl;
		}
		
		cout<<"Hasil Akhir \n";
		for (int i=0; i<j; i++)
			cout<<array
			[i]<< " ";
			cout<<endl;
		
		return 0;
	}

