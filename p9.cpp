#include <iostream>
using namespace std;
// positve, negative ordering
int main()
{
    // int a[] = {11, -1, 2, 33, -6, -7, 88, -1};
    // int a[] = {11, -1, -2, -3, 6, -7};
    int a[] = {11, 1, 2, 3, -6, -7};
    int a_size = sizeof(a) / sizeof(a[0]);
    // for everything in a1, check if the same number exist in a2.
    for (int i = 0; i < a_size; i++)
    {
        if (i % 2 == 0 && a[i] >= 0)
        {
            // cout << “a[” << i << “]: ” << a[i] << ” is positive” << endl;
            continue;
        }
        else if (i % 2 != 0 && a[i] <= 0)
        {
            // cout << “a[” << i << “]: ” << a[i] << ” is negative” << endl;
            continue;
        }
        else
        {
            int modulo_index = i % 2;
            // find next negative number
            if (modulo_index != 0)
            {
                // cout << “a[” << i << “]” << “should be negative” << endl;
                int j;
                for (j = i; j < a_size; j++)
                {
                    if (a[j] < 0)
                    {
                        break;
                    }
                }
                // cout << “i: ” << i << ” j: ” << j << endl;
                if (j == a_size)
                {
                    continue;
                }
                int k = j;
                while (k > i)
                {
                    int temp = a[k];
                    a[k] = a[k - 1];
                    a[k - 1] = temp;
                    k--;
                }
            }
            else
            {
                int j;
                for (j = i; j < a_size; j++)
                {
                    if (a[j] >= 0)
                    {
                        break;
                    }
                }
                // cout << “i: ” << i << ” j: ” << j << endl;
                if (j == a_size)
                {
                    continue;
                }
                int k = j;
                while (k > i)
                {
                    int temp = a[k];
                    a[k] = a[k - 1];
                    a[k - 1] = temp;
                    k--;
                }
            }
        }
        // cout << “Current state of array: ” << endl;
        // for (int i = 0; i < a_size; i++) {
        //     cout << a[i] << ” “;
        // }
        // cout << endl;
    }
    for (int i = 0; i < a_size; i++)
    {
        cout << a[i] << ” “;
    }
    cout << endl;
}
