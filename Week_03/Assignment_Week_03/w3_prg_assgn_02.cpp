#include<iostream>

using namespace std;

//5
//25 30 35 40 45
//f  s  f 
int main(void){
    int terms,first=0,second=0,diff=0,diff_last=0,count=3;//Number of terms
    cin>>terms;
    terms--;

    cin>>first;

    while(terms>0){
        cin>>second;
        diff = second - first;
        if(diff==diff_last){
            count--;
        }
        if(count==0){
            cout<<1<<endl;
            break;
        }
        first=second;
        diff_last=diff;
        terms--;
    }
    if(count!=0){
        cout<<0<<endl;
    }
    return 0;
}