//Draw array of tiles 4x4 seperated from each other
#include<simplecpp>

main_program{
	turtleSim();
	int fwd_len=50;
	
	repeat(4){	
		repeat(4){

			repeat(4){
			
				forward(fwd_len);
			
				right(90);
			}

			penUp();

			forward(fwd_len+20);

			penDown();
		}

	penUp();
	forward(-4*(fwd_len+20));
	right(90);
	forward(fwd_len+20);
	right(-90);
	penDown();
	}

	wait(1);
}

