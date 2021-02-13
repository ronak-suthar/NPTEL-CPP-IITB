//Print Sum for below series
// e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! ..... + 1/n!
//Take input as n were, n>=0

#include<iostream>

using namespace std;

int main(void){
	int n;double sum=1,term=1; 
	
	cin>>n;n+=1;
	
	for(int i=1;i<n;i++){
		term = term/i;
		sum = sum + term;
	}
	
	cout<<"Sum of the Series is : "<<(double)sum<<endl;
		
	return 0;
}

