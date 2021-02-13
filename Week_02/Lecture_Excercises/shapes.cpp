#include<iostream>
#include<simplecpp>

using namespace std;

int main(void){
	
	initCanvas("shapes",1000,1000);
	
	Circle c1(100,100,75);
	Rectangle r1(200,200,40,30),r2(350,350,1000,25);
	Line l1(250,250,250,350);
	Text t1(500,500,"SimpleCpp Demo");
	
	cout<<textHeight()<<endl;
	cout<<textWidth("SimpleCpp Demo")<<endl;
	
	Rectangle t1_box(500,500,textWidth("SimpleCpp Demo")+5,textHeight()+5);	
	wait(3);

	return 0;
}

