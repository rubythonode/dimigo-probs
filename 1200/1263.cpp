/**************************************************************
    Problem: 1263
    User: 18HD1520
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1088 kb
****************************************************************/
 
#include <stdio.h>
int fac(int n){int sum=1;
for(int i=1;i<=n;i++)sum*=i;
return sum;}
int main(){int n;scanf("%d",&n);printf("%d",fac(n));}