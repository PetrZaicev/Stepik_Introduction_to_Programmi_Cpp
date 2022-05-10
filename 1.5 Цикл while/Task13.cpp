/*Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности.
Первый и последний элемент последовательности не являются локальными максимумами.

Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.

Формат входных данных
Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.*/

#include <iostream>
using namespace std;
int main() {
    int prv, cur, nxt;
    int count = 0;
    if (cin >> prv && prv)
    {
        if (cin >> cur && cur)
        {
            if (cin >> nxt)
            {
                while (nxt)
                {
                    if ((prv < cur) && (cur > nxt))
                        count++;
                    prv = cur;
                    cur = nxt;
                    cin >> nxt;
                }
            }
        }
    }
    cout << count;
	return 0;
}
