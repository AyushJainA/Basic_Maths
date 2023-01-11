#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pnt(vector<int> arr, vector<int> &ds ,int n,int index =0){
    // base condition 
    if(index == n){
        for(auto it : ds){cout<< it <<" ";}
        if(ds.size()==0){cout<<"{}";}
        cout<<endl;
        return ;
    }

//take the first index ok 
ds.push_back(arr[index]);
pnt(arr,ds,n,index+1);

//not take the first index-->now we will pop out the taken index
ds.pop_back();
pnt(arr,ds,n,index+1);

}

int main(){

vector<int> arr = { 3,1,2};
int n = arr.size();
vector<int> ds;// ye empty vector hai jo print hoga 

pnt(arr,ds,n);

    return 0;
}
