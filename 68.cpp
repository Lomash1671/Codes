//count of consecutive one in the array = {1,0,1,1,0,1,1,1}
#include<iostream>
using namespace std;


int main(){
    int arr[8] ={1,0,1,1,0,1,1,1};
    int count =0;
    int max = 0 ;
    for(int i=0;i<=8;i++){
        if(arr[i]==1){
            count++;
        }
        else{
            if(count>max){
                max = count;
            }
            count=0;
        }
    }
    cout << "The maximum consecutive ones are : " << max << endl;
}
