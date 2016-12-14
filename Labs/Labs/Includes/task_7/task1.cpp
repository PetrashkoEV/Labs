#include <iostream>
using namespace std;

double cos1(double x, double eps, double &last, int &num)
{   
    int y=1;
    double next=1, s=0;
	last=0;
    for (num=0; next>=eps; num++)
    {
		last=next;
        s+=y*last;
        y*= -1; // знак
        next*=x*x/(2*num+1)/(2*num+2);
    }
	cout << " Значение n="<< num << endl;
	cout << " Величина последнего элемента: " << last <<endl;
    return s;
}
int main ()
{
    double x,eps,last;
	int num;
    cout << " Введите угл косинуса x: ";
    cin >> x;
    cout << " Введите точность выполнения: ";
    cin >> eps;
    cout << " Значение cos("<< x <<")=" << cos1(x, eps, last, num) << endl;
    system ("pause");
    return 0;
}
