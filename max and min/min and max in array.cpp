#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		system("cls");
		const int N = 100;
		int a[N] = { 0 };
		int n;
		while (true)
		{
			cout << "Enter the amount of elements (n <= 100): ";
			cin >> n;
			if (n > 0 && n <= N) break;
			cout << "Error!";
		}
		//for (int i = 0; i < n; i++)
			//a[i] = rand() % 100;

		cout << "Enter array elements: "<< endl;
		for (int i = 0; i < n; i++)
		{
			cout << "a[" << (i + 1) << "]";
			cin >> a[i];
		}
		system("cls");

		cout << "Source array: " << endl;
		for (int i = 0; i < n; i++)
			cout << a[i] << ", ";
		int min = 0, max = 0;
		for (int i = 1; i < n; i++)
		{
			if (a[i] < a[min])
				min = i;
			else if (a[i] >= a[max])
				max = i;
		}
		cout << endl;
		if (a[min] == a[max])
			cout << "All values are equal ";
		else cout << "The less value at the position: " << min+1 << endl << "  The largest value at the position: " << max+1;
		system("pause");

		system("cls");
		char yes;
		cout << "Would you like to countinie? Press y/Y: " << endl;
		cin >> yes;
		if (yes == 'y' || yes == 'Y')
			continue;
		break;
	}
	return 0;
}