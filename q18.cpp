#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int ver;
cout<<"ENTER THE NUMBER OF VERTICES OF GRAPH "<<endl;
cin>>ver;

int arr[ver][ver];

int x,y;

char ch = 'y';

 while (ch == 'y' || ch == 'Y' ){
        cout<<"Enter the nodes between which you want to introduce edge:\n";
        cout<<"From: ";
        cin>>x;

        cout<<"To: ";
        cin>>y;

		arr[x-1][y-1] = 1;

    	cout<<"Edge From "<<x<<" To "<<y<<" is created successfully\n";

        cout<<"Want to connect more (y/n)\n";
        cin>>ch;
    }

 for(int i=0;i<ver;i++)
{
 for(int j=0;j<ver;j++)
 {
  //if(arr[i][j]!=1)
  //arr[i][j]=0;

  }

 }

 cout<<"THE ADJAENCY MATRIX OF REQUIRED GRAPH IS :"<<endl;
int c[ver][ver];
for(int i=0;i<ver;i++)
{
 for(int j=0;j<ver;j++)
 {

  cout<<arr[i][j]<<" ";
  //c[i][j]=arr[i][j];
  if(j==ver-1)
  cout<<endl;

  }
}

int mult[ver][ver];
for(int i=0;i<ver;i++)
for(int j=0;j<ver;j++)
 mult[i][j]=arr[i][j];

cout<<" ENTER THE LENGTH OF PATH REQUIRED BETWEEN VERTICES :\n";
int len;
cin>>len;
while(len!=1)
{
for(int i=0;i<ver;i++)
{
for(int j=0;j<ver;j++)
{
c[i][j]=0;
for(int k=0;k<ver;k++)
{
c[i][j]+=(mult[i][k]*arr[k][j]);
}
}
}
for(int l=0;l<ver;l++)
for(int s=0;s<ver;s++)
mult[l][s]=c[l][s];
len--;
}

cout<<endl;

for(int i=0;i<ver;i++)
{
for(int j=0;j<ver;j++)
{
cout<<mult[i][j]<<" ";
}
cout<<endl;
}


cout<<"\nEnter source vertex ";
 int source;
 cin>>source;

 cout<<"\nEnter destination vertex ";
 int destin;
 cin>>destin;



  cout<<mult[source-1][destin-1];

return 0;

}


