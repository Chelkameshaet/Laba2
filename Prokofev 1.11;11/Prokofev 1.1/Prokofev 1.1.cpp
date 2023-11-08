// Prokofev 1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
    setlocale(LC_ALL, "");
    std::vector<int> sequence; 
    int num;

    
    std::cout << "Введите последовательность целых чисел (для завершения введите любой нечисловой символ):\n";
    while (std::cin >> num) {
        sequence.push_back(num);
    }

    if (sequence.empty()) {
        std::cout << "Последовательность пуста.\n";
    }
    else {
        
        int min_num = *std::min_element(sequence.begin(), sequence.end());

        
        int count = std::count(sequence.begin(), sequence.end(), min_num);

        
        std::cout << "Минимальное число: " << min_num << "\n";
        std::cout << "Количество повторений минимального числа: " << count << "\n";
    }

    return 0;
}