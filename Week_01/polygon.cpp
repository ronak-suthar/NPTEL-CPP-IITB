#include<simplecpp>

main_program{
        turtleSim();
	cout<<"Enter sides for polygon : ";
	int nsides; cin>>nsides;

        repeat(nsides){
                forward(100);
                right(360.0/nsides); // turning angle
        }

        wait(7);
}

