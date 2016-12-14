#include <iostream>
using namespace std;
double cos1(float x, float eps)
{	
	int m=1;
	int y=1;
	float q=1,g=1;
	float s=1;
	for (int n=1; g>=eps; n++)
	{
		y*= -1; // знак
		g*=x*x/(2*n)/(2*n-1);
		s+=y*g;
	}
	return s;
}
int main ()
{
	float x,eps;
	float z;
	cout << " Wwedite zna4enie cosinusa uygla, x:";
	cin >> x;
	cout << " Wwedite to4nost' wupolneniia ";
	cin >> eps;
	z=cos1(x,eps);
	cout << " Zna4enie cos("<< x <<")=" << z << endl;
	system ("pause");
	return 0;
}
