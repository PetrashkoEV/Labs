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
	void min_elem () const; // вывод минимального элемента в массиве
	void nomer_min_elem (int n) const; // вывод номера(номеров) минимального по модую элемента
	void output_min (int n) const; // вывод всех элементов, расположенных после первого минимального по модулю элемента.
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
	cout << endl;
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

void obrabotka::sorting (int n) // сортировка массива по убыванию
{
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
}

void obrabotka::min_elem () const // вывод минимального элемента в массиве
{
	cout << " Минимальным по модулю элементом в массиве является: " << mass[0] << endl;
}

void obrabotka::nomer_min_elem (int n) const
{
	int k=mass[0];
	cout << " Номера минимальных по модулю элементов: 1";
	for (int i=1; i<n; i++)
	{
		if (k==mass[i])
		{
			cout << ',' << i+1;
		}
	}
	cout << endl;
}

void obrabotka::output_min (int n) const// вывод всех элементов, расположенных после первого минимального по модулю элемента.
{
	cout << " Ввывод всех элементов после 1-го минимального по модулю элемента: " << endl;
	cout << ' ';
	for (int i=1; i<n; i++)
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

	cout << " Формирование массива вводом элементов с клавиатуры: " << endl;

	obrabotka O1 (n);
	cout << " Ввывод массива сформированого вводом элементов с клавиатуры: " << endl;
	O1.output_mass (n); // вывод сформированого массива
	O1.module (n); // "взятие" массива по модулю 
	//O2.nomer_min_elem2 (n);
	O1.sorting (n); // сортировка массива по убыванию.
	O1.min_elem (); // вывод минимального элемента в массиве
	O1.output_mass (n); // вывод сформированого массива
	O1.nomer_min_elem (n); // вывод номера(номеров) минимального по модую элемента
	O1.output_min (n); // вывод всех элементов, расположенных после первого минимального по модулю элемента. 
	cout << endl;

	int min, max;
	cout << " Формирование массива при помощи ГСЗ: " << endl;

	cout << " Введите min: ";
	cin >> min;
	cout << " Введите max: ";
	cin >> max;

	cout << " Диапазон чисел [" << min << ", " << max << "]" << endl;
	
	obrabotka O2 (min, max, n); // определение класса

	cout << " Ввывод массива сформированого при помощи ГСЗ: " << endl;

	O2.output_mass (n); // вывод сформированого массива
	O2.module (n); // "взятие" массива по модулю 
	//O2.nomer_min_elem2 (n);
	O2.sorting (n); // сортировка массива по убыванию.
	O2.min_elem (); // вывод минимального элемента в массиве
	O2.output_mass (n); // вывод сформированого массива
	O2.nomer_min_elem (n); // вывод номера(номеров) минимального по модую элемента
	O2.output_min (n); // вывод всех элементов, расположенных после первого минимального по модулю элемента. 

	system ("pause");
	return 0;
}
