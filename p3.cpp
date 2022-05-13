#include<iostream>
using namespace std;

int main(){
//	int n = 5, m = 6;
//	int arr[] = {11,1,22,333,4};
//	int arr2[] = {34,1,4,87,9,24};
	int n,m;
	cout << "Enter n ";
	cin >> n;
	int arr[n]; 
	cout<<"\n Enter elements = \n";
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	cout << "Enter m ";
	cin >> m;
	int arr2[m]; 
	cout<<"\n Enter elements = \n";
	for(int i = 0; i < m; i++)
		cin >> arr2[i];
	
	for(int i = 0; i< n; i++){
		for(int j = 0; j < m; j++){
			if(arr[i] == arr2[j])
				cout<< arr[i]<< "\t";
			
		}
	}	
}

