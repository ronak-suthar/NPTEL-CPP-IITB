#include<iostream>
#include<simplecpp>

using namespace std;

int main(void){
	initCanvas("demo",1000,1000);

	Turtle a,b,c;
	
	b.left(120);c.left(240);

	repeat(8){
		a.forward(100);b.forward(100);c.forward(100);wait(1);
		a.right(360.0/8);b.right(360.0/8);c.right(360.0/8);
	}

	wait(2);
	
	return 0;
}

