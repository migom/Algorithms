/*
 * 2588 - 곱셈
 * https://www.acmicpc.net/problem/2588
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int	a, b, result;

	cin >> a >> b;
	cout << a * (b % 10) << endl;
	cout << a * (b % 100 / 10) << endl;
	cout << a * (b / 100) << endl;
	cout << a * b << endl;

	return 0;
}

