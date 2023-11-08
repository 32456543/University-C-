#include <iostream>
using namespace std;

int main() {

    int meters;
    cout << "Введите кол-во метров: ";
    cin >> meters;
    cout << "Количество километров: " << meters / 1000 << endl;

    return 0;
}
