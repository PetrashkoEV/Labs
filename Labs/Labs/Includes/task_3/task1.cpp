#include <iostream>
using namespace std;

int main()
{
    float a, sum; // колличество чисел (a)
    cout<<"Wwedite kolli4estwo 4isel posledowatel'nosti: ";
    cin>>a;
    cout<<"Wwedite posledowatel'nost'. Posle wwoda kaczdogo 4isla naczimaite <Enter>\n";
    for(int i=0; i<a; i++)
    {
            float b, x; //введенное число (b)
            cin>>b;
            if(i==0)
            {
                sum = 0 + b;
            }
            else
            {
                sum = sum + b;
            }
    }
    cout<<"Srednee arifmeti4eskoe wwedennoi posledowatel'nosti: "<<sum/a<<endl;
    system("pause");
    return 0;
}
