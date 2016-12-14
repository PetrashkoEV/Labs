# include <iostream>
# include <stdio.h>
# include <time.h>
using namespace std;

void koli4estwo_ilementow (int k, int m, int mass [])
{
    int sum=0, kl=0, znak=0;
    for (int i=0; i<m; i++)
    {
        if (mass[i]%2==0)
        {
            kl++;
            sum+=mass[i]; 
        }
    }
    cout << " ____________________________________" << endl;
    cout << " "<< k+1 << " ������" << endl;
    cout << " ����� ������ ��������� � ������:" << sum << endl;
    cout << " ���������� ������ ���������: " << kl << endl;
}

int main()
{
    int m=0;
    cout << " ������� ����������� �������, �� ����� 7: "; // ���� ����������� �������
    cin >> m;
    if (m<0 || m>7) // ������� �� ������������ �����
    {
        cout << " ����������� ������� �� ��������� !!!!" << endl;
        return 1;
    }

    int ** mass;
    mass = new int*[m];
    for (int i = 0; i<m; i++)
    {
        mass[i] = new int[m];
    }
    
    //int a [8][3]; // ������� ������ �������� 8�3
    
    srand (( unsigned) time(NULL)); // ����������� ���
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            mass[i][j]=rand()%19-8; // ������ ������������� �����
        }
    }

    cout << " ����������� ������:" << endl; // ����� ���������������� ��� ������ ��� �������

    for (int i=0; i<m; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout << mass[i][j] << "    ";
         }
         cout << endl;
    }
    cout << endl;
    
    for (int i=0; i<m; i++)
    {
        int k=i;
        koli4estwo_ilementow (k, m, mass [i]); // ��������� �-��
    }
    
    // 1 �������- ����� ������, 2 ������ -����� ���������  3 ������- ���������� ������ �����.
    
    cout << endl;
    
	for (int i=0; i<m; i++)
	{
		delete[] mass[i];
	}
	delete [] mass;
	
    system ("pause");
    return 0;
}
