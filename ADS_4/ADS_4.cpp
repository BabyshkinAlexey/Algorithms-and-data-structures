#include <iostream>
#include <string>

using namespace std;
//task 1
void dec(const int num, string& snum) {
    if (num % 2 == 0)
        snum += "0";
    else snum += "1";
    if ((num / 2) != 0) dec(num / 2, snum);
    else return;
}
//task 2
int recs(int A,int B){
    if (B <= 0) return 1;
    return A * recs(A, B - 1);
}
int recf(int A, int B) {
    if (B <= 0) return 1;
    if (B % 2 == 0)
        return recf(A * A, B / 2);
    else
        return A * recf(A, B - 1);
}

int main() {
    //task 1
    int a = 94;
    string snum;
    dec(a, snum);
    cout << "des: " << a << " = bin: " << snum << endl;
    //task 2
    int A = 25;
    int B = 4;
    cout << A << "^" << B << " = " << recs(A, B) << endl;
    cout << A << "^" << B << " = " << recf(A, B) << endl;
    
}
