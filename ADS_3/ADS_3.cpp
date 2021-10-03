
#include <iostream> 
#include "locale.h"
using namespace std;


bool test(const int a) 
{
    if (a % 2 == 0)
        return false;
    if (a>1 &&  a % 1 == 0 && a % a == 0);
        return true;
}
int main() 
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите чило для проверки на простоту" << endl;
    int a;
    cin >> a;
    cout << (test(a) ? "Число простое" : "Число не простое") << endl;
    return 0;
}
