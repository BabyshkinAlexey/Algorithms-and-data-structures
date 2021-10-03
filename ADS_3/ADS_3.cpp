#include <iostream> 
#include "locale.h"
using namespace std;


bool test(const int a) 
{
    if (a > 1)
    {
        for (int i = 2; i < a; i++)
            if (a % i == 0)
                return false;
        return true;
    }
    else
        return false;
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
