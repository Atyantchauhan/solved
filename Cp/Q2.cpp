#include<iostream>

using namespace std;
int main(){
	int arr[] = {4,6,3,1,5};
	int n= 5,maximum = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>maximum)
		{
			maximum = arr[i];
		}
	}
	int tracker = maximum;
	for(int row = 0;row<maximum;row++){
		for(int col = 0;col<n;col++){
			if(arr[col]<tracker){
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
			cout<<" ";
		}
		tracker--;
		cout<<endl;
	}
	return 0;
}