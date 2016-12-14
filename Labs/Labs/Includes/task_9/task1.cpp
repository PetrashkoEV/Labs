# include <iostream>
# include <stdio.h>
#include <time.h>
using namespace std;

const int strok=8, stolb=8;
int mass [strok][stolb];
int a [strok][3];

int koli4estwo_ilementow (int m)
{

	int str=0, sum=0,kl=0, znak=0;
	for (int i=1; i<=m; i++)
	{
		for ( int j=1; j<=m; j++)
		{
			if (mass[i][j]%2==0)
			{
				kl++;
				sum+=mass[i][j];
				a[i][1]=i; // номер строки
				a[i][2]=sum; //сумма положительных элементов в строке
				a[i][3]=kl; //количество положитнльных элементов
			}
			else if (mass[i][j]%2==1)
			{
                 znak++;
                 if (znak=m)
                 {
                    a[i][1]=i;
                  }
             }
		}
		kl=0, sum=0, znak=0;
	}
	return (a[m][3]);
}

int main()
{
	int m=0;
	cout << " Введите размерность массива, не более 7: ";
	cin >> m;
	if (m>7)
	{
		cout << " Размерность введена не правильно " << endl;
		return 1;
	}
	srand (( unsigned) time(NULL));
	for (int i=1; i<=m; i++)
	{
	    for (int j=1; j<=m; j++)
	    {
	        mass[i][j]=rand()%19-8;
        }
	}
	cout << " Изначальный массив: " << endl;
	for (int i=1; i<=m; i++)
	{
	    for (int j=1; j<=m; j++)
	    {
	        cout << mass[i][j] << "    ";
         }
	     cout << endl;
	}
	cout << endl;
	// включение ф-ии
	int z=0;
	z=koli4estwo_ilementow (m);
	// 1 столбец- номер строки, 2 страка -сумма элементов  3 строка- количество четных чисел.
	cout << "_______________________________________" << endl;
	cout << " № строки ||сумма + эл||кол-во чет. эл." << endl;
	for (int i=1; i<=m; i++)
	{
	    for (int j=1; j<=3; j++)
	    {
	        cout << "     "<< a[i][j] << "    ||";
        }
	    cout << endl;
	}
	cout << "_______________________________________"<< endl;
	cout << endl;
	system ("pause");
	return 0;
}
