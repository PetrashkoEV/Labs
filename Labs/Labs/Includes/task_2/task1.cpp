#include <iostream>
#include <conio.h> //дл€ использовани€ ф-и getch
using namespace std;
int main()
{
	double L,x; //ќпредел€ем переменные
	int nd;
	cout << " 1-decimetr \n";
	cout << " 2-kilometr \n";
	cout << " 3-metr \n";
	cout << " 4-milimetr \n";
	cout << " 5-santimetr \n";
	cout << " Wwedite nomer edenicu dlinnu "; //¬водим номер еденицы строки
	cin >> nd;
	cout << " Wwedite dlinnu oyrezka L. L= "; //¬водим длину отрезка
	cin >> L;
	switch (nd) // номер еденицы длины
	{
	case 1: x=L/10;
		cout << " Dlinna otrezka L w metrax = "<< x <<endl;
        break;
	case 2: x=L*1000;
		cout << " Dlinna otrezka L w metrax = "<< x <<endl;
		break;
	case 3: x=L;
	     cout << " Dlinna otrezka L w metrax = "<< x <<endl;
	     break;
    case 4: x=L/1000;
         cout << " Dlinna otrezka L w metrax = "<< x <<endl;
         break;
    case 5: x=L/100;
         cout << " Dlinna otrezka L w metrax = "<< x <<endl;
         break;
	default: cout <<" Debil!!! Nuzno wubirat' iz spiska (sm. spisok wuhe)";
	}
cout<<endl;//перевод курсора на следующую строку
system ("pause");
return 0; // окончание операции
}
