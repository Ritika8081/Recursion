/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<limits.h>
using namespace std;
// void printArray(int arr[],int n,int i){
//     if(i>=n){
//         return;
//     }
//     cout<<arr[i]<<endl;
//     printArray(arr,n,i+1);
    
// }
// void maxEle(int arr[],int n,int i,int &target){
//     if(i>=n){
//         return ;
        
//     }
//     // if(arr[i]>maxi){
//     //     maxi=arr[i];
//     // }
//     if(arr[i]==target){
//         cout<<"fount at"<<i<<" ";
//     }
    
//     maxEle(arr,n,i+1,target);
// }
bool isSort(int arr[],int n,int i){
    if(i==n-1){
        return true;
        
    }
    
    if(arr[i]>arr[i+1]){
        return false;
    }
    
    
    return isSort(arr,n,i+1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    bool isSorted=isSort(arr,n,i);
    if(isSorted){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
//     // printArray(arr,n,i);
//     int maxi =INT_MIN;
//     int target=3;
// maxEle(arr,n,i,target);

    return 0;
}

