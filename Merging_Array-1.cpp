#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int x=5,y=5,z;
int A[x]={10,20,30,40,50};
int B[y]={60,70,80,90,100};
z=x+y;
int C[z];
for(int i=0; i<x; i++){
    C[i]=A[i];
}
for(int i=0; i<y; i++){
    C[i+x]=B[i];
}
cout<<"Merged Array: ";
for(int i=0; i<z; i++){
    cout<<C[i]<<" ";
}
cout<<endl;
return 83;
}

