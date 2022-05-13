#include <iostream>
using namespace std;
int main()
{
	int arr[100];
	int sec[100];
	int n;
	int pivot = 0;
	int index = 0;
	int start_index = 0;
	int end_index = 0;
	int prev_index = 0;
	int max_count = 0;
	int count = 0;
	cout << "Array size:\n";
	cin >> n;
	cout << "Array elements:\n";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 1, j = 0; i < n; i++)
	{
		pivot = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > pivot)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = pivot;
	}
	for (int i = 0; i < n; i++)
	{
		if (i < n - 1 && arr[i + 1] - arr[i] == 1)
		{
			if (count == 0)
				index = i;
			count++;
		}
		else
		{
			if (max_count > count)
			{
				start_index = prev_index;
				end_index = start_index + max_count;
			}
			else
			{
				start_index = index;
				end_index = start_index + count;
			}
			max_count = max(max_count, count);
			prev_index = index;
			count = 0;
		}
	}
	for(int i = start_index; i <= end_index; i++)
		cout << arr[i] << " ";
}
