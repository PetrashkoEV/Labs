#include <iostream>
using namespace std;

int main()
{
	int a=0,i=0;// колличество чисел (a)
    float  sum=0; 
    cout<<"Wwedite kolli4estwo 4isel posledowatel'nosti: ";
    cin>>a;
    cout<<"Wwedite posledowatel'nost'. Posle wwoda kaczdogo 4isla naczimaite <Enter>\n";
    while (i<a)
	{
		float x;
		cin >> x;
		sum=sum + x;
		i++;
	}
    cout<<"Srednee arifmeti4eskoe wwedennoi posledowatel'nosti: "<<sum/a<<endl;
    system("pause");
    return 0;
}
