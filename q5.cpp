#include<iostream>
using namespace std;

int fabonacci(int n)
{
if (n==0||n==1)
return n;
else
return (fabonacci(n-1)+fabonacci(n-2));
}
int main()
{int i=0;
int num;
int fab;
cout<<"\nEnter the number of elements to be generated in a Fabonacci series : ";
cin>>num;
while(i<num)
    {
    fab = fabonacci(i);
    cout<<"\n\t"<<fab<<endl;
    i++;
    }
return 0;
}
