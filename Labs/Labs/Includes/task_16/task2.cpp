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
	void min_elem () const; // ����� ������������ �������� � �������
	void nomer_min_elem (int n) const; // ����� ������(�������) ������������ �� ����� ��������
	void output_min (int n) const; // ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������.
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
	cout << endl;
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

void obrabotka::sorting (int n) // ���������� ������� �� ��������
{
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
}

void obrabotka::min_elem () const // ����� ������������ �������� � �������
{
	cout << " ����������� �� ������ ��������� � ������� ��������: " << mass[0] << endl;
}

void obrabotka::nomer_min_elem (int n) const
{
	int k=mass[0];
	cout << " ������ ����������� �� ������ ���������: 1";
	for (int i=1; i<n; i++)
	{
		if (k==mass[i])
		{
			cout << ',' << i+1;
		}
	}
	cout << endl;
}

void obrabotka::output_min (int n) const// ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������.
{
	cout << " ������ ���� ��������� ����� 1-�� ������������ �� ������ ��������: " << endl;
	cout << ' ';
	for (int i=1; i<n; i++)
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

	cout << " ������������ ������� ������ ��������� � ����������: " << endl;

	obrabotka O1 (n);
	cout << " ������ ������� �������������� ������ ��������� � ����������: " << endl;
	O1.output_mass (n); // ����� �������������� �������
	O1.module (n); // "������" ������� �� ������ 
	//O2.nomer_min_elem2 (n);
	O1.sorting (n); // ���������� ������� �� ��������.
	O1.min_elem (); // ����� ������������ �������� � �������
	O1.output_mass (n); // ����� �������������� �������
	O1.nomer_min_elem (n); // ����� ������(�������) ������������ �� ����� ��������
	O1.output_min (n); // ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������. 
	cout << endl;

	int min, max;
	cout << " ������������ ������� ��� ������ ���: " << endl;

	cout << " ������� min: ";
	cin >> min;
	cout << " ������� max: ";
	cin >> max;

	cout << " �������� ����� [" << min << ", " << max << "]" << endl;
	
	obrabotka O2 (min, max, n); // ����������� ������

	cout << " ������ ������� �������������� ��� ������ ���: " << endl;

	O2.output_mass (n); // ����� �������������� �������
	O2.module (n); // "������" ������� �� ������ 
	//O2.nomer_min_elem2 (n);
	O2.sorting (n); // ���������� ������� �� ��������.
	O2.min_elem (); // ����� ������������ �������� � �������
	O2.output_mass (n); // ����� �������������� �������
	O2.nomer_min_elem (n); // ����� ������(�������) ������������ �� ����� ��������
	O2.output_min (n); // ����� ���� ���������, ������������� ����� ������� ������������ �� ������ ��������. 

	system ("pause");
	return 0;
}
