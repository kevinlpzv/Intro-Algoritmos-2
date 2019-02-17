/*#include <iostream>

using namespace std;

int main()
{
    int temp, A[7]={1,4,9,3,9,6,4};
    for(int j=0;j<(7-1);j++){
        for(int i=0;i<(7-1);){
        if(A[i]>A[i+1]){
        temp=A[i+1];
        A[i+1]=A[i];
        A[i]=temp;
            }

        }
cout << "No. Ordenados:"<<""<<A[j]<< endl;
    }

    return 0;
}*/
#include<iostream>
using namespace std;

int main(){

	int A[8] = {6,1,3,9,9,5,4,9};
	cout << "Arreglo desordenado";
	for(int k = 0; k < 8; k++){
		cout << A[k] << " ";
	}

	for (int i = 0; i < (8-1); i++){
		for(int j=0; j < (8-i-1); j++){
			if(A[i] > A[i+1]){
				int temp = A[i+1];
				A[i+1] = A[i];
				A[i] = temp;
			}
		}
	}
	cout << "\nArreglo ordenado: ";
	for(int k = 0; k < 8; k++){
		cout << A[k] << " ";
	}

}
