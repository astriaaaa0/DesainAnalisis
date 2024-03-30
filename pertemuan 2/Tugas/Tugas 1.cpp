#include <iostream>
#include <algorithm>

using namespace std;

int partisi(int arr[], int rendah, int tinggi) {
    int piv = arr[tinggi];
    int j = tinggi - 1;

    for (int i=rendah; i<tinggi; i++) {
        if (arr[i]>piv) {
            j++;
            
        swap(arr[j], arr[i]);
        }
    }
    
    swap(arr[j + 1], arr[tinggi]);
	return j + 1;
}

void quicksort(int temp[], int rendah, int tinggi) {
    if (rendah < tinggi) {
        int piv = partisi(temp, rendah, tinggi);

        cout << "[ ";
        for (int j=0; j<10; j++) {
            cout << temp[j] << " ";
        }
        
        cout << " ]";
        cout << endl;

        quicksort(temp, rendah, piv - 1);
        quicksort(temp, piv + 1, tinggi);
    }
}

int main() {
    int arr[10];
    
    cout<<"Masukkan 10 Data = " <<" [ ";
    for(int j = 0; j < 10; j++) {
        cin >> arr[j];
    }
    cout << "]" << endl;
    system("cls");
    
    cout<< "Data yang akan di Sort =" <<" [ ";
    for(int j = 0; j < 10; j++) {
        cout << arr[j] << " ";
    }
    cout<<"]" << endl;
    cout<<endl;
	
	cout<< "Quick Sort = \n" << endl;
    quicksort(arr, 0, 10 - 1);

    return 0;
}

