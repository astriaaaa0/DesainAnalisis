#include <iostream>  //insert sort, kwik sort, setter getter
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
int main()
{
	int n = 5;
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);

cout << "Array sebelum di urutkan : "<<endl;

for (int i =0 ; i<n; i++){
	cout << arr[i]<< " ";
}
cout << endl;

cout << "Array sesudah di urutkan : "<< endl;
    insertionSort(arr, N);
    printArray(arr, N);
 
    return 0;
}
