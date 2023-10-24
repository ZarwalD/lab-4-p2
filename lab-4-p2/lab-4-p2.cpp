#include <iostream>
#include <clocale>

/**
 *
 * Даны два целых числа A и B (A < B).
 * Найти сумму квадратов всех це-лых чисел от A до B включительно.
 *
**/

int main()
{
    setlocale(LC_ALL, "ru");
    int i;
    std::cout << "Введите начало: ";
    std::cin >> i;
    int j;
    std::cout << "Введите конец: ";
    std::cin >> j;
    if (i > j)
    {
        std::cout << "Введите корректный диапазон" << std::endl;
        return 1;
    }
    int sum = 0;
    for (int k = i; k < j + 1; k++)
    {
        int square = k * k;
        sum += square;
    }
    std::cout << sum;
}