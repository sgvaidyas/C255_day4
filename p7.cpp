#include <iostream>

using namespace std;

int main()
{
	int arr[100];
	int arr_pos[100];
	int arr_neg[100];
	int n;
	int  j = 0, k = 0;
	bool parity = true;

	cout << "Array size:\n";
	cin >> n;

	cout << "Array elements:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
			arr_neg[j++] = arr[i];
		else
			arr_pos[k++] = arr[i];
	}

	for (int i = 0, l = 0, m = 0; i < n; i++)
	{
		if (parity && l < k)
		{
			if (l < k && m < j)
				parity = !parity;

			arr[i] = arr_pos[l++];
		}
		else if (!parity && m < j)
		{
			if (l < k && m < j)
				parity = !parity;

			arr[i] = arr_neg[m++];
		}			

		cout << arr[i] << " ";
	}
}

