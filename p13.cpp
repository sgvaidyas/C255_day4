#include <iostream>
using namespace std;
int main()
{
    // int a[] = {11, -1, 2, 33, -6, -7, 88, -1};
    // int a[] = {11, -1, -2, -3, 6, -7};
    // int a[] = {11, 2, 13, 3, 1, 12, 5, 4, 44, 55};
    int a[] = {1, 2, 3, 10, 5, 6, 7,77,89,88,90};
    // int a[] = {1, 2, 3, 10, 5, 6, 7, 8, 11};
    int n = sizeof(a) / sizeof(a[0]);
    int longest_sequence = 0;
    int sequence_start_end[n];
    int noOfLongestSequences = 0;
    // bubble sort array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int lastVal = a[0];
    int sequence_len = 1;
    int curr_start;
    int curr_end;
    // find longest sequence
    for (int i = 1; i <= n; i++)
    {
       if ((a[i] - lastVal ==  1 || lastVal - a[i] == 1) && i<n) {
           if(sequence_len == 1) {
               curr_start = i - 1;
           }
           if(i<n)
           	sequence_len++;
       } else {
           curr_end = i - 1;
           if (sequence_len > 1 && sequence_len > longest_sequence) {
           	  	
			  for(int z=0;z<=noOfLongestSequences;z++)
           	  	sequence_start_end[z]=0;
           	  	
               noOfLongestSequences = 0;
               sequence_start_end[noOfLongestSequences] = curr_start;
               sequence_start_end[noOfLongestSequences + 1] = curr_end;
               longest_sequence = sequence_len;
               noOfLongestSequences = 1;
           } else if (sequence_len > 1 && sequence_len == longest_sequence) {
               sequence_start_end[noOfLongestSequences * 2] = curr_start;
               sequence_start_end[noOfLongestSequences * 2 + 1] = curr_end;
               noOfLongestSequences++;
           
           }
           sequence_len = 1;
       }
       if(i<n)
       		lastVal = a[i];
    }
    
    cout << "Longest Sequence(s): " << endl;
    for (int i = 0; i < noOfLongestSequences; i++) {
        for (int j = sequence_start_end[i*2]; j <= sequence_start_end[i*2+1]; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}


