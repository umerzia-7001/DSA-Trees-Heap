#include "stack"
#include <iostream>
#include <string>
#include "list"
using namespace std;


void max_heap(int *array,int x, int n){

    int j,t;
    t= array[x];
    j = 2*x;

    while(j<=n){
        if(j<n && array[j+1]> array[j]){
            j+=1;
        }
        if(t > array[j]){
            break;
        }
        else if (t<=array[j]){
            array[j/2]=array[j];
            j = 2*j;
        }
    }
    array[j/2] = t;
    return;
}
// function to build max heap from an array
void build_maxHeap(int *x,int n){

    int k;
    for(k= n/2;k>=1;k--){
        max_heap(x,k,n);
        }
    }


int main() {
    int n, i;
    cout<<"enter no of elements of array"<<endl;
    cin>>n;
    int array[30];
    for (i = 1; i <= n; i++) {
        cout<<"enter elements"<<" "<<(i)<<endl;
        cin>>array[i];
    }
    build_maxHeap(array,n);
    cout<<"Max Heap\n";
    for (i = 1; i <= n; i++) {
        cout<<array[i]<<endl;
    }
    return 0;
}
