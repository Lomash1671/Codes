#include<iostream>
using namespace std;

void selection_sort(int arr[], int len){
    for(int i=0; i<len-1;i++){
        int min = i;
        for(int j=i+1; j<len; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, len);
    cout << "The sorted array is : ";
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}