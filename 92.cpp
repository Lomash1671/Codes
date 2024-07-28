//SUM of first row in the matrix
#include<iostream>
using namespace std;
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    //Accessing elements
    for(int i =0 ; i<3 ;++i){
        for(int j = 0 ; j<4 ; ++j){
            cout << arr[i][j] <<" ";
        }
        cout << endl;
    }
     //Sum of first row
    int sum = 0;
    for(int i = 0 ; i<4 ; ++i){
        sum += arr[0][i];
    }
    cout << "Sum of first row is : " << sum << endl;
    return 0;
}