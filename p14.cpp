#include <iostream>
using namespace std;
int main()
{
	int arr1,temp,key,j,currlongestnum=0,testnum, numseries=1,counter = 0;
	bool isPositive = true;
	cout<< "Please enter length for arr1 ";
	cin>>arr1;
	cout<<"Please enter values for arr1 ";
	int a[arr1];
	int testarr[arr1];
	int currlongest[arr1];
	
	for(int i = 0;i<arr1;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<arr1;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(int i =0;i<arr1;i++){
		testnum=0;
		counter = 0;
		while(a[i]+1 == a[i+1]){
			
			testarr[counter] = a[i];
			testnum++;
			if(a[i]+2 != a[i+2]){
				testarr[counter+1]=a[i+1];
				testnum++;			
			}
			i++;
			counter++;
		}
		if(testnum>currlongestnum){
			currlongestnum=testnum;
			for(int i=0;i<currlongestnum;i++){
				currlongest[i] = testarr[i];
			}
			numseries =1;
		}else if(testnum==currlongestnum){
			for(int i=currlongestnum*numseries;i<currlongestnum*(numseries+1);i++){
				currlongest[i] = testarr[i-currlongestnum*numseries];
			}
			numseries+=1;
		}
	
	}
	
	for(int i = 0; i<currlongestnum*numseries; i++){
		cout<<currlongest[i]<<"\t";
	}
}
