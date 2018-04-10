#include<iostream>
using namespace std;

void bubble_sort(int a[], int size)
{
    int temp = 0;

    for(int i=0;i<size-1;i++)
    for(int j=0;j<size-i;j++)
    {if(a[j]>a[j+1])
    {temp = a[j];
     a[j] = a[j+1];
     a[j+1] = temp;


    for(int k=0;k<size-1;k++)
    cout<<a[k]<<"  ";
    cout<<a[size-1];
    cout<<endl;
    }
}
}


int main()
{
    int size=0,val=0;
    cout<<"\nEnter the  number of elements for the array: ";
    cin>>size;
    int *arry = new int[size];
    for(int i=0;i<size;i++)
    {
    cout<<"\nEnter "<< i+1 <<" element : ";
    cin>>arry[i];
    }

     bubble_sort(arry, size);

 }
