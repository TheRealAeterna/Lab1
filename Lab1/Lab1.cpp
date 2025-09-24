#include <iostream>
#include <typeinfo>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus"); //настройка для вывода на русском языке


	double a, b; // введены переменные типа double
	/*
	границы типа данных double
	вычисляются через numeric_limits<>
	*/

	cout << "границы для типа double: " << endl
		<< "способ вычисления: numeric_limits<>:" << endl
		<< "верхняя граница = " << numeric_limits<double>::max() << endl
		<< "нижняя граница = " << numeric_limits<double>::lowest() << endl; // вычисление границ double через numeric_limits<double>

	cout << "введите числа а и b:" << endl;   

	cout << "a = ";       // ввод через cin
	cin >> a;

	cout << "b = ";
	cin >> b;
	
	cout << "размер а " << sizeof(a) << " байт" << endl;
	cout << "используемый тип данных для а " << typeid(a).name() << endl << endl;

	cout << "size of b is " << sizeof(b) << " байт" << endl;
	cout << "используемый тип данных для b " << typeid(b).name() << endl << endl;

	double sum = a + b;
	double mult = a * b;

	double diff_pair_ab = a - b;
	double diff_pair_ba = b - a;

	double div_pair_ab = a / b;
	double div_pair_ba = b / a;

	cout << "a + b = sum = " << sum << endl << "используемый тип данных для переменной sum: " << typeid(sum).name() << endl;
	cout << "a * b = mult = " << mult << endl << "используемый тип данных для переменной mult: " << typeid(sum).name() << endl;

	cout << "a - b = diff_pair_ab = " << diff_pair_ab << endl << "используемый тип данных для переменной diff_pair_ab: " << typeid(diff_pair_ab).name() << endl;
	cout << "b - a = diff_pair_ba = " << diff_pair_ba << endl << "используемый тип данных для переменной diff_pair_ba: " << typeid(diff_pair_ba).name() << endl;

	cout << "a / b = div_pair_ab= " << div_pair_ab << endl << "используемый тип данных для переменной div_pair_ab: " << typeid(sum).name() << endl;
	cout << "a * b = div_pair_ba= " << div_pair_ba << endl << "используемый тип данных для переменной div_pair_ba: " << typeid(sum).name() << endl;

	return 0;
}

