#include <kipr/wombat.h>

int main()
{
	//CIRCLE THE CAN CODE
    
    //wait for light
    wait_for_light(5);
    
    // Move in an arc to circle the can
    // Motor 0 is right wheel
    // Motor 3 is left wheel
    
    // Orient properly to complete circle
    motor(0, -80);
    motor(3, 80);
    msleep(0400);
    
    // Arc 1
    motor(0, 80);
    motor(3, 70);
    msleep(4800);
    
    // Turn
    motor(0, 80);
    motor(3, -80);
    msleep(0700);
    
    // Top Straightaway
    motor(0, 80);
    motor(3, 30);
    msleep(15500);
    
    // Straight to return
    motor(0, 80);
    motor(3, 80);
    msleep(4000);
    
    // ABOUT FACE!!
    motor(0, 50);
    motor(3, -50);
    msleep(1000);
    
    motor(0, 80);
    motor(3, 80);
    msleep(1000);
    
    motor(0, 50);
    motor(3, -50);
    msleep(1000);
    
    return 0;
}
