
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{
    
	setlocale(LC_ALL, "Russian");

	char *slovo, *razd = " .,";
	int  dl;
	int  ka = 0, i, p = 1;

    char a[80];
    printf("Введите текст: ");
    gets(a);
	
	dl = strlen(slovo);

    for (i=0; i<strlen(a); i++)
        if(a[i]==' ' && a[i+1]!=' ') p=i;
    for( i=p; i<strlen(a); i++)
        if (a[i] == 'x' || a[i] == 'X')
			ka++;

	cout << "Количество букв X в тексте: " << ka << endl;

	return 0;
}
