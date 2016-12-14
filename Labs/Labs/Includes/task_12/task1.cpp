#include <iostream>
using namespace std;

 struct order 
 {
     int payer; // ���������� �������� ���� �����������
     int addressee; // ���������� �������� ���� ����������
     int sum; // ���������� �������� �����
 };

 void input_info (order orders[], int n) // �-�� ������������ ���� ����������
 {
     for (int i=0; i<n; i++)
     {
         cout << endl;
         cout << " ������� ���� �����������: "; // ���� ������ ����� �����������
         cin >> orders[i].payer;
 
         cout << " ������� ���� ����������: "; // ���� ������ ����� ����������  
         cin >> orders[i].addressee; 
 
         cout << " ������� ������������� �����: "; // ���� ������������� �����
         cin >> orders[i].sum;
     }
 }
 
 void sorting (order orders[], int n) // �-�� �������������� ���������� ��������
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

void output_info (order orders [], int n) // �-�� ������������ ����� ����������
{
	for (int i=0; i<n; i++)
     {
     	 cout << endl;
     	 // ����� ����������
         cout << " ���� �����������: " << orders[i].payer << endl;
         cout << " ���� ����������: " << orders[i].addressee << endl;
         cout << " ������ ����: " << orders[i].sum << endl;
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
			cout << " ����� ������ �� ����� (" << s4et <<") �����: " << orders[i].sum << endl;
			flag=true;
        }
	}
	if (flag==false)
	{
		cout << " ������ ����� �� ����������. " << endl;
	}
}

int main ()
{
	int n;
	cout << " ������� ���������� �������: "; //���� ���������� �������
	cin >> n;

	order orders[10];
    input_info (orders, n); // �-�� ������������ ���� ����������
    sorting(orders, n); // �-�� �������������� ���������� ��������
	output_info (orders, n); // �-�� ������������ ����� ����������
	
	int s4et; // ���������� �������� ������� ���� �����������
	cout << endl << " ������� ���� �����������: ";
	cin >> s4et;

	search_s4et (orders, n, s4et); // ����� ����� , ��������� � ����������, � �������.

	system ("pause");
	return 0;
}

/*������� ��������� � ������ ORDER, ���������� ��������� ����: 
�	��������� ���� �����������; 
�	��������� ���� ����������; 
�	������������� ����� � ���. 
�������� ���������, ����������� ��������� ��������: 
�	���� � ���������� ������ � ������, ��������� �� k <=10 ��������� ���� ORDER; 
�	������ ������ ���� ��������� � ���������� ������� �� ��������� ������ ������������;

�	����� �� ����� ���������� � �����, ������ � ���������� ����� �����������, ���������� � ����������; 
�	���� ������ ���������� ����� ���, ������ �� ����� ��������������� ���������.
*/
