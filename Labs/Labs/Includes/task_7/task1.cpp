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
        y*= -1; // ����
        next*=x*x/(2*num+1)/(2*num+2);
    }
	cout << " �������� n="<< num << endl;
	cout << " �������� ���������� ��������: " << last <<endl;
    return s;
}
int main ()
{
    double x,eps,last;
	int num;
    cout << " ������� ��� �������� x: ";
    cin >> x;
    cout << " ������� �������� ����������: ";
    cin >> eps;
    cout << " �������� cos("<< x <<")=" << cos1(x, eps, last, num) << endl;
    system ("pause");
    return 0;
}
