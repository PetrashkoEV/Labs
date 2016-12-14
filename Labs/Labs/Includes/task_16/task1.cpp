#include <iostream>
#include <time.h>
using namespace std;

class obrabotka 
{
public:
	obrabotka (int n);
	void output_mass (int n) const; // вывод сформированого массива
	void module (int n); // "взятие" массива по модулю 
	void sorting (int n); // сортировка массива по убыванию
	void min_elem (int n, int & index_min, int & min_el); // вывод минимального элемента в массиве
	void nomer_min_elem (int n, int min_el) const; // вывод номера(номеров) минимального по модую элемента
	void output_min (int n, int & index_min); // вывод всех элементов, расположенных после первого минимального по модулю элемента.
	obrabotka (int min, int max, int n); // явный конструктор для ввода элементов в массив при помощи ГСЧ 
private:
	int mass[10];
};

obrabotka::obrabotka (int n)
{
	for (int i=0; i<n; i++)
	{
		cout << " Введите " << i+1 << "-элемент: ";
		cin >> mass[i];
	}
}

obrabotka::obrabotka(int min, int max, int n) // явный конструктор для ввода элементов в массив при помощи ГСЧ
{
	srand (( unsigned) time(NULL)); // определение ГСЗ
	for (int i=0; i<n; i++)
	{
		mass[i]=rand()%(max-min+1)+min; // формирование числа
	}
}

void obrabotka::output_mass (int n) const // вывод сформированого массива
{
	cout << ' ';
	for (int i=0; i<n; i++)
	{
		cout << mass[i] << " || ";
	}
	cout << endl << endl;
}

void obrabotka::module (int n) // "взятие" массива по модулю  
{
	for (int i=0; i<n; i++)
	{
		if (mass[i]<0)
		{
			mass[i]=-mass[i];
		}
	}
}

void obrabotka::min_elem (int n, int & index_min, int & min_el) // вывод минимального элемента в массиве
{
	min_el=mass[0];
	index_min=0;
	for (int i=1; i<n; i++)
	{
		if (mass[i]<min_el)
		{
			index_min=i;
			min_el=mass[i];
		}
	}
	cout << " Минимальное по модулю число: " << min_el << endl;
}

void obrabotka::nomer_min_elem (int n, int min_el) const // вывод номера(номеров) минимального по модую элемента 
{
    cout << " Номера минимальных по модулю элементов: ";
	for (int i=0; i<n; i++)
	{
		if (mass[i]==min_el)
		{
			cout << i+1 << ';';
		}
	}
	cout << endl;
}

void obrabotka::output_min (int n, int & index_min) // вывод всех элементов, расположенных после первого минимального по модулю элемента.
{
	cout << " Ввывод всех элементов после 1-го минимального по модулю элемента: " << endl;
	cout << ' ';
	for (int i=index_min+1; i<n; i++)
	{
		cout << mass[i] << " || ";
	}
	cout << endl;
}

void obrabotka::sorting (int n) // сортировка массива по убыванию
{
	cout << " Ввывод отсортированого массива: " << endl;
	// сортировка массива по методу "пузырька"
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (mass[i]>=mass[j])
			{
				int u=mass[i];
				mass[i]=mass[j];
				mass[j]=u;
			}
		}
	}
	cout << ' ';
	for (int i=0; i<n; i++)
	{
		cout << mass[i] << " || ";
	}
	cout << endl;
}

int main ()
{
	int n;

	cout << " Введите размер массива: ";
	cin >> n;

	int index_min; // переменная храняшая номер 
	int min_el; // переменная хранящая минимальное значение

	cout << " Формирование массива вводом элементов с клавиатуры: " << endl;

	obrabotka O1 (n);

	cout << " Ввывод массива сформированого вводом элементов с клавиатуры: " << endl;

	O1.output_mass (n); // вывод сформированого массива
	O1.module (n); // "взятие" массива по модулю 
	O1.min_elem (n, index_min, min_el); // вывод минимального элемента в массиве
	O1.output_mass (n); // вывод сформированого массива
	O1.nomer_min_elem (n, min_el); // вывод номера(номеров) минимального по модую элемента
	O1.output_min (n, index_min); // вывод всех элементов, расположенных после первого минимального по модулю элемента. 
	O1.sorting (n); // сортировка массива по убыванию
	cout << endl;

	int min, max;
	cout << " Формирование массива при помощи ГСЧ: " << endl;

	cout << " Введите min: ";
	cin >> min;
	cout << " Введите max: ";
	cin >> max;

	cout << " Диапазон чисел [" << min << ", " << max << "]" << endl;
	
	obrabotka O2 (min, max, n); // определение класса

	cout << " Вывод массива сформированого при помощи ГСЧ: " << endl;

	O2.output_mass (n); // вывод сформированого массива
	O2.module (n); // "взятие" массива по модулю 
	O2.min_elem (n, index_min, min_el); // вывод минимального элемента в массиве
	O2.output_mass (n); // вывод сформированого массива
	O2.nomer_min_elem (n, min_el); // вывод номера(номеров) минимального по модую элемента
	O2.output_min (n, index_min); // вывод всех элементов, расположенных после первого минимального по модулю элемента. 
	O2.sorting (n); // сортировка массива по убыванию

	system ("pause");
	return 0;
}
/*
Написать программу, в которой предусмотреть класс для организации обработки целочисленного массива. 
Внутри класса реализовать два конструктора: 1–й конструктор должен обеспечивать ввод элементов массива с клавиатуры;
2—й конструктор должен формировать значения элементов массива в задаваемом диапазоне [min, max] с помощью генератора случайных 
значений. Внутри класса предусмотреть следующие методы:
•	вывод массива на экран;
•	упорядочить элементы массива по убыванию модулей элементов;
•	вычисление значения  минимального по модулю элемента;
•	вывод номера(номеров) минимального по модую элемента;
•	вывод всех элементов, расположенных после первого минимального по модулю элемента.

*/
