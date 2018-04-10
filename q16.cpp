#include<stdlib.h>
#include<iostream>
using namespace std;
int main()

{
    int m=0,flag3=0,a1=0,a2=0,flag=0;
    cout<<"\nEnter number of vertices of the graph ";
    cin>>m;
    if(m==0)
    {cout<<"Error";exit(0);}

    int **arr1;
    arr1 = new int*[m];
    for(int i = 0;i<m;i++)
    arr1[i] = new int[m];

    while(true)
    {
    cout<<"Enter the adjacent vertex(Enter -1 to stop)"<<endl;
    cout<<"vertex   ";
    cin>>a1;
    if(a1==-1)
    break;
    cout<<"... adjacent to...";
    cin>>a2;
    arr1[a1][a2]=1;
    arr1[a2][a1]=1;
}



for(int i=0;i<m;i++)
 for(int j=0;j<m;j++)
 {if(i==j && arr1[i][j]==0)
 flag3=1;
 if(i!=j && arr1[i][j]==1)
 flag=1;
 }
 if(flag3==1 && flag==1)
 cout<<"\nComplete Graph ";
 else
 cout<<"Incomplete Graph ";
 }
