#include <iostream>
using namespace std;
int main() {
    //Creating an instance of the first array using user input
    int n;
    cout<<"Please enter a value for n:";
    cin>>n;
    cout<<endl;
    cout<<"Please enter the elements: "<<endl;
    int i;
    int j;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ii = 0;
    int t = 0;
    bool b = true;
    //Loop that sorts the array into alternating positive and negative values
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(b)
            {
                if(a[i]>=0)
                {
                    break;
                }
                if(a[j]>=0)
                {
                    t = a[j];
                    ii = i;
                    while(j>i)
                    {
                        a[j]=a[j-1];
                        j--;
                    }
                    a[ii] = t;
                    i = ii;
                    break;
                }
            }
            else
            {
                if(a[i]<0)
                {
                    break;
                }
                if(a[j]<0)
                {
                    t = a[j];
                    ii = i;
                    while(j>i)
                    {
                        a[j]=a[j-1];
                        j--;
                    }
                    a[ii] = t;
                    i = ii;
                    break;
                }
            }
        }
        if(b)
          b = false;
        else
          b = true;
    }
    cout<<"------------------"<<endl;
    //Loop that prints the array
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";;
    }
    return 0;
}
