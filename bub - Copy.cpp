#include<bits/stdc++.h>
using namespace std;
void swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void bubble(int A[],int n)
{
    int i,j,flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for (int j = 0; i <n-1-i; j++)
        {
              if(A[j]>A[j+1])
              {
                swap(&A[j],&A[j+1]);
                flag=1;
              }
        }
        if(flag==0)
        return;
        
    }
}
int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;
    bubble(A,n);
    for(i=0;i<n;i++)
    cout<<A[i]<<endl;
    return 0;
}