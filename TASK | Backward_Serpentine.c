#include <kipr/wombat.h>

int main()
{
	//Serpentine Forward Code
    
    //wait for light
    //wait_for_light(5);
    
    // Touch every number sequentially
    // Motor 0 is right wheel
    // Motor 3 is left wheel
    //To go straight:
    //motor(0, 85);
    //motor(3, 75);
    //msleep(----);
    
    // 1st and 2nd number
    motor(0, -85);
    motor(3, -75);
    msleep(0700);
    
    motor(0, -85);
    motor(3, -75);
    msleep(0255);
    
    motor(0, -10);
    motor(3, -85);
    msleep(2500);
    
    motor(0, -85);
    motor(3, -75);
    msleep(1700);
    
    // 3rd number
    motor(0, -85);
    motor(3, -10);
    msleep(4500);
    
    //4th number
    motor(0, -85);
    motor(3, -75);
    msleep(2500);
    
    //5th number
    motor(0, -10);
    motor(3, -85);
    msleep(3500);
    
    //6th number
    motor(0, -85);
    motor(3, -75);
    msleep(1500);
    
    //7th and 8th numbers
    motor(0, -85);
    motor(3, -15);
    msleep(3700);
    
    //9th number
    motor(0, -85);
    motor(3, -75);
    msleep(1500);
    
    //10th and 11th number
    motor(0, -05);
    motor(3, -85);
    msleep(4777);
    
    //12th number
    motor(0, -60);
    motor(3, -85);
    msleep(1000);
    
        

    
    return 0;
}
