//Draw seven identical circles with six touching the central circle
#include<simplecpp>

main_program{

	turtleSim();

	repeat(360){//Draws Central Circle
		forward(50*sine(1));//s=radius*theta
		right(1);//each step turn by one degree
	}
	
	repeat(6){//Draws six surrounding circles

		right(180);//reverse position

		repeat(360){//Draw another Circle
                	forward(50*sine(1));
                	right(1);
        	}
	
		right(180);//reverse position

		penUp();

		repeat(60){//without drawing move by 60 degrees
			forward(50*sine(1));
                	right(1);
		}

		penDown();
	}

	wait(2);
}
