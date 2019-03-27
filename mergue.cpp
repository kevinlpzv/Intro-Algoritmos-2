#include <iostream>
#include <array>
#include <stdlib.h>
#include<ctime>

using namespace std;
 void mergesort(int a[], int lo, int hi){

     int inf=100;
if(hi<=lo)    return;
int mid=lo+(hi-lo)/2;
mergesort(a,lo,mid);
mergesort(a,mid+1,hi);
int  b[mid+2],c[mid+2];
for(int k=lo;k<=mid;k++){
    b[k-lo]=a[k];
    }
for(int k=mid+1;k<=hi;k++){
    c[k-mid-1]=a[k];}
b[mid-lo+1]=inf;c[hi-mid]=inf;
int i=0, j=0;
for(int k=lo;k<=hi;k++){
    if(c[j]<b[i]){
    a[k]=c[j++];
}else{
    a[k]=b[i++];
    }
}
}

int main()

{

    int n=20, A[n];
    srand(time(NULL));

    for(int x=0;x<n;x++)
	{

		A[x]=rand()%20;
		cout<<"Numeros aleatorios:"<<" "<<A[x]<<endl;
	}
	mergesort(A,0,n);
	for(int y=0;y<n;y++)
    {
        cout<<"\nNumeros ordenados"<<" "<<A[y];
    }

    return 0;
}
