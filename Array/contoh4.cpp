#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[] = {70, 60, 30, 50, 40, 20, 30, 100};
	int n = sizeof(arr) / sizeof(int);
	int k, y, i;

	for ( i = k-1; k < n; k++)
	{
		y = arr[k];
		for (int i = k-1; i >= 0 && y < arr[i]; i--)
		{
			arr[i+1] = arr [i];
		}
	arr[i+1] = y;	
	}

	for (int i = 0; i < n; i++)
	{
		cout << "\n" << arr[i];
	}

	return 0;
}