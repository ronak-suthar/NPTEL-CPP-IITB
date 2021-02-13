#include<simplecpp>

main_program{
	turtleSim();
	
	int fwd_len=100;

	repeat(4){
		forward(fwd_len);
		right(90);
	}
	wait(1);
	
	
	forward(fwd_len/2);
	
	float manuvre_len = sqrt(fwd_len*fwd_len/2);

	right(45);
	
	wait(1);

	repeat(4){
                forward(manuvre_len);
                right(90);
        }

	wait(2);
	

}
