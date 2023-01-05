#include <iostream>
#include <bits/stdc++.h>
using namespace std;

inline int getmax(int &a ,int &b){
	return(a>b) ? a : b;
}

int func(int arr[] ,int n, int start =0){ // default argumenent always right to left rhegi that means pehle start default bnega tab hi n default bnn payega 
					// agr start default nhi hai too n default argu nhi bnn payega 
	
	for(int i=start ;i<n;i++){
		cout<<arr[i]<<" ";
	} cout<<endl<<endl;
}
int main(){

	/*
	
	Inline function -- The function which exist in only one or two line not more then 3 line 
	agr bda function define krenge inline me complier will treat it as a normal function...
	 
	global variable - can be accessed by any function
	
	Default arguments -- ek default value assume kr lete hai 
	
	*/
	
	int a=5,b=9;
	cout<<getmax(a,b)<<endl;
	
	
	
	int size=5;
	int ar[5]={1,2,3,4,5};
	cout<<"Without argument ";
	func(ar,size);
	cout<<"With argument(start) it is ";
	func(ar,size,0);
	func(ar,size,2);


return 0;

}


