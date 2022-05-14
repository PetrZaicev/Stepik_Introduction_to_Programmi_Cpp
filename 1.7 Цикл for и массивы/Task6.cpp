/* Выведите значение наименьшего из всех положительных элементов в массиве. Известно, что в массиве есть хотя бы один положительный элемент.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу. */

#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector <int> A(n);
    int k = 1000;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] > 0 && A[i] < k)
        {
            k = A[i];
        }
    }
    cout << k << endl << endl;
}
