#include <iostream>
#include <cstdlib>

using namespace std;

void print(int* arr,int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
}
void qs(int* arr, int left, int right)
{
    register int i, j;
    char x, y;

    i = left; j = right;
    x = arr[(left + right) / 2]; 

    do {
        while ((arr[i] < x) && (i < right)) i++;
        while ((x < arr[j]) && (j > left)) j--;

        if (i <= j) {
            y = arr[i];
            arr[i] = arr[j];
            arr[j] = y;
            i++; j--;
        }
    } while (i <= j);

    if (left < j) qs(arr, left, j);
    if (i < right) qs(arr, i, right);
}
int main()
{
    const int size = 20;
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }
    cout << endl;
    print(arr, size);
    qs(arr, 0, size - 1);
    print(arr, size);
    qs(arr, 0, size - 1);
}