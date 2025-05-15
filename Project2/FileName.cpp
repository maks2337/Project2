//ПРАКТИЧЕСКАЯ РАБОТА № 2. Организация данных языка программирования С/С++ 1 задание программа определения объема цилиндра
#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
using namespace std;
int main() {
	float r = 0, h = 0, v = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите исходные данные:" << endl;
	cout << "Радиус основания (см) -> ";
	cin >> r;
	cout << "Высоту цилиндра (см) -> ";
	cin >> h;
	v = M_PI * h * r * r;
	cout << "Объем цилиндра " << v << "куб. см";
	system("pause");
	return 0;
}