#include <kipr/wombat.h>
#include "mylibrary.h"
int main()
{
//PRELIMINARY AUTUMN COMPETITION CODE
    
    //wait for light
    //wait_for_light(5);
    
// WHEEL VALUES
    // Motor 3 is right wheel
    // Motor 0 is left wheel
    
// 1 METRE FORWARD
    //motor(0, 85);
    //motor(3, 85);
    //msleep(6200);
    
// 90 DEGREES RIGHT
    //motor(0, -85);
    //motor(3, 85);
    //msleep(900);

// 90 DEGREES LEFT
    //motor(0, 85);
    //motor(3, -85);
    //msleep(900);

// POSITION TO CAPTURE CUPS 4700
	forward(85, 85, 5600);
    
// CAPTURE CUPS 2000
	forward(0, 0, 2385); 
    
//TURN TO GO TO STOVES 2200
	backward(85, 2623);
    
//850
	drive(-85, 85, 1013);
    
//GO TO GRAB POMS
    motor(0, 85);
    motor(3, 85);
    msleep(5000);
    
//GRAB POMS & STUFF POMS IN THE CUPS
	forward(0, 0, 2385); 
    
//TURN TO PUT POMS IN THE STOVE
	drive(-85, 85, 1020); 
    
    motor(0, 85);
    motor(3, 85);
    msleep(630);
    
//Where cups get put in area
	forward(0, 0, 2385); 
    
//RETURN TO CAPTURE MORE CUPS
	drive(-85, 85, 970);   
    
    motor(0, 85);
    motor(3, 85);
    msleep(5000);
    
	drive(-85, 85, 1020);
    
    motor(0, 85);
    motor(3, 85);
    msleep(2600);
    
//CAPTURE MORE CUPS
	forward(0, 0, 2385); 
    
//GO TO GO TO STOVE
	backward(85, 2623);
    
	drive(-85, 85, 1000);
    
//GO TO GRAB POMS
    motor(0, 85);
    motor(3, 85);
    msleep(8000);
    
//GRAB POMS & STUFF POMS IN THE CUPS
	forward(0, 0, 2385); 
    
//TURN TO PUT POMS IN THE STOVE
	drive(-85, 85, 1020);
    
    motor(0, 85);
    motor(3, 85);
    msleep(630);
    
//Where cups get put in area
	forward(0, 0, 2385); 
    
//RETURN TO CAPTURE MORE CUPS
	drive(-85, 85, 990);   
    
    motor(0, 85);
    motor(3, 85);
    msleep(8000);
    
	drive(-85, 85, 1020);
    
    motor(0, 85);
    motor(3, 85);
    msleep(2800);
    
//CAPTURE MORE CUPS
	forward(0, 0, 2385); 
    
    
//TAKE CUP TO OVEN
    
//LEAVE CUP IN OVEN
    
//ENTER THE OTHER START BOX
    
	return 0;
}
