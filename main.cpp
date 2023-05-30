/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int row ;
    cin>>row;
    int col;
    cin>>col;
    int **arr = new int *[row];
    for(int i =0 ; i< row ; i++){
        arr[i] = new int [col];
    }
     
    for(int i = 0 ; i < row ; i++){
        for(int  j = 0; j < col ; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i = 0 ; i< row; i++){
        for(int  j = 0; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
  
    for(int  j = 0; j < col ; j++){
    delete []arr[j];
        }
    delete []arr;    
    
    return 0;
}