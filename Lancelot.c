#include <kipr/wombat.h>
#include <du_Astolat.h>

int main()
{
    

//----------------------------------------------------------//
//                GET THE FIRST TWO PALLETS                 //
//----------------------------------------------------------//
    
    wait_for_light(5);
	shut_down_in(118);
    enable_servos();
    
    left(1400);
    stop(100);
    forward(200);
    stop(100);
    left(4500);
    stop(200);
    back(2700);
    stop(200);
    
    forward(1000);
    stop(200);
    right(500);
    stop(200);
    forward(2300);
    stop(200);
    
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
    
    back(1200);
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
    
//----------------------------------------------------------//
//          PUT PALLETS ON EXTERNAL LOADING DOCK            //
//----------------------------------------------------------//
    
    back(5000);
    stop(500);
    forward(400);
    right(500);
    rightTURN(2000);
    
    forward(1800);
    stop(200);
    
    set_servo_position(0, 1200);
    msleep(1000);
    back(1000);
    stop(200);
    
    set_servo_position(0, 0);
    msleep(1000);
    
    rightTURN(4000);
    
    back(1000);
    set_servo_position(1, 1550);
    msleep(1000);
    set_servo_position(2, 853);
    msleep(1000);
    stop(500);
    
//----------------------------------------------------------//
//          MESS AROUND DOWN THE BOARD AND TROLL            //
//----------------------------------------------------------//
    
    forward(1000);
    stop(200);
    
    right(2500);
    stop(200);
    forward(10000);
    stop(200);
    
    left(1000);
    stop(200);
    
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
    
    back(8000);
    stop(200);
    
    backR(4000);
    stop(200);
    
    
	disable_servos();
    
    return 0;
}
