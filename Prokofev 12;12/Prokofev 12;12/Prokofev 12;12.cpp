// Prokofev 12;12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "");
    int n;
    int sum = 0;

    cout << "Введите значение n: ";
    cin >> n;

    // Находим сумму первых n чисел
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Сумма чисел от 1 до " << n << " равна: " << sum << endl;

    return 0;
}