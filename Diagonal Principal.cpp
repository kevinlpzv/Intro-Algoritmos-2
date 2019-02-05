#include <iostream>

using namespace std;

int main()
{   int diag[3][3]={{1,0,0}, {0,1,0}, {0,0,1}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                cout<<diag[i][j]<<endl;
            }
        }
    }

    return 0;
}
