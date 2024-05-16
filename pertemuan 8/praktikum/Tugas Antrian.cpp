#include <iostream>
using namespace std;

const int MAX = 100;

// DECLARATION OF CLASS
class Queue {
private:
    int front, rear, count;
    int arr[MAX];
    
public:
    Queue() {
        front = 0;
        rear = MAX - 1;
        count = 0;
    }
    
    void enqueue(int x) {
        if (count >= MAX) {
            cout << "Antrian Penuh." << endl;
            return;
        }
        rear = (rear + 1) % MAX;
        arr[rear] = x;
        count++;
    }
    
    int dequeue() {
        if (count <= 0) {
            cout << "Antrian Kosong." << endl;
            return -1;
        } 
        int x = arr[front];
        front = (front + 1) % MAX;
        count--;
        return x;
    }
    
    int peek() {
        if (count <= 0) {
            cout << "Antrian Kosong." << endl;
            return -1;
        }
        return arr[front];
    }
    
    int size() {
        return count;
    }
    
    bool isEmpty() {
        return count == 0; 
    }
    
    bool isFull() {
        return count == MAX;
    }

    void display() {
        if (count <= 0) {
            cout << "Antrian Kosong." << endl;
            return;
        }
        cout << "Isi antrian: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % MAX] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;
    
    do {
        cout << "Menu:" << endl;
        cout << "1. Masukkan nomor peserta kedalam antrian (enqueue)" << endl;
        cout << "2. Hapus nomor peserta terakhir di antrian (dequeue)" << endl;
        cout << "3. Tampilkan semua nomor peserta dalam antrian" << endl;
        cout << "4. Keluar dari program antrian" << endl << endl;
        cout << "Pilih (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Masukkan nomor peserta: ";
                cin >> value;
                q.enqueue(value);
                break;
                
            case 2:
                value = q.dequeue();
                if (value != -1) {
                    cout << "Nomor peserta yang dihapus dari antrian: " << value << endl;
                }
                break;
                
            case 3:
                q.display();
                break;
                
            case 4:
                cout << "Terima kasih...." << endl;
                break;
                
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (choice != 4);
    
    return 0;
}

