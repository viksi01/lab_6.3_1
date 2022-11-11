#include <iostream>
#include <time.h>
using namespace std;

void Show(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = -100 + rand() % (-100 - 100) + 1;
	}
}

void Print(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ",";
	}
}

int Number(int a[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			k++;
		}
	}
	return k;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 20;
	int a[n];
	Show(a, n);
	cout << "a {"; Print(a, n); cout << "}" << endl;
	cout << "Number of positive = " << Number(a, n) << endl;
}

