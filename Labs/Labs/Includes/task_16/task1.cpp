#include <iostream>
#include <time.h>
using namespace std;

class obrabotka 
{
public:
	obrabotka (int n);
	void output_mass (int n) const; // ����� �������������� �������
	void module (int n); // "������" ������� �� ������ 
	void sorting (int n); // ���������� ������� �� ��������
	void min_elem (int n, int & index_min, int & min_el); // ����� ������������ �������� � �������
	void nomer_min_elem (int n, int min_el) const; // ����� ������(�������) ������������ �� ����� ��������
	void output_min (int n, int & index_min); // ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������.
	obrabotka (int min, int max, int n); // ����� ����������� ��� ����� ��������� � ������ ��� ������ ��� 
private:
	int mass[10];
};

obrabotka::obrabotka (int n)
{
	for (int i=0; i<n; i++)
	{
		cout << " ������� " << i+1 << "-�������: ";
		cin >> mass[i];
	}
}

obrabotka::obrabotka(int min, int max, int n) // ����� ����������� ��� ����� ��������� � ������ ��� ������ ���
{
	srand (( unsigned) time(NULL)); // ����������� ���
	for (int i=0; i<n; i++)
	{
		mass[i]=rand()%(max-min+1)+min; // ������������ �����
	}
}

void obrabotka::output_mass (int n) const // ����� �������������� �������
{
	cout << ' ';
	for (int i=0; i<n; i++)
	{
		cout << mass[i] << " || ";
	}
	cout << endl << endl;
}

void obrabotka::module (int n) // "������" ������� �� ������  
{
	for (int i=0; i<n; i++)
	{
		if (mass[i]<0)
		{
			mass[i]=-mass[i];
		}
	}
}

void obrabotka::min_elem (int n, int & index_min, int & min_el) // ����� ������������ �������� � �������
{
	min_el=mass[0];
	index_min=0;
	for (int i=1; i<n; i++)
	{
		if (mass[i]<min_el)
		{
			index_min=i;
			min_el=mass[i];
		}
	}
	cout << " ����������� �� ������ �����: " << min_el << endl;
}

void obrabotka::nomer_min_elem (int n, int min_el) const // ����� ������(�������) ������������ �� ����� �������� 
{
    cout << " ������ ����������� �� ������ ���������: ";
	for (int i=0; i<n; i++)
	{
		if (mass[i]==min_el)
		{
			cout << i+1 << ';';
		}
	}
	cout << endl;
}

void obrabotka::output_min (int n, int & index_min) // ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������.
{
	cout << " ������ ���� ��������� ����� 1-�� ������������ �� ������ ��������: " << endl;
	cout << ' ';
	for (int i=index_min+1; i<n; i++)
	{
		cout << mass[i] << " || ";
	}
	cout << endl;
}

void obrabotka::sorting (int n) // ���������� ������� �� ��������
{
	cout << " ������ ��������������� �������: " << endl;
	// ���������� ������� �� ������ "��������"
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (mass[i]>=mass[j])
			{
				int u=mass[i];
				mass[i]=mass[j];
				mass[j]=u;
			}
		}
	}
	cout << ' ';
	for (int i=0; i<n; i++)
	{
		cout << mass[i] << " || ";
	}
	cout << endl;
}

int main ()
{
	int n;

	cout << " ������� ������ �������: ";
	cin >> n;

	int index_min; // ���������� �������� ����� 
	int min_el; // ���������� �������� ����������� ��������

	cout << " ������������ ������� ������ ��������� � ����������: " << endl;

	obrabotka O1 (n);

	cout << " ������ ������� �������������� ������ ��������� � ����������: " << endl;

	O1.output_mass (n); // ����� �������������� �������
	O1.module (n); // "������" ������� �� ������ 
	O1.min_elem (n, index_min, min_el); // ����� ������������ �������� � �������
	O1.output_mass (n); // ����� �������������� �������
	O1.nomer_min_elem (n, min_el); // ����� ������(�������) ������������ �� ����� ��������
	O1.output_min (n, index_min); // ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������. 
	O1.sorting (n); // ���������� ������� �� ��������
	cout << endl;

	int min, max;
	cout << " ������������ ������� ��� ������ ���: " << endl;

	cout << " ������� min: ";
	cin >> min;
	cout << " ������� max: ";
	cin >> max;

	cout << " �������� ����� [" << min << ", " << max << "]" << endl;
	
	obrabotka O2 (min, max, n); // ����������� ������

	cout << " ����� ������� �������������� ��� ������ ���: " << endl;

	O2.output_mass (n); // ����� �������������� �������
	O2.module (n); // "������" ������� �� ������ 
	O2.min_elem (n, index_min, min_el); // ����� ������������ �������� � �������
	O2.output_mass (n); // ����� �������������� �������
	O2.nomer_min_elem (n, min_el); // ����� ������(�������) ������������ �� ����� ��������
	O2.output_min (n, index_min); // ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������. 
	O2.sorting (n); // ���������� ������� �� ��������

	system ("pause");
	return 0;
}
/*
�������� ���������, � ������� ������������� ����� ��� ����������� ��������� �������������� �������. 
������ ������ ����������� ��� ������������: 1�� ����������� ������ ������������ ���� ��������� ������� � ����������;
2�� ����������� ������ ����������� �������� ��������� ������� � ���������� ��������� [min, max] � ������� ���������� ��������� 
��������. ������ ������ ������������� ��������� ������:
�	����� ������� �� �����;
�	����������� �������� ������� �� �������� ������� ���������;
�	���������� ��������  ������������ �� ������ ��������;
�	����� ������(�������) ������������ �� ����� ��������;
�	����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������.

*/
