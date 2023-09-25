#include <iostream>

using namespace std;

int main() {
	int a, b;
	setlocale(LC_ALL, "ru");
	cout << "Введите переменную a:" << endl;
	cin >> a;
	cout << "Введите переменную b:" << endl;
	cin >> b;
	printf("%g", sqrt(a * b));
	return 0;
}