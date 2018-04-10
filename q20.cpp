#include <iostream>
using namespace std;

int main()
{
        int m;int i;
        cout<<"Enter the value of m of m-ary tree\n";
        cin>>m;

        cout<<"Enter number of internal vertices\n";
        cin>>i;

        int n = (i*m)+1;
        int l = ((m-1)*n +1)/m;
        cout<<"The no. of Leaf nodes are "<<l;

  }

