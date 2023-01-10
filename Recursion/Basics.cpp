#include <iostream>
#include <bits/stdc++.h>
using namespace std;

	int sum(int n ,int ans =0,int i=1){
		if(i>n){return ans;	}
		ans=ans+i;
		i++;
		sum(n, ans ,i);
		
	}
	int f(int i,int sum=0){
		cout<<"Backtracking++"<<endl;
		if(i<1){cout<<sum;return 0;
		}
		sum=sum+i;
		f(i-1,sum);
		cout<<endl<<"Backtracking";
	}
	
	//functional recurssion --> which returns somthing
	
	int fnc(int i ){
		if(i==0) { return 0;
		}
		return i+fnc(i-1);
	}
	
	int factorila(int n){
		if(n==1){return 1;
		}
		return n*factorila(n-1);
	
	} // there are many types of recursion 
	
int main(){
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
	f(n);
	
	cout<<endl<<"Factorial of n is "<<factorila(n)<<endl;
return 0;
}

