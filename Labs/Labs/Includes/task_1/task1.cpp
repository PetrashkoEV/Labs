#include <iostream>
using namespace std;

int main()
{
	float x,y; //���������� ����������
	cout<<" Wwedite zna4enie X=";
    cin>>x; //������ �������� X
    cout<<" Wwedite zna4enie Y=";
    cin>>y; //������ �������� Y
	
	if(y>0) //������� ������������ �������
	{
           
		   if(x>2 && x<8 && y>3 && y<5) //������� ������������, ������ �� ����� � �������������� �������
           {
                  cout<<" To4ka prenadleczit granice \n";
           }
           else if(x<2 || x>8 || y<3 || y>5)
           {
                cout<<" To4ka ne prinadleczit granice \n";
           }
           else
		   {
                cout<<" To4ka leczit na granice \n";
           }
	
	}
	else
	{
       
	   if(x<-3 && x>-5 && y>-11 && y<-1) //������� ������������, ������ �� ����� � �������������� �������
       {
              cout<<" To4ka prenadleczin granice \n";
       }
       else if(x>-3 || x<-5 || y<-11 || y>-1)
       {
            cout<<" To4ka ne prinadleczit granice \n";
       }
       else
	   {
            cout<<" To4ka leczit na granice \n";
	   }
	}

	system("pause");
	return 0; 
}
