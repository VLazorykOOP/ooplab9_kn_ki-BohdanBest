#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;

class Vector {
private:
    vector<int> v;
    int n;

public:
    Vector(int n) {
        this->n = n;
        v.resize(n);
    }

    void read() {
        cout << "Введіть елементи вектора: ";
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    }

    void sort() {
        std::sort(v.begin(), v.end());
    }

    int get_mid() {
        return n / 2;
    }

    int get_mid_prev() {
        return get_mid() - 1;
    }

    int get_mid_next() {
        return get_mid() + 1;
    }

    int get_mid_val() {
        return v[get_mid()];
    }

    int get_mid_prev_val() {
        return v[get_mid_prev()];
    }

    int get_mid_next_val() {
        return v[get_mid_next()];
    }
};

int main() {
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів вектора: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Кількість елементів має бути парною!" << endl;
        return 0;
    }

    Vector v(n);
    v.read();
    v.sort();

    int mid_val = v.get_mid_val();
    int mid_prev_val = v.get_mid_prev_val();
    int mid_next_val = v.get_mid_next_val();

    cout << "Середні елементи вектора: " << mid_prev_val << ", " << mid_val << ", " << mid_next_val << endl;

    return 0;
}