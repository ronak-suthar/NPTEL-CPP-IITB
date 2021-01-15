#include<simplecpp>

main_program{
	int fwd_len=50,dir=1;
	
	turtleSim();
	
	wait(25);

	repeat(20){

	repeat(2){
		forward(fwd_len);
	
		repeat(270){
			forward((fwd_len/5)*sine(1));
			right(dir*1);
		}
		
		right(-1*dir*20);

		dir *= -1;
	}

	right(-20);
	}
	
	wait(60);
}


