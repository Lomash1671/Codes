//Dynamic Values in 2-D Array
#include<iostream>
using namespace std;
int main(){
    int m , n;
    cout<<"Enter the number of rows: " << endl;
    cin>> m;
    cout<<"Enter the number of columns: "<<endl;
    cin>>n;
    int arr[m][n];
    for(int i = 0; i<m ;++i){
        for(int j = 0; j< n;++j){
            cout<<"Enter the Elements: "<<endl;
            cin>>arr[i][j];
            cout<<arr[i][j]<<endl;
        }
        cout<< endl;
    }
    return 0;
}