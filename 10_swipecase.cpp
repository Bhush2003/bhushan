#include<iostream>
using namespace std;
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swaptheno(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[1],arr[i+1]);
        }
    }
}



int main(){


    int even[6] = {45,58,47,75,14,48};
    int odd[7] = {58,47,58,69,14,25,36};

    swaptheno(even,6);
    printarr(even,6);
    cout<<endl;
    swaptheno(odd,7);
    printarr(odd,7);
    return 0;
}