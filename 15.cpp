#include<iostream>
using namespace std;
int main(){
    int array[5];
    int max = -32678;
    for (auto temp : array){
        if(temp > max){
            max = temp;
        } //use if (temp<min) then min = temp with min = INT64_MAX initial for minimum
    }
    cout <<"Max element is : " << max;

}