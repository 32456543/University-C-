#include <iostream>
using namespace std;

int main() {
    
    int fahrenheit;
    cout << "Введите градусы в Цельсиях: ";
    cin >> fahrenheit;
    cout << "Температура в Фаренгейтах: " << (fahrenheit * 1.8) + 32 << endl;

    return 0;
}
