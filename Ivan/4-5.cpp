#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");

	int repeat = 1;

	while (repeat == 1) {

		// �������� ���������

		cout << "�������� ������������ (1 ��� 2):" << endl;

		int ex;

		cin >> ex;

		switch (ex) {

		case 1:
		{

			cout << "������� 1 ������������" << endl;

			int i = 1;

			cout << "������� n" << endl;
			int n;
			cin >> n;

			cout << "������� b" << endl;
			float y, b;
			cin >> b;

			// ����� ������� �������

			cout << "�������� ������ ������� (1 - while, 2 - do..while, 3 - for)" << endl;

			int method;

			cin >> method;

			switch (method) {

			case 1:
				while (i <= n) {

					y = 2 * i + sqrt(3 * i + pow(b, 2));

					i++;

				};

				cout << "��� �����: " << y << endl;
				break;

			case 2:
				do {
					y = 2 * i + sqrt(3 * i + pow(b, 2));
					i++;
				} while (i <= n);

				cout << "��� �����: " << y << endl;
				break;

			case 3:
				for (i = 1; i <= n; i++) {
					y = 2 * i + sqrt(3 * i + pow(b, 2));
				};

				cout << "��� �����: " << y << endl;
				break;

			default:
				cout << "������ ������������ ������ �������" << endl;

			};

			// ����� ������ ������� �������

			break;

		};

		case 2:
		{

			int i = 1;
			int multi;
			int sum = 0;

			cout << "������� 2 ������������" << endl;

			cout << "������� A:" << endl;
			int a;
			cin >> a;

			cout << "������� B:" << endl;
			int b;
			cin >> b;

			// ����� ������� �������

			cout << "�������� ������ ������� (1 - while, 2 - do..while, 3 - for)" << endl;

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

				cout << "����� ������ �����, ������� A*B: " << sum << endl;
				break;

			case 2:
				
				do {

					if (i % 2 == 0) {
						sum = sum + i;
					};

					i++;

				} while (i < multi);

				cout << "����� ������ �����, ������� A*B: " << sum << endl;
				break;

			case 3:
				
				for (i = 1; i < multi; i++) {
					if (i % 2 == 0) {
						sum = sum + i;
					};
				};

				cout << "����� ������ �����, ������� A*B: " << sum << endl;
				break;

			default:
				cout << "������ ������������ ������ �������" << endl;

			};

			// ����� ������ ������� �������

			break;
		};

		default:
		{
			cout << "��� �� ������.." << endl;
			break;
		};

		};

		// ����� �������� ���������

		cout << "��������� ���������? 1 - ��, ����� ������ ������� - ���" << endl;

		cin >> repeat;

	};

	return 0;

}end.
