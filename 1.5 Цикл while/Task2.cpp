/*Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.

Формат входных данных
Вводится целое положительное число.

Формат выходных данных
Выведите ответ на задачу.*/

#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n;
    p = 2;
    while (n%p != 0) p++;
    cout<< p;
    return 0;
}
