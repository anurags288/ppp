#include<iostream>
#include<cmath>
using namespace std;


int main()
{

int p;
cout<<"Enter the maximum degree of the polynomial\n";
cin>>p;

cout<<"Your required polynomial is of form : \n";
char ch = 'a';
cout<<"  F( n )  : ";
for(int i=0;i<p;i++)
{

 cout<<ch++<<" "<<'n'<<p-i<<" ";
 if(i<p-1)
 cout<<"+";
 if(i==p-1)
 cout<<" + "<<ch++<<endl;

 }

 int arr[p+1];
 for(int i=0;i<=p;i++)
 {
 cout<<"Enter the value of cofficients of n"<<p-i<<" :";
 cin>>arr[i];
 }


 int inp;
 cout<<"Enter the value for variable n :";
 cin>>inp;

 int result=0;
 for(int i=0;i<=p;i++)
 {
 int deg = pow(inp,p-i);
 result+=arr[i]*deg;

 }
 cout<<"THE RESULT OF THE GIVEN POLYNOMIAL (FOR THE VALUE OF N = "<<inp<<" ) IS : ";
 cout<<result;

 return 0;
 }
