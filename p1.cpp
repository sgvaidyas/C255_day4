#include <iostream>

using namespace std;

int main() {
    
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
    
    int m;
    cout<<"Please enter a value for m:";
    cin>>m;
    cout<<endl;
    cout<<"Please enter the elements: "<<endl;
    int b[m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
    
    
    
    
    return 0;
    
}

