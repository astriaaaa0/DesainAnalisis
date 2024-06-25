#include <iostream>
using namespace std;

int hashFunction(int key, int tableSize) {
    return key % tableSize;
}

void insertLinearProbing(int hashTable[], int tableSize, int key) {
    int index = hashFunction(key, tableSize);
    int originalIndex = index;
    while (hashTable[index] != -1) {
        index = (index + 1) % tableSize;
        if (index == originalIndex) {
            // Tabel penuh
            cout << "Tabel hash penuh, tidak bisa menambahkan " << key << endl;
            return;
        }
    }
    hashTable[index] = key;
}

bool searchLinearProbing(int hashTable[], int tableSize, int key) {
    int index = hashFunction(key, tableSize);
    int originalIndex = index;
    while (hashTable[index] != -1) {
        if (hashTable[index] == key) {
            return true;
        }
        index = (index + 1) % tableSize;
        if (index == originalIndex) {
            return false;
        }
    }
    return false;
}

void printHashTable(int hashTable[], int tableSize) {
    for (int i = 0; i < tableSize; i++) {
        if (hashTable[i] == -1) {
            cout << i << " --> Kosong" << endl;
        } else {
            cout << i << " --> " << hashTable[i] << endl;
        }
    }
}

int main() {
    int tableSize, numberOfElements;

    cout << "Masukkan ukuran tabel hash: ";
    cin >> tableSize;

    int hashTable[tableSize];
    for (int i = 0; i < tableSize; i++) {
        hashTable[i] = -1; // Inisialisasi tabel hash dengan -1 (Kosong)
    }

    cout << "Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> numberOfElements;

    int elements[numberOfElements];
    cout << "Masukkan " << numberOfElements << " elemen: \n";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> elements[i];
    }

    for (int i = 0; i < numberOfElements; i++) {
        insertLinearProbing(hashTable, tableSize, elements[i]);
    }

    cout << "Isi Tabel Hash:" << endl;
    printHashTable(hashTable, tableSize);

    int searchKey;
    cout << "Masukkan elemen yang ingin dicari dalam tabel hash: ";
    cin >> searchKey;

    if (searchLinearProbing(hashTable, tableSize, searchKey)) {
        cout << searchKey << " ditemukan dalam tabel hash." << endl;
    } else {
        cout << searchKey << " tidak ditemukan dalam tabel hash." << endl;
    }

    return 0;
}

