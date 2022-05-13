#include <iostream>

using namespace std;

int main()
{
	int arr[100];
	int pos_index = 0, neg_index = 0;
	int n;

	cout << "Array size:\n";
	cin >> n;

	cout << "Array elements:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		while (pos_index < n && arr[pos_index] < 0)
		{
			pos_index++;
		}

		if(pos_index < n)
			cout << arr[pos_index++] << " ";

		while (neg_index < n && arr[neg_index] >= 0)
		{
			neg_index++;
		}

		if(neg_index < n)
			cout << arr[neg_index++] << " ";
	}
}

