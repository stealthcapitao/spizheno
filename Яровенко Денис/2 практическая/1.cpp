#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
    int number;
    cout<<"Выберите:\n";
    cout<<"\"1\", решение первой задачи"<<endl;
    cout<<"\"2\", решение второй задачи"<<endl;
    cout<<"\"3\", выход из программы"<<endl;
    cin>>number;
	
    switch (number)
    {
        case 1:
            int one;
			cout<<"\tВыберите метод решения задачи: "<<endl;
            cout<<"\t\"1\" решение с помощью условного оператора"<<endl;
            cout<<"\t\"2\" решение с помощью тернарного оператора"<<endl;
            cout<<"\t\"3\", выход из программы"<<endl;
            cin>>one;
            switch (one)
            {
                float x;
                float y;
                case 1:
                    cout<<"Введите х = ";
                    cin>>x;
                    if (x < 2) {
                        y = x - 3;
                    }
                    else {
                        y = (2*(x*x)) - 1;
                    }
                    cout<<"Результат = "<< y;
                    break;
                case 2:
                    cout<<"Введите х = ";
                    cin>>x;
                    x < 2 ? y = x - 3 : y = (2*(x*x)) - 1;
                    cout<<"Результат = "<< y;
                    break;
                case 3:
                   return 0;
                   break;
                default:
                    cout<<"Такого варианта нет!"<<endl;
            }
            break;
        case 2:
            int two;
            cout<<"\tВведете \"1\" задача будет решена с помощью условного оператора"<<endl;
            cout<<"\tВведете \"2\" задача будет решена с помощью тернарного оператора"<<endl;
            cout<<"\tВыберите способ решения задачи: ";
            cin>>two;
            switch (two)
            {
                float x2;
                float y2;
                case 1:
                    cout<<"Введите х = ";
                    cin>>x2;
                    if (x2 < -4) {
                        y2 = 5 + x2;
                    }
                    else if (x2 > 5) {
                        y2 = 1 - pow(x2, 2);
                    }
                    else {
                        y2 = 7 * x2 - 1;
                    }
                    cout<<"Результат = "<< y2;
                    break;
                case 2:
                    cout<<"Введите х = ";
                    cin>>x2;
                    (x2 < -4) ? y2 = 5 + x2 : (x2 > 5) ?  y2 = 1 - pow(x2, 2) : y2 = 7 * x2 - 1;
					cout<<"Результат = "<< y2;
		       case 3:
		           return 0;
                   break;
            }
            break;
        case 3:
           return 0;
           break;
        default:
            cout<<"Такого варианта нет!!"<<endl;
    }
    return 0;
}
