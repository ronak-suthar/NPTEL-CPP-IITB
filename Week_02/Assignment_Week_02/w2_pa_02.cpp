#include<iostream>

using namespace std;

int main(void){
	int num,digit,count,carry=0,result=0;

	cin>>num;
	cin>>count;

	for(int i=0;i<count-1;i++){
		cin>>digit;
		result = ((num*digit) % 10 + carry) % 10;
		cout<<result<<endl;
		carry = (num*digit + carry)/10;
	}
	cin>>digit;
	int end= num*digit + carry;
	for(int i=0;end>0;i++){
		cout<<end%10<<endl;
		end=end/10;
	}
				
	return 0;
}

