#include<iostream>

using namespace std;

// 8 -> 1000
// 1st time == 0 count=0
// 2nd time == 0 count=0
int count_ones(int num){
    int count=0;

    while(num!=0){
        if(num%2!=0){//lsb is one , case of odd number
            count++;
        }
        num = num / 2;
    }

    return count;
}
int main(void){
    
    int num;
    cin>>num;

    cout<<count_ones(num)<<endl;
    return 0;
}