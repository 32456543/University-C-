#include <iostream>

class BankAccount {
public:
    BankAccount(int accountNumber) : accountNumber(accountNumber), balance(0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Счет " << accountNumber << " пополнен на " << amount << " рублей. Новый баланс: " << balance << " рублей." << std::endl;
        } else {
            std::cout << "Ошибка: Неверная сумма для пополнения счета." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Со счета " << accountNumber << " снято " << amount << " рублей. Новый баланс: " << balance << " рублей." << std::endl;
        } else {
            std::cout << "Ошибка: Неверная сумма для снятия средств или недостаточно средств на счете." << std::endl;
        }
    }

private:
    int accountNumber;
    double balance;
};

int main() {
    BankAccount account1(123456);

    account1.deposit(1000);
    account1.withdraw(500);
    account1.withdraw(700);

    return 0;
}