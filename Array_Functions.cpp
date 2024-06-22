#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void print(int * a , int n)
 {  cout<<"Output Array: "<<endl;
    for(int i=0; i<n;i++)
    cout << a[i]<< " ";
 }

 int *AddAtStarting(int * a, int n, int num)
 {
 int *b=new int[n+1];
 b[0]=num;
 for (int i=0; i<n;i++ ){ b[i+1]=a[i];}
 return b;
 }

 int *makeDouble(int *m, int n)
 {

 int *b= new int[n];
 for (int i=0; i <n;i++)
 { b[i]=m[i]*2; }
 return b;
 }


 int searchArray(int *a,int n,int num)
 {
 for( int i=0; i< n; i++)
 {
 if (a[i]==num)
 { return i; }
 }
 }

int *deleteItem(int * a, int n, int num, int index)
{
int *b=new int [n-1];
for (int  i=0; i< index; i++) { b[i]=a[i]; }
for (int i=index; i<n-1;i++)  { b[i]=b[i+1];}
return b;
}


int main ()
{
 int a[5]={10,20,30,40,50};
 print(a,5); cout<<endl;

 int *p= makeDouble(a,5);
 print(p,5); cout<<endl;

 p= AddAtStarting(a,5,100);
 print(p,6);cout<<endl;

 int index= searchArray(p,5,30);
 cout<<"The Item Was Found At Index: "<<index<<endl;

 int *c= deleteItem(p,6,30,3);
 print(c,5);
 cout<<endl;cout<<endl;

return 83;
}
