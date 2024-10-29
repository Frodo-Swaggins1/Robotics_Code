#include <kipr/wombat.h>

int main()
{
	//CIRCLE THE CAN CODE
    
    //wait for light
    wait_for_light(5);
    
    // Move in an arc to do a figure 8
    // Motor 0 is right wheel
    // Motor 3 is left wheel
    
    // First half
    motor(0, 35);
    motor(3, 85);
    msleep(2500);
    
    motor(0, 85);
    motor(3, 35);
  	msleep(5000);
    
    motor(0, 35);
    motor(3, 85);
    msleep(12000);
  
    motor(0, 85);
    motor(3, 35);
  	msleep(5000);
    
    motor(0, 35);
    motor(3, 85);
    msleep(2500);
    
    return 0;
}
