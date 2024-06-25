#include <iostream>
#include <vector>
#include <string>

using namespace std;

class HashTable {
private:
    vector<string> table; // Only storing the keys in the hash table
    int kapasitas;
    int ukuran;

    // Primary hash function for string
    int hash1(const string& key) const {
        int sum = 0;
        for (size_t i = 0; i < key.length(); ++i) {
            sum += key[i];
        }
        return sum % kapasitas;
    }

    // Secondary hash function for string
    int hash2(const string& key) const {
        int prime = kapasitas - 1; // Using a prime number less than capacity
        int sum = 0;
        for (size_t i = 0; i < key.length(); ++i) {
            sum += key[i];
        }
        return prime - (sum % prime);
    }

public:
    HashTable(int kap) : kapasitas(kap), ukuran(0) {
        table.resize(kapasitas, ""); // Initializing the table with default string ""
    }

    // Adding a key to the hash table
    bool insert(const string& key) {
        if (ukuran == kapasitas) {
            cout << "Hash table Penuh.\n";
            return false;
        }

        int index = hash1(key);
        int stepSize = hash2(key);

        // Double hashing to find the appropriate position
        while (!table[index].empty()) {
            index = (index + stepSize) % kapasitas;
        }

        table[index] = key;
        ukuran++;
        return true;
    }

    // Searching for a key in the hash table
    bool search(const string& key) const {
        int index = hash1(key);
        int stepSize = hash2(key);

        // Searching with double hashing
        while (!table[index].empty()) {
            if (table[index] == key) {
                return true; // Key found
            }
            index = (index + stepSize) % kapasitas;
        }

        return false; // Key not found
    }

    // Removing a key from the hash table
    bool remove(const string& key) {
        int index = hash1(key);
        int stepSize = hash2(key);

        // Removing with double hashing
        while (!table[index].empty()) {
            if (table[index] == key) {
                table[index].clear(); // Removing key by clearing the string
                ukuran--;
                return true; // Key removed
            }
            index = (index + stepSize) % kapasitas;
        }

        return false; // Key not found
    }

    // Displaying the contents of the hash table
    void display() const {
        for (int i = 0; i < kapasitas; ++i) {
            if (!table[i].empty()) {
                cout << i << ": " << table[i] << endl;
            } else {
                cout << i << ": Kosong" << endl;
            }
        }
    }
};

int main() {
    HashTable ht(5); // Creating a HashTable object with capacity 5

    // Adding some keys to the hash table
    ht.insert("kucing");
    ht.insert("anjing");
    ht.insert("burung");
    ht.insert("ikan");
    ht.insert("kadal");

    // Displaying the contents of the hash table
    cout << "Hash Table :" << endl;
    ht.display();

    // Searching for a key in the hash table
    string keyToFind;
    cout << endl;
    cout << "Masukan yang akan dicari : ";
    cin >> keyToFind;
    cout << "Mencari " << keyToFind << ": ";
    if (ht.search(keyToFind)) {
        cout << "Ketemu\n" << endl;
    } else {
        cout << "Kosong\n" << endl;
    }

    // Removing a key from the hash table
    string keyToRemove;
    cout << "Masukan yang akan dihapus : ";
    cin >> keyToRemove;
    cout << "Hapus " << keyToRemove << ": ";
    if (ht.remove(keyToRemove)) {
        cout << "Hapus" << endl;
    } else {
        cout << "Kosong" << endl;
    }

    // Displaying the contents of the hash table after removal
    cout << "\nHash Table setelah dihapus :" << endl;
    ht.display();

    return 0;
}

