//#include<iostream>
//using namespace std;
//
//void swap (int arr[], int pos1, int pos2){
//	int temp;
//	temp = arr[pos1];
//	arr[pos1] = arr[pos2];
//	arr[pos2] = temp;
//}
//int part (int arr[], int low, int high, int piv){
//	int i = low;
//	int j = low;
//	while (i <= high){
//		if(arr[i] > piv){
//			i++;
//		}
//		else{
//			swap (arr, i, j);
//			i++;
//			j++;
//		}
//	}
//	return j-1;
//}
//
//void quicksort (int arr[], int low, int high){
//	if (low < high){
//		int piv = arr[high];
//		int pos = part(arr, low, high, piv);
//		
//		quicksort (arr, low, pos-1);
//		quicksort (arr, pos+1, high);
//	}
//}
//
//int main(){
//	int n;
//	cout<< "Tentukan Panjang Array = ";
//	cin>> n;
//	int arr[n];
//	for (int i=0; i<n; i++){
//		cin>> arr[i];
//	}
//	quicksort (arr, 0, n-1);
//	cout<< "Berikut adalah Array yang telah di sortir = ";
//	for (int i=0; i<n; i++){
//		cout<< arr[i]<<"\t";
//	}
//}


#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
	int x, y, z;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	for(x = 0; x < n1; x++)
		L[x] = arr[l+x];
	for(y = 0; y < n2; y++)
		R[y] = arr[m+1+y]
	;
	
	x = 0;
	y = 0;
	z = 1;
	
	while (x < n1 && y < n2)
	{
		if (L[x] <= R[y]){
			arr[z] = L[x];
			x++;
		}
		else{
			arr[z] =  L[x];
			y++;
		}
		z++;
	}
	while (x < n2){
		arr[z] = L[x];
		x++;
		z++;
	}
	
	while (y < n2){
		arr[z] = R[y];
		y++;
		z++;
	}
}

void mergesort (int arr[], int l, int r){
	if(l < r){
		int m = l + (r - 1) / 2;
		
		mergesort(arr, l, m);
		mergesort(arr, m + 1, r);
		
		merge(arr, l, m, r);
	}
}

void show(int A[], int size){
	int i;
	for (i = 0; i < size; i++)
		cout<< A[i]<<" ";
}

int main(){
	int size;
	cout<< "\nMasukan Banyak Data = ";
	cin>> size;
	
	int arr[size];
	
	for (int i = 0; i < size; i++){
		cout<<"\nMasukan Data Array ke "<<i<<" = ";
		cin>>arr[i];
	}
	
	mergesort(arr, 0, size);
		cout<<"Hasil\n";
		show(arr, size);
		return 0;
}
