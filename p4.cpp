#include <iostream>
using namespace std;

int main()
{

    int a[]{11, 22, 1, 333, 44};
    int b[]{1, 22, 44, 7, 99, 87};
    const int sizeA = sizeof(a) / sizeof(a[0]);
    const int sizeB = sizeof(b) / sizeof(b[0]);
    int c[sizeA]{};
    int i = 0;


    for (int j = 0; j < sizeA; j++)
    {
        for (int k = 0; k < sizeB; k++)
        {
            if (a[j] == b[k])
            {
                c[i++] = a[j];
                break;
            }
        }
    }
    cout << "Intersecting values: ";
    i = 0;
    while(c[i] > 0){
        
        cout << c[i++] << " ";
    }
    return 0;
}

