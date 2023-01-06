#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rev(int arrr[], int n,int i=0  ){
	if(i>=n/2){return ;}
	swap(arrr[i],arrr[n-i-1]);
	
	
	rev( arrr, n, i+1);
	
} 

int main(){
	
	int n; cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	rev( arr , n);
	
	cout<<"After calling function ";
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	

return 0;
}

