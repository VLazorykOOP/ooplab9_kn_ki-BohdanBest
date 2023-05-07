#include <iostream>
#include <vector>
#include <set>
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

    bool check_second_half_in_first_half() {
        set<int> first_half(v.begin(), v.begin() + n / 2);
        set<int> second_half(v.begin() + n / 2, v.end());
        return includes(first_half.begin(), first_half.end(), second_half.begin(), second_half.end());
    }
};

int main() {
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів вектора: ";
    cin >> n;

    if (n % 2 != 0) {
        cout << "Кількість елементів має бути парною!" << endl;
        return 0;
    }

    Vector v(n);
    v.read();

    bool result = v.check_second_half_in_first_half();

    cout << (result ? "true" : "false") << endl;

    return 0;
}
