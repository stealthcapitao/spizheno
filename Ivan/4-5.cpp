#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	int repeat = 1;

	while (repeat == 1) {

		// основная программа

		cout << "Выберите практическую (1 или 2):" << endl;

		int ex;

		cin >> ex;

		switch (ex) {

		case 1:
		{

			cout << "Выбрана 1 практическая" << endl;

			int i = 1;

			cout << "Введите n" << endl;
			int n;
			cin >> n;

			cout << "Введите b" << endl;
			float y, b;
			cin >> b;

			// выбор способа решения

			cout << "Выберите способ решения (1 - while, 2 - do..while, 3 - for)" << endl;

			int method;

			cin >> method;

			switch (method) {

			case 1:
				while (i <= n) {

					y = 2 * i + sqrt(3 * i + pow(b, 2));

					i++;

				};

				cout << "Ваш ответ: " << y << endl;
				break;

			case 2:
				do {
					y = 2 * i + sqrt(3 * i + pow(b, 2));
					i++;
				} while (i <= n);

				cout << "Ваш ответ: " << y << endl;
				break;

			case 3:
				for (i = 1; i <= n; i++) {
					y = 2 * i + sqrt(3 * i + pow(b, 2));
				};

				cout << "Ваш ответ: " << y << endl;
				break;

			default:
				cout << "Выбран некорректный способ решения" << endl;

			};

			// конец выбора способа решения

			break;

		};

		case 2:
		{

			int i = 1;
			int multi;
			int sum = 0;

			cout << "Выбрана 2 практическая" << endl;

			cout << "Введите A:" << endl;
			int a;
			cin >> a;

			cout << "Введите B:" << endl;
			int b;
			cin >> b;

			// выбор способа решения

			cout << "Выберите способ решения (1 - while, 2 - do..while, 3 - for)" << endl;

			int method;
			multi = a * b;

			cin >> method;

			switch (method) {

			case 1:
				
				while (i < multi) {

					if (i % 2 == 0) {
					sum = sum + i;
					};

					i++;
					
				};

				cout << "Сумма четных чисел, меньших A*B: " << sum << endl;
				break;

			case 2:
				
				do {

					if (i % 2 == 0) {
						sum = sum + i;
					};

					i++;

				} while (i < multi);

				cout << "Сумма четных чисел, меньших A*B: " << sum << endl;
				break;

			case 3:
				
				for (i = 1; i < multi; i++) {
					if (i % 2 == 0) {
						sum = sum + i;
					};
				};

				cout << "Сумма четных чисел, меньших A*B: " << sum << endl;
				break;

			default:
				cout << "Выбран некорректный способ решения" << endl;

			};

			// конец выбора способа решения

			break;
		};

		default:
		{
			cout << "Так не бывает.." << endl;
			break;
		};

		};

		// конец основной программы

		cout << "Повторяем программу? 1 - Да, Любая другая клавиша - Нет" << endl;

		cin >> repeat;

	};

	return 0;

}end.
