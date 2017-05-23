#include <iostream>
#include <Windows.h>
//#include <locale>
#include "complex.h"

using namespace std;

int prompt_menu_item()
{
int item;
cout <<"выберите вариант: " << endl;
cout << "0. выход " << endl
	<< "1. конструктор по умолчанию" << endl
	<< "2. конструктор-преобразователь из вещественных чисел" << endl
	<< "3. конструктор с двумя параметрами" << endl
	<< "4. унарный минус (-)" << endl
	<< "5. сложение (+)" << endl
	<< "6. вычитание (-)" << endl
	<< "7. умножение(*)" << endl
	<< "8. деление (/)" << endl
	<< "9. сложение с присвоением (+=)" << endl
	<< "10. вычитание с присвоением (-=)" << endl
	<< "11. равенство или неравенство (==, !=)" << endl;
cout << ">>> ";
cin >> item;
return item;
}

int main(int argc, char* argv[])
{
	// setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	for (;;)
	{
		int item = prompt_menu_item(); 

		if (item == 0)
		{
			return 0;
		}
		else if (item == 1)
		{
			Complex c;

			cout << "Число по умолчанию: " << c << "; вещественная часть: " << c.realPart() << "; мнимая часть: " << c.imaginaryPart() << endl;
		}
		else if (item == 2)
		{
			double d;
			cout << "Введите вещественное число: ";
			cin >> d;

			Complex c(d);
			cout << "Комплексное число: " << c << "; вещественная часть: " << c.realPart() << "; мнимая часть: " << c.imaginaryPart() << endl;
		}
		else if (item == 3)
		{			
			double re;
			cout << "Введите вещественную часть: ";
			cin >> re;

			double im;
			cout << "Введите мнимую часть: ";
			cin >> im;

			Complex c(re, im);
			cout << "Комплексное число: " << c << "; вещественная часть: " << c.realPart() << "; мнимая часть: " << c.imaginaryPart() << endl;
		}
		else if (item == 4)
		{
			double re;
			cout << "Введите вещественную часть: ";
			cin >> re;

			double im;
			cout << "Введите мнимую часть: ";
			cin >> im;

			Complex c(re, im);
			cout << "-с = " << -c << endl;
		}
		else if (item == 5)
		{
			double re1, im1;
			cout << "Введите вещественную и мнимую части первого числа (через пробел): ";
			cin >> re1 >> im1;
			Complex a(re1, im1);

			double re2, im2;
			cout << "Введите вещественную и мнимую части второго числа (через пробел): ";
			cin >> re2 >> im2;
			Complex b(re2, im2);

			cout << a << " + " << b << " = " << a + b << endl;
			
		}
		else if (item == 6)
		{
			double re1, im1;
			cout << "Введите вещественную и мнимую части первого числа (через пробел): ";
			cin >> re1 >> im1;
			Complex a(re1, im1);

			double re2, im2;
			cout << "Введите вещественную и мнимую части второго числа (через пробел): ";
			cin >> re2 >> im2;
			Complex b(re2, im2);

			cout << a << " - " << b << " = " << a - b << endl;
		}
		else if (item == 7)
		{
			double re1, im1;
			cout << "Введите вещественную и мнимую части первого числа (через пробел): ";
			cin >> re1 >> im1;
			Complex a(re1, im1);

			double re2, im2;
			cout << "Введите вещественную и мнимую части второго числа (через пробел): ";
			cin >> re2 >> im2;
			Complex b(re2, im2);

			cout << a << " * " << b << " = " << a * b << endl;
		}
		else if (item == 8)
		{
			double re1, im1;
			cout << "Введите вещественную и мнимую части первого числа (через пробел): ";
			cin >> re1 >> im1;
			Complex a(re1, im1);

			double re2, im2;
			cout << "Введите вещественную и мнимую части второго числа (через пробел): ";
			cin >> re2 >> im2;
			Complex b(re2, im2);

			cout << a << " / " << b << " = " << a / b << endl;
		}
		else if (item == 9)
		{		
			double re1, im1;
			cout << "Введите вещественную и мнимую части первого числа (через пробел): ";
			cin >> re1 >> im1;
			Complex a(re1, im1);

			double re2, im2;
			cout << "Введите вещественную и мнимую части второго числа (через пробел): ";
			cin >> re2 >> im2;
			Complex b(re2, im2);

			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			cout << a << " += " << b << " = " << (a += b) << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
		}
		else if (item == 10)
		{		
			double re1, im1;
			cout << "Введите вещественную и мнимую части первого числа (через пробел): ";
			cin >> re1 >> im1;
			Complex a(re1, im1);

			double re2, im2;
			cout << "Введите вещественную и мнимую части второго числа (через пробел): ";
			cin >> re2 >> im2;
			Complex b(re2, im2);

			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
			cout << a << " -= " << b << " = " << (a -= b) << endl;
			cout << "a = " << a << endl;
			cout << "b = " << b << endl;
		}
		else if (item == 11)
		{
			double re1, im1;
			cout << "Введите вещественную и мнимую части первого числа (через пробел): ";
			cin >> re1 >> im1;
			Complex a(re1, im1);

			double re2, im2;
			cout << "Введите вещественную и мнимую части второго числа (через пробел): ";
			cin >> re2 >> im2;
			Complex b(re2, im2);

			if (a == b)
				cout << a << " == " << b << endl;
			else if (a != b)
				cout << a << " != " << b << endl;
			else
				cout << "Что-то страшное случилось...";
			
		}
		else
		{
		cerr << "Вы выбрали неверный вариант" << endl;
		exit(EXIT_FAILURE);
		}

		cout << endl;
	}

return 0;
}
