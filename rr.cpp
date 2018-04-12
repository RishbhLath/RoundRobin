#include<iostream>
using namespace std;
int main()
{
	int k=1,q,n,t=0,at=0,aw=0;
cout<<"Enter the no of processes:";
cin>>n;
cout<<endl<<"Enter the quantum:";
cin>>q;
int A[n],B[n],C[n],T[n],W[n],F[n];
cout<<"------------------------------------------>";
for(int i=0;i<n;i++)
{
	cout<<endl<<endl<<"Enter the arrival time for the process P"<<i<<": ";
	cin>>A[i];
	cout<<endl<<"Enter the Burst time for the process P"<<i<<": ";
	cin>>B[i];
	cout<<"------------------------------------------>"<<endl;
}
for(int i=0;i<n;i++)
{
	F[i]=B[i];
}
int s=A[0];
for(int i=1;i<n;i++)
{
	if(A[i]<s)
	{
		s=A[i];
	}
}
int r=s;
while(k!=0)
{
for(int i=0;i<n;i++)
{
	if(A[i]<=r | t==0)
	{
	if(B[i]>2)
	{
	B[i]=B[i]-q;
	C[i]=r+q;
	r=r+q;	
	}
	else if(B[i]>0 & B[i]<=2)
	{
		C[i]=r+B[i];
		r=r+B[i];
		B[i]=0;
	}
}
	else
	{
		C[i]=0;
	}
	int o=0;
for(int i=0;i<n;i++)
{
o=o+B[i];	
}
k=o;
t++;
}
}
for(int i=0;i<n;i++)
{
T[i]=C[i]-A[i];
}
for(int i=0;i<n;i++)
{
W[i]=T[i]-F[i];
}
for(int i=0;i<n;i++)
{
	at=at+T[i];
}
cout<<endl<<"The Average TAT is ::"<<float(at)/float(n);
cout<<endl<<"------------------------------------------>";
for(int i=0;i<n;i++)
{
aw=aw+W[i];	
}
cout<<endl<<"Waiting itme is::"<<float(aw)/float(n);
}
