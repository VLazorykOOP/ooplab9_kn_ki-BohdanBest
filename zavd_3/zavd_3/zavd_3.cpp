#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;

class Client {
public:
    int code;
    int year;
    int month;
    int duration;

    Client(int c, int y, int m, int d) {
        code = c;
        year = y;
        month = m;
        duration = d;
    }
};

bool compare_clients(Client c1, Client c2) {
    return c1.duration < c2.duration;
}

int main() {
    SetConsoleOutputCP(1251);
    vector<Client> clients = {
        Client(1, 2023, 1, 10),
        Client(2, 2023, 2, 5),
        Client(3, 2023, 3, 7),
        Client(4, 2023, 4, 5),
        Client(5, 2023, 5, 5),
        Client(6, 2023, 6, 3),
        Client(7, 2023, 7, 2),
        Client(8, 2023, 8, 5),
        Client(9, 2023, 9, 4),
        Client(10, 2023, 10, 5),
        Client(11, 2023, 11, 6),
        Client(12, 2023, 12, 5)
    };

    auto min_client = min_element(clients.begin(), clients.end(), compare_clients);

    cout << "Мінімальна тривалість занять: " << min_client->duration << endl;
    cout << "Рік: " << min_client->year << endl;
    cout << "Місяць: " << min_client->month << endl;

    return 0;
}