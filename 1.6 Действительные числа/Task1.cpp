/*Дано положительное действительное число X. Выведите его дробную часть.

Формат входных данных

Вводятся положительное действительное число.

Формат выходных данных
Выведите ответ на задачу.*/

#include <iostream>
using namespace std;

int main() {
	float x; cin >> x;
	int n = x;
	cout << x - (float)n << endl;

	return 0;
}
