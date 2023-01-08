#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printf(vector<int> arr,vector<int> &ds,int n,int sum, int index=0,int sub=0 ){
// base case
if(index==n && sub==sum  ){ 
    for(auto it : ds){
        cout<< it <<" ";
    }
     cout<<endl;
    return;
}
else if(index == n){return;}

// arr[index] is not taken
printf(arr,ds,n,sum,index+1,sub);// 

// arr[index] is taken
//--> Remember jab jab push krenge pop bhi krenge 
ds.push_back(arr[index]);
sub += arr[index];
printf(arr,ds,n,sum,index+1,sub);
ds.pop_back();
}

int main(){
vector<int> arr = { 1,2,1};
int n = arr.size();
vector<int> ds;
int sum=2;

printf(arr,ds,n,sum);


    return 0;
}