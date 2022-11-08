//1. Pallindrome Integer
//Problem Statement
//Given an integer  x , return  true  if  x  is palindrome integer.
//An integer is a palindrome when it reads the same backward as forward.
//For example,  121  is a palindrome while  123  is not.





#include<iostream>
using namespace std;
void palindrome(int x){
	int arr[20];
	int flag = 0;
	int i =0,j;

    	while(x){
    	     if(-1>=x){
    	     	flag = 1;
				 break;
			 }
    		int m = x%10;
    		arr[i] = m;
    		x = x/10;	
    		i++;
		}



	for(j=0;j<i;j++){
		if((arr[j] == arr[i-1])){
	       if(flag==1){
	       	break;
		   }
		}else{
			flag = 1;
			break;
		}
		
		i--;
		
	}
	if(flag == 1){
      cout<<"Not Palindrome";
	}else{
		cout<<"Palindrome !";
	}
}
   

int main(){
	int x;
	cout<<"Enter a Number ";
	cin>>x;
	palindrome(x);
	
	return 0;
}