#include<iostream>
using namespace std;
// print the longest consecutive sequence
void bubbleSort(int arr[], int n);
int main(){
	int n, longestSeq = 1, lSeqStartIndex=-1, lSeqEndIndex=-1, currentSeq = 1 , currentLSeqStartIndex, currentLSeqEndIndex;
	int temp[20],ind=0,flag=1;
	bool isSequence = false;
	cout << "Enter n ";
	cin >> n;
	int arr[n];
	cout<<"\n Enter elements = \n";
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	// sort array
	bubbleSort(arr, n);
	
	//print sorted array
	for(int i = 0; i < n; i++){
		cout<< arr[i] << " ";
	}
	
	// find longest sequence;
	for(int i = 0; i < n - 1; i++){
		if(arr[i+1] - arr[i] == 1){
			flag=0;
			if(!isSequence){
				isSequence = true;
				currentSeq++;
				currentLSeqStartIndex = i;
				currentLSeqEndIndex = i+1;
			}
			else if(isSequence){
				currentSeq++;
				currentLSeqEndIndex++;
				if(currentSeq >= longestSeq){
					longestSeq = currentSeq;
					lSeqStartIndex = currentLSeqStartIndex;
					lSeqEndIndex = currentLSeqEndIndex;
				}
			}
		}
		else{
			isSequence = false;
			currentSeq = 1;
			if(flag==0)
			{
				if(temp[ind]!=)
				temp[ind++] = lSeqStartIndex;
				temp[ind++] = lSeqEndIndex;
			}
			flag=1;
		}
	}
	
	//print longest sequence
	cout<<endl;
	for(int i = lSeqStartIndex; i <= lSeqEndIndex; i++){
		cout<< arr[i] << " ";
	}
	
	cout<<"\n-------------------\n";
	for(int j =0;j<ind-1;j++)
		cout<<temp[j]<<"\t"<<temp[j+1];
	
}
void bubbleSort(int arr[], int n){
	
	int i, j, temp;
	
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-1-i; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
