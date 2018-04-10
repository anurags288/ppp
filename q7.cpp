#include<iostream>
using namespace std;

bool binary_search(int a[], int l, int h, int var)
{if (l>h)
    return false;
   int mid=(l+h)/2;
   if(var==a[mid])
   return true;
   else if(var>a[mid])
   {
   l=mid+1;
   return (binary_search(a,l,h,var));
   }
   else if(var<a[mid])
   {
   h=mid-1;
   return (binary_search(a,l,h,var));
   }
}


int main()
{
    int size=0,val=0;
    cout<<"\nEnter the  number of elements for the array:";
    cin>>size;
    int *arry = new int[size];
    for(int i=0;i<size;i++)
    {
    cout<<"\nEnter "<< i+1 <<" element : ";
    cin>>arry[i];
    }

    cout<<"\nEnter the element to be searched:";
    cin>>val;
    int temp;
    for(int i=1;i<size;i++)
    { if (arry[i]>arry[i-1])
        {temp = arry[i];
        arry[i] = arry[i+1];
        arry[i+1] = temp;
        }
    }

    bool b = binary_search(arry,0,size-1,val);
    if(b)
    cout<<"\nElement found...";
    else
    cout<<"\nElement not found...Please try another element: ";
    return 0;

 }
