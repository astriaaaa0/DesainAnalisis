#include <iostream>
using namespace std;

//void bubbleSort(int arr[], int n){
//	int i, j, tmp;
//	for (i=0; i<n; i++){
//		if (arr[j] > arr[j + 1]){
//			tmp = arr[j];
//			arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//		}
//	}
//}
//
//int main (){
//	int array[100], n, i, j;
//	cout<<"Masukan Banyak Elemen : ";
//	cin>>n;
//	cout<<"Masukan Nilai : \n";
//	for (i=0; i<n; i++){
//		cin>>array[i];
//	}
//	bubbleSort(array, n);
//	cout<<"Hasil Pengurutan dengan algpritma bubble Sort :\n ";
//	for (i=0; i<n; i++){
//		cout<<array[i]<< " ";
//	}
//	cout<<" \n";
//	return 0;
//}

int main(){
	int i, arr[3], j, temp;
	cout <<" x : ";
	for (i=0; i<4; i++){
		cin>>arr[i];
		
	}cout<<"\n";
	for (i=0; i<4; i++){
		for (j=0; j<4-i-1; j++){
			if (arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		cout<<"Tahap "<<i+1<<": ";
		for(j=0; j<4; j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nHasil : ";
		for(j=0; j<4; j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
		return 0;
}
	
	
