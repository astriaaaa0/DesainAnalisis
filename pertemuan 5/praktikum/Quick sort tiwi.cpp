#include <iostream>
using namespace std;

int main() {
    char oper;
    char status;
    float num1, num2;

    do {
        cout << "Masukan Dua Angka : ";
        cin >> num1 >> num2;
        cout << "Pilih Tanda (+, -, *, /) : ";
        cin >> oper;
        switch (oper) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error!" << endl;
                break;
            default:
                cout << "Error! Tanda Tidak Valid." << endl;
                break;
        }
        cout << "Apa Anda Ingin Melanjutkan (y/n)? ";
        cin >> status;
    } while (status == 'y' || status == 'Y');

    return 0;
}

