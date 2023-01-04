#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	// Refrence Variable 
	// ek memory block k 2 naam 
	
	int i =5;
	int &j =i;
	cout<<i<<endl;
	i++;
	cout<<i<<endl;
	j++;
	cout<<i<<endl;
	cout<<j<<endl;
	
	// int& func(int a ) ese use nahi karna hai;
	
	/* int x;
	cin>>x;
	int arr[x];

	ye bhi nhi karna hai due to limitation of limited memory in static memory 
	*/	
	
	
	/* there are two type of memory static and dynamic 
	static for stack which is small 
	dnamic for heap whic is learger */
	
	int *arr=new int[5]; // dynamic allocation of array , ye ek memory address hai
	/* while(true){
	
	int i =5;
	int *p=new int; // ye ek memory address hai
	
	} after the while loop i wali memory release hojayega 
	  but dynamic allocated new int exist krega 
	  ese manually delete krna pdega by using    " delete p; " */
	
return 0;
}


