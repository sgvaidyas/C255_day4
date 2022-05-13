#include <iostream>
using namespace std;
int main()
{
    int arr[]{11, 2, 13, 3, 12, 5, 4, 44, 55};
    const int arrSize = sizeof(arr) / sizeof(arr[0]);
    int n = arrSize;
    int sequence[arrSize]{};
    int seqCounter = 0;
    int aux = 0;
    int count = 0;
    int index = 0;
    int temp;
    // sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < arrSize; i++)
    {
        aux = arr[i];
        while (++index < arrSize)
        {
            if (++aux == arr[index])
            {
                count += 1;
            }
            else
                break;
        }
        sequence[seqCounter++] = arr[i];
        i += count++;
        sequence[seqCounter++] = count;
        count = 0;
    }
    int max = 0;
    for (int j = 0; j < arrSize - 1; j += 2)
    {
        if (sequence[j + 1] > 0)
        {
            cout << "\nfrom: " << sequence[j] << " repeating: " << sequence[j + 1] << " times"<< endl;
        }
        if (max < sequence[j + 1])
        {
            max = sequence[j + 1];
            index = j;
        }
        if (!sequence[j % 2] != 0)
            break;
    }
    for (int i = 0; i < arrSize; i++)
        cout << arr[i] << " ";
    cout << "\nThe biggest sequence start with: " << sequence[index] << " and its legth is: " << sequence[index + 1] << endl;
   
    int j=0,k;
    while(j<arrSize)
    {
    	if(arr[j] == sequence[index])
    	{
			k = j+sequence[index + 1];
    		while(j<k)
    		{
    			cout<<arr[j]<<"\t";
    			j++;
			}
			break;
		}
		j++;
	}
	
	
	return 0;
}
