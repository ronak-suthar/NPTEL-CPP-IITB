#include<simplecpp>

main_program{
	turtleSim();
	repeat(3){
		forward(100);
		right(180 - 60); // exterior angle = 180 - 60
	}

	wait(2);
}

