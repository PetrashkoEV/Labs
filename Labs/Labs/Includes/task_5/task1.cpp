#include <iostream>
using namespace std;

int main()
{
    int a;// колличество чисел (a)
    float sum=0;
    
    cout<<" Wwedite kolli4estwo 4isel posledowatel'nosti: ";
    cin>>a;
    cout<<" Wwedite posledowatel'nost'. Posle wwoda kaczdogo 4isla naczimaite <Enter>\n";
    
    int i=0;
    
    do
    {
        float x;//вводимое число (x)
        cin>>x;
        sum = sum + x;
        i++;            
    }
    while(i<a);
    
    cout<<" Srednee arifmeti4eskoe wwedennoi posledowatel'nosti: "<<sum/a<<endl;
    system("pause");
    return 0;
}
