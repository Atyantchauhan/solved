

#include<iostream>
using namespace std;
void pattern(int arr[],int n);
void pattern(int arr[],int n){
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
		  if(j+1==arr[j]){
		  	cout<<"*";
		  	
		  	
		  }	 
	}
	
	}
}

int main(){
	int arr[5] = {4,6,3,1,5};
	pattern(arr,5);
	
	
	return 0;
	
}