#include<iostream>
#include<iomanip>
using namespace std;

int main(void){
	int t,sum_gc=0,sum_c=0,credit=0,total_credits=0;
	char grade;	
	double curr_cpi=0,spi,cpi;
	
	cin>>t;
	while(t--){
		cin>>grade>>credit;
		sum_gc += (75 - (int)grade) * credit;
		sum_c += credit;
	}
	cin>>curr_cpi>>total_credits;
	
	spi = ((double)sum_gc)/sum_c;
	cpi = ((double)(sum_gc + total_credits*curr_cpi))/(sum_c+total_credits);

	cout<<fixed<<setprecision(2)<<spi<<" "<<cpi<<endl;
	
	return 0;
}

