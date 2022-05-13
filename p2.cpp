#include <iostream>

using namespace std;

int main() {
    
	int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[7] = {5, 6, 1, 7, 8, 0, 10};
    int arr1Size = (sizeof(arr1)/sizeof(arr1[0]));
    int arr2Size = (sizeof(arr2)/sizeof(arr2[0]));
    
    for (int i{0}; i < arr1Size; i++)
    {
        for (int j{0}; j < arr2Size; j++)
        {
            if (arr1[i] == arr2[j])
                std::cout << arr1[i] << std::endl;
        }
    }
}
