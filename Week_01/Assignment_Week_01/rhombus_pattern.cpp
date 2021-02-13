#include<simplecpp>
#define B1 forward(100) 
#define B2 forward(20)
#define B3 60
main_program{
	turtleSim();

	repeat(2){
	repeat(2){
		B1;
		left(B3);
		B1;
		left(120);
		}
	right(120);
	penUp();
	B2;
	penDown();
	repeat(2){
		B1;
		left(120);
		B1;
		left(B3);
	}
	right(B3);
	penUp();
	B2;
	penDown();
	}

	wait(5);
}
