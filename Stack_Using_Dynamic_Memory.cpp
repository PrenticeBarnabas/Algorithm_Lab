#include<bits/stdc++.h>
using namespace std ;

int n=5;
int top=-1;
int *Stack= new int {n};


bool isFull()
{
return top==n-1?true:false;
}

bool isEmpty()
{
return top==-1?true:false;
}

void findTopItemPosition()
{
cout<<"Top Item Is In Position (Index): "<<top<<endl;
return ;
}

void push(int x)
{
if(isFull())
{
cout<<"Stack Is Full, Cannot Add Items"<<endl;
return;
}
else
{
cout<<"Items Added"<<endl;
top++;
Stack[top]=x;
}
}

void pop()
{
if(isEmpty()){cout<<"Stack Is Empty"<<endl;}
cout<<"Item In Position (Index) "<<top<<" Is Popped"<<endl;
top--;
}
void print()
{
cout<<endl;
cout<<"Output Stack: "<<endl;
for(int i=top; i>=0; i--)
{
cout<<Stack[i]<<endl;
}
cout<<endl;
}

int main ()
{
push(10);
push(20);
push(30);
push(40);
push(50);
push(60);

print();

pop();
pop();
pop();

print();

findTopItemPosition();
return 83;
}
