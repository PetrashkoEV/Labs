#include <iostream>
using namespace std;

 struct order 
 {
     int payer; // переменна€ хрон€ща€ счет плательшика
     int addressee; // переменна€ хрон€ща€ счет получател€
     int sum; // переменна€ хрон€ща€ сумму
 };

 void input_info (order orders[], int n) // ф-и€ определ€юща€ ввод информации
 {
     for (int i=0; i<n; i++)
     {
         cout << endl;
         cout << " ¬ведите счет плательщика: "; // ввод номера счета плательщика
         cin >> orders[i].payer;
 
         cout << " ¬ведите счет получател€: "; // ввод номера счета получателю  
         cin >> orders[i].addressee; 
 
         cout << " ¬ведите перечисл€емую сумму: "; // ввод перечисл€емой суммы
         cin >> orders[i].sum;
     }
 }
 
 void sorting (order orders[], int n) // ф-и€ обеспечивающа€ сортировку массивов
 {
     for (int i=0; i<n-1; i++)
     {
         for (int j=i+1; j<n; j++)
         {
             if (orders[i].payer>orders[j].payer)
             {
                 order o=orders[i];
                 orders[i]=orders[j];
                 orders[j]=o;
             }
         }
     }
 }

void output_info (order orders [], int n) // ф-и€ определ€юща€ вывод информации
{
	for (int i=0; i<n; i++)
     {
     	 cout << endl;
     	 // вывод информации
         cout << " —чет плательщика: " << orders[i].payer << endl;
         cout << " —чет получател€: " << orders[i].addressee << endl;
         cout << " —н€та€ сума: " << orders[i].sum << endl;
     }
}

void search_s4et (order orders [], int n, int s4et)
{
	bool flag=false;
	for (int i=0; i<n; i++)
	{
		if (orders[i].payer==s4et)
        {
			cout << endl;
			cout << " —умма сн€та€ со счета (" << s4et <<") равна: " << orders[i].sum << endl;
			flag=true;
        }
	}
	if (flag==false)
	{
		cout << " “акого счета не существует. " << endl;
	}
}

int main ()
{
	int n;
	cout << " ¬ведите количество ордеров: "; //ввод количиства ордеров
	cin >> n;

	order orders[10];
    input_info (orders, n); // ф-и€ определ€юща€ ввод информации
    sorting(orders, n); // ф-и€ обеспечивающа€ сортировку массивов
	output_info (orders, n); // ф-и€ определ€юща€ вывод информации
	
	int s4et; // переменна€ хрон€ща€ искомый счет плательщика
	cout << endl << " ¬ведите счет плательщика: ";
	cin >> s4et;

	search_s4et (orders, n, s4et); // поиск счета , веденного с клавиатуры, в массиве.

	system ("pause");
	return 0;
}

/*ќписать структуру с именем ORDER, содержащую следующие пол€: 
Х	расчетный счет плательщика; 
Х	расчетный счет получател€; 
Х	перечисл€ема€ сумма в руб. 
Ќаписать программу, выполн€ющую следующие действи€: 
Х	ввод с клавиатуры данных в массив, состо€щий из k <=10 элементов типа ORDER; 
Х	записи должны быть размещены в алфавитном пор€дке по расчетным счетам плательщиков;

Х	вывод па экран информации о сумме, сн€той с расчетного счета плательщика, введенного с клавиатуры; 
Х	если такого расчетного счета нет, выдать на экран соответствующее сообщение.
*/
