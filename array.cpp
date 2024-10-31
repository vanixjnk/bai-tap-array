#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập n phần tử " << endl;
    cin >> n;
    if (n<1 || n > 9) {
        cout << "Không hợp lệ" << endl;
        return 1;
    }
    const int SIZE = n;
    int songuyen[SIZE];

    cout << "Dãy số nguyên có " << SIZE << " phần tử" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Nhập số nguyên thứ " << i + 1 << ": ";
        cin >> songuyen[i];
    }

    cout << "Dãy số nguyên là: {";
    for (int i = 0; i < SIZE; i++) {
        cout << songuyen[i];
        if (i < SIZE - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    cout << "Các phần tử chia hết cho 3 là: {";
    bool chiahetcho3 = true;  

    for (int i = 0; i < SIZE; i++) {
        if (songuyen[i] % 3 == 0) {
            if (!chiahetcho3) {
                cout << ", ";
            }
            cout << songuyen[i];
            chiahetcho3 = false;
        }
    }

    cout << "}" << endl;
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (songuyen[i]<0) {
            count += 1;
        }
    }

    cout << "Số lượng số âm có trong mảng là: " << count << endl;

    int tongcacso = 0;
    for (int i = 0; i < SIZE; i++) {
        tongcacso += songuyen[i];
    }
    cout << "Tổng các số trong mảng " << tongcacso << endl;

    int tongcacsoam = 0;
    for (int i = 0; i < SIZE; i++) {
        if (songuyen[i] < 0) {
            tongcacsoam += songuyen[i];
        }
    }
    
    cout << "Tổng các số âm trong mảng là " << tongcacsoam << endl;

    float trungbinhcong;
    for (int i = 0; i < SIZE; i++) {
        trungbinhcong = (tongcacso)/n;
    }
    cout << "Trung bình cộng của mảng là " << trungbinhcong << endl;

    float trungbinhcongam;
    for (int i = 0; i < SIZE; i++) {
        trungbinhcongam = (tongcacsoam)/(count);
    }
    cout << "Trung bình cộng của các số âm của mảng là " << trungbinhcongam << endl;
    
    return 0;
}
