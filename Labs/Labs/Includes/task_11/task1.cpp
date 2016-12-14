# include <iostream>
# include <stdio.h>
# include <time.h>
using namespace std;

void koli4estwo_ilementow (int k, int m, int mass [])
{
    int sum=0, kl=0, znak=0;
    for (int i=0; i<m; i++)
    {
        if (mass[i]%2==0)
        {
            kl++;
            sum+=mass[i]; 
        }
    }
    cout << " ____________________________________" << endl;
    cout << " "<< k+1 << " строка" << endl;
    cout << " Сумма четных элементов в строке:" << sum << endl;
    cout << " Количество четных элементов: " << kl << endl;
}

int main()
{
    int m=0;
    cout << " Введите размерность массива, не более 7: "; // ввод размерности массива
    cin >> m;
    if (m<0 || m>7) // провека на корректность ввода
    {
        cout << " Размерность введена не правильно !!!!" << endl;
        return 1;
    }

    int ** mass;
    mass = new int*[m];
    for (int i = 0; i<m; i++)
    {
        mass[i] = new int[m];
    }
    
    //int a [8][3]; // заводим массив размером 8х3
    
    srand (( unsigned) time(NULL)); // определение ГСЧ
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            mass[i][j]=rand()%19-8; // запись произвольного числа
        }
    }

    cout << " Изначальный массив:" << endl; // вывод сформулированого при помощи ГСЧ массива

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << mass[i][j] << "    ";
         }
         cout << endl;
    }
    cout << endl;
    
    for (int i=0; i<m; i++)
    {
        int k=i;
        koli4estwo_ilementow (k, m, mass [i]); // включение ф-ии
    }
    
    // 1 столбец- номер строки, 2 страка -сумма элементов  3 строка- количество четных чисел.
    
    cout << endl;
    
	for (int i=0; i<m; i++)
	{
		delete[] mass[i];
	}
	delete [] mass;
	
    system ("pause");
    return 0;
}
