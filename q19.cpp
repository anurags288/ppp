#include<iostream>
using namespace std;


int check_euler(int a[],int size)
{   int count = 0;
    for(int i=0;i<size;i++)
    { if(a[i]%2 != 0)
       count++;
    }
    if(count==0)
    return 1;
    else if(count==2)
    return 2;
    else
    return 3;
}

int main()
{
	char ch = 'y';
	int n, x, y;

	int* inDeg;
	int* outDeg;
	int* deg;


	int g[10][10];
    cout<<"Enter the number of vertices: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            g[i][j] = 0;
        }
    }

    inDeg = new int[n];
	outDeg = new int[n];
	deg = new int[n];

	for(int i = 0; i < n; ++i) {
    		outDeg[i] = 0;
    		inDeg[i] = 0;
		}

    while (ch == 'y' || ch == 'Y' ){
        cout<<"Enter the nodes between which you want to introduce edge:\n";
        cout<<"From: ";
        cin>>x;

        cout<<"To: ";
        cin>>y;

		g[x-1][y-1] = 1;

    	cout<<"Edge From "<<x<<" To "<<y<<" is created successfully\n";

        cout<<"Want to connect more (y/n)\n";
        cin>>ch;
    }

    for(int i = 0; i < n; ++i) {
    	for(int j = 0; j < n; j++)
    		if(g[i][j] == 1) {
    			outDeg[i]++;
    			inDeg[j]++;
			}
	}

	for(int i = 0; i < n; ++i) {
		deg[i]=outDeg[i]+inDeg[i];
	}

	int result = check_euler(deg,n);
	if(result == 1)
	cout<<"\nAtleast one Euler circuit and Euler path possible \n";
	else if(result == 2)
	cout<<"\nThere is no Euler Circuit but at least 1 Euler Path possible \n";
	else if(result == 3)
	cout<<"\nNo Euler Circuits or Euler Paths possible \n";
   return 0;


}

