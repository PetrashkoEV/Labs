#include <iostream>
using namespace std;

class order
{
public:
    order(); // ����� �����������
    void output () const; // �-�� ������ ������ � �����.
    ~order (); // ����� ���������� 
private:
    int payer; // ���� ����������� 
    int adres; // ���� ����������
    int sum; // �����
};

order::order()
{
    cout << " ������ ������ " << endl;

    cout << " ������� ���� �����������: ";
    cin >> payer;

    cout << " ������� ���� ����������: ";
    cin >> adres;

    cout << " ������� ������������� �����: ";
    cin >> sum;
}

void order::output () const
{
    cout << endl;
    cout << " ���� �����������: " << payer << endl;
    cout << " ���� ����������: " << adres << endl;
    cout << " �����: " << sum << endl;
}

order::~order ()
{
    cout << " ������ ��������� !!!" << endl;
}

int main()
{
    order o1;
    o1.output ();
    o1.~order ();

    system("PAUSE");
    return 0;
}
/*
������� ����� � ������ ORDER, ���������� ��������� �������� ���������� - ����� ������ (����): 
"	��������� ���� �����������; 
"	��������� ���� ����������; 
"	������������� ����� � ���. 
�������� ���������, ����������� ���� � ����� �����  �������� O1, O2 ������ ORDER.

*/
