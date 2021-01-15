//Draw a five pointed star

#include<simplecpp>

main_program{
	turtleSim();
	
	repeat(5){//five sides for five steps
		
		forward(200);//forward draw length
		
		right(180-36);//turning angle
	}
	wait(2);
	
}
