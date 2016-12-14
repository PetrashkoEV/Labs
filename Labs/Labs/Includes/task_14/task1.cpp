#include <iostream>
using namespace std;

class order
{
public:
    order(); // явный конструктор
    void output () const; // ф-ия вывода счетов и суммы.
    ~order (); // явный деструктор 
private:
    int payer; // счет плательщика 
    int adres; // счет получателя
    int sum; // сумма
};

order::order()
{
    cout << " Объект создан " << endl;

    cout << " Введите счет плательщика: ";
    cin >> payer;

    cout << " Введите счет получателя: ";
    cin >> adres;

    cout << " Введите перечисляемую сумму: ";
    cin >> sum;
}

void order::output () const
{
    cout << endl;
    cout << " Счет плательщика: " << payer << endl;
    cout << " Счет получателя: " << adres << endl;
    cout << " Сумма: " << sum << endl;
}

order::~order ()
{
    cout << " Обьект унечтожен !!!" << endl;
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
Описать класс с именем ORDER, содержащий следующие закрытые переменные - члены класса (поля): 
"	расчетный счет плательщика; 
"	расчетный счет получателя; 
"	перечисляемая сумма в руб. 
Написать программу, выполняющую ввод и вывод полей  объектов O1, O2 класса ORDER.

*/
