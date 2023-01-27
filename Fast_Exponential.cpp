#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	
    int res=1;
    while(n>0)   {
        if(n&1){ //checking odd 
    res= (1LL * (res) *(x) )%m ; }  // 1LL range me lane k liye 
        x=(1LL * (x)%m *(x)%m);
        n=n>>1; //divide by 2 
       
                 }
   return res; 
}
