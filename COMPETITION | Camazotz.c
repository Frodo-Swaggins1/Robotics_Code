#include <kipr/wombat.h>
#include <du_Astolat.h>

int main()
{
    
    wait_for_light(5);
	shut_down_in(119);
    enable_servos();
    
    set_servo_position(0, 1040);
    set_servo_position(3, 440);
    msleep(1000);
    ao();
    
    //Move diagonal to the right
    forwardR(8000);
    right(4000);
    forward(1400);
    stop(100);
    back(700);
    stop(100);
    forward(200);
    stop(1000);
    ao();
    
    set_servo_position(0, 2048);
    msleep(1000);
    ao();
    set_servo_position(3, 1470);
    msleep(1000);
    ao();
    
    forward(100);
    stop(500);
    ao();
    back(30);
    stop(500);
    ao();
    
    motor(back_R, 80);
	motor(front_R, 80);
	motor(front_L, -80);
	motor(back_L, -80);
	msleep(200);
    stop(400);
    ao();
    
    left(2100);
    stop(100);
    back(150);
    stop(100);
    slowServo(3,1480,440,10);
    stop(1000);
    set_servo_position(0, 1040);
    stop(1000);
    msleep(1000);
    ao();
    
    back(1000);
    stop(100);
    ao();
    
    motor(back_R, 80);
	motor(front_R, 80);
	motor(front_L, -80);
	motor(back_L, -80);
	msleep(3900);
    stop(400);
    ao();
    
    forward(5000);
    stop(100);
    back(2000);
    stop(100);
    ao();
    
    right(7000);
    stop(100);
    left(1500);
    stop(100);
    forward(1000);
    stop(100);
    ao();
    
    set_servo_position(3, 170);
    forward(500);
    stop(100);
    ao();
    
    set_servo_position(3, 440);
    back(1000);
    stop(100);
    ao();
    
    
    disable_servos();
    return 0;
}
