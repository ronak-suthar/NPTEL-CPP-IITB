#include<simplecpp>
#define B1 2
#define B2 3
#define B3 2
#define B4 4
main_program{
	repeat(B1){
		repeat(B2){
			cout<<"b";
			repeat(B3){
				cout<<"c";
			}
		}
		repeat(B4){
				cout<<"a";
				repeat(2){
					cout<<"a";
				}
		}
	}
	cout<<endl;
}
