﻿#include <iostream>
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");//для отображение русских букв

	double a, b;


	cout << "Введите 2 числа:" << endl;//запрос чисел
	cin >> a >> b;// ввод переменных с клавиатуры
	cout << "Сумма двух чисел= " << a + b << endl;//сумму этих числе и вывод
	cout << "Разность двух чисел= " << a - b << endl;//разность этих чисел и вывод
	cout << "Среднее арифметическое их модулей= " << (double)(abs(a + b)) / 2 << endl;//Среднее арифметическое их модулей и вывод
	

}