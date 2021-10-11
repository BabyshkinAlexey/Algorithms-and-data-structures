#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

double f(double t)
{
	return sqrt(fabs(t)) + 5 * pow(t, 3);
}


int main()
{
	const int n = 3, m = 3;
	const int w = 4;
	int arr[n][m] = { 1,9,2,5,7,6,4,3,8 };
	cout << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << setw(w) << arr[i][j];
		}
		cout << endl;
	}
	cout << endl << "=================" << endl;
	for (int k = 0; k < n; ++k) {
		for (int l = 0; l < m; ++l) {
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					if (i + 1 == n and j + 1 == m)
						continue;
					else {
						if (j + 1 == m and arr[i][j] > arr[i + 1][0]) {
							int t = arr[i][j];
							arr[i][j] = arr[i + 1][0];
							arr[i + 1][0] = t;
						}
						else
							if (arr[i][j] > arr[i][j + 1]) {
								int t = arr[i][j];
								arr[i][j] = arr[i][j + 1];
								arr[i][j + 1] = t;

							}
					}
				}
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << setw(w) << arr[i][j];
		}
		cout << endl;
	}
	cout << "task 2" << endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	double a[11] = { 0 }, y;
	for (int i = 0; i < 11; i++)
		cin >> a[i];
	for (int i = 10; i >= 0; i--) {
		y = f(a[i]);
		if (y > 400)
			cout << i <<" the result of calculations exceeds 400 y = " << y << endl;
		else
			cout << i << " " <<  y << endl;
	}
}