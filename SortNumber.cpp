#include<iostream>
using namespace std;

void Swap(int x,int y,int * a){
    int temp=a[x];
    a[x]=a[y];
    a[y]=temp;
}

int main(){
    int n;
    cin>>n;
    int* a= new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if(a[j]>a[j+1]){
                Swap(j,j+1,a);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}