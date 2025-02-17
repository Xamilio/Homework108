#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	const int SIZE1 = 5;
	const int SIZE2 = 5;
	int sum = 0;
	int arr[SIZE1][SIZE2];
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << " | " << sum << endl;
		sum = 0;
	}
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)
		{
			sum += arr[j][i];
		}
		cout << sum << " ";
		sum = 0;
	}
}