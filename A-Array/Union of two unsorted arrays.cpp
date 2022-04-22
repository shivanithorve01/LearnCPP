
#include <iostream>
using namespace std;
//function for union of two unsorted array
void unionUnsorted(int A[],int B[],int x,int y)
{
    for(int i=0;i<x;i++)//To print entire array C.
    {
        cout<<A[i]<<" ";
    }
    for(int j=0;j<y;j++)
    {
        int flag=0;
        for(int i=0;i<x;i++)
        {
            if(A[i]==B[j])
            {
                flag=1;
                break;
            }
        }
        if(flag!=1)//element from B is not present in A
        {
            cout<<B[j]<<" ";//to print elements from B which are not present in A.
        }
    }
    
}
//Main Function 
int main()
{
    int A[100];
    int B[100];
    int m,n;
    
    cout<<"\nEnter the size of the first array : \n";
    cin>>m;
    
    cout<<"\nEnter the elements of first array : \n";
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    
    cout<<"\nEnter the size of the second array : \n";
    cin>>n;
    
    cout<<"\nEnter the elements of second array : \n";
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    
    cout<<"Union of unsorted arrays is :\n";
    unionUnsorted(A,B,m,n);
    
    return 0;
}
