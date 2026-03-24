#include <kipr/wombat.h>
#include <du_Astolat.h>

int main()
{
    
enable_servos();
//----------------------------------------------------------//
//    GET THE FIRST TWO PALLETS ON EXTERNAL LOADING DOCK    //
//----------------------------------------------------------//
    
    left(1400);
    stop(100);
    forward(200);
    stop(100);
    left(4000);
    stop(100);
    forward(2500);
    stop(100);
    rightTURN(1700);
    stop(100);
    forward(600);
    stop(100);
    
    //back claw open
    set_servo_position(2, 1125);
    msleep(1000);
    set_servo_position(1, 1195);
    msleep(1000);
    stop(200);
    
    //back claw closed
    
    set_servo_position(2, 760);
    msleep(1000);
    set_servo_position(1, 2040);
    msleep(1000);
    stop(200);
    
    back(1000);
    stop(500);
    
    
    
    //1450 for forklift lower

    set_servo_position(0, 1372);
    msleep(1000);
    stop(300);
    forward(200);
    stop(100);
    right(150);
    stop(100);
    forward(800);
    stop(100);
    set_servo_position(0, 20);
    msleep(1000);
    stop(500);
    
    back(5000);
    stop(500);
    forward(200);
    right(500);
    rightTURN(2000);
    
    forward(1200);
    
disable_servos();
    
    return 0;
}
