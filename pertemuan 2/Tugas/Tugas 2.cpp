#include <iostream>

using namespace std;

void merge(int arr[], int mid, int right, int left) {
    int p1 = mid - left + 1;
    int p2 = right - mid;
    int S[p1], D[p2];

    for (int i = 0; i < p1; i++)
        S[i] = arr[left + i];
    for (int j = 0; j < p2; j++)
        D[j] = arr[mid + 1 + j];

    int i = 0, j = 0, l = left;
    while (i < p1 && j < p2) {
        if (S[i] >= D[j]) {
            arr[l] = S[i];
            i++;
        } else {
            arr[l] = D[j];
            j++;
        }
        l++;
    }
    while (i < p1) {
        arr[l] = S[i];
        i++;
        l++;
    }
    while (j < p2) {
        arr[l] = D[j];
        j++;
        l++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        cout << "Memecah List [";
        for (int i = left; i <= right; i++) {
            cout << arr[i];
            if (i != right)
                cout << ", ";
        }
        cout << "]\n";

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        cout << "Menggabungkan List [";
        for (int i = left; i <= right; i++) {
            cout << arr[i];
            if (i != right)
                cout << ", ";
        }
        cout << "]\n";
        merge(arr, left, mid, right);
    }
}

int main() {
    int r;
    cout << "Masukkan Jumlah Elemen yang dibutuhkan = ";
    cin >> r;

    int arr[r];
    cout << "Masukkan Elemen Array = ";
    for (int i = 0; i < r; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, r - 1);

    cout << "Hasil Setelah dilakukan Descending = [";
    for (int i = 0; i < r; i++) {
        cout << arr[i];
        if (i != r - 1)
            cout << ", ";
    }
    cout << "]\n";

    return 0;
}



