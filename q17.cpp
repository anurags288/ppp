#include<iostream>
using namespace std;




int main()
{
	char ch = 'y';
	int n, x, y;

	int* inDeg;
	int* outDeg;


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
		cout<<"Vertex "<<i+1<<": \n"<<"In-degree = "<<inDeg[i]<<"  Out-degree = "<<outDeg[i]<<endl;
		cout<<endl;
	}

   return 0;


}

