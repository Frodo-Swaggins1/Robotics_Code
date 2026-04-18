#include <kipr/wombat.h>
#include <du_Astolat.h>

int main()
{
    
    wait_for_light(5);
	shut_down_in(118);
    enable_servos();
    
    
//----------------------------------------------------------//
//                       AD CUBUS                           //
//----------------------------------------------------------//
    
    right(430);
    set_servo_position(1,1600);
    msleep(1000);
    stop(200);
    back(750);
    stop(200);
    set_servo_position(2, 760);
    msleep(1000);
    stop(100);
    set_servo_position(1, 2040);
    msleep(1000);
    stop(100);
    forward(500);
    stop(100);
    rightTURN(3600);
    stop(200);
    
    

    
//----------------------------------------------------------//
//                GET THE FIRST TWO PALLETS                 //
//----------------------------------------------------------//

    forward(100);
    stop(100);
    left(4050);
    stop(200);
    back(2400);
    stop(200);
    
    
    forward(3300);
    stop(200);
    right(800);
    stop(200);

    
    rightTURN(1800);
    stop(100);


//  back(400);
//  stop(100);

//  forward(200);
//  stop(100);
    
//  set_servo_position(1, 2040);
//  msleep(1000);
//  stop(200);
    
    back(1500);
    stop(500);
    
    
    
    //1450 for forklift lower

    right(350);
    stop(100);
    set_servo_position(0, 1355);
    msleep(1000);
    stop(300);
    forward(1000);
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
    stop(100);
    right(500);
    stop(100);
    rightTURN(2000);
    stop(100);
    
    forward(1050);
    stop(200);
    
    set_servo_position(0, 1200);
    msleep(1000);
    back(1000);
    stop(200);
    
    set_servo_position(0, 0);
    msleep(1000);
    
    rightTURN(3600);
    
    back(1900); //FHFHHFHFHHFHHDHDDHD
    stop(300);
    set_servo_position(1, 1750);
    msleep(1000);
    stop(200);
    set_servo_position(2, 1125);
    msleep(1000);
    stop(100);
    set_servo_position(1, 2040);
    msleep(1000);
    stop(200);

    
//----------------------------------------------------------//
//          MESS AROUND DOWN THE BOARD AND TROLL            //
//----------------------------------------------------------//
    
    forward(1000);
    stop(200);
    
    right(2050);
    stop(200);
    forward(4000);
    stop(100);
    rightTURN(200);
    stop(100);
    forward(4500);
    stop(200);
    
    left(1000);
    stop(200);
    
     //back claw open
    set_servo_position(2, 1125);
    msleep(1000);
    set_servo_position(1, 1300);
    msleep(1000);
    stop(200);
    
    back(8000);
    stop(200);
    
    //back claw closed
    
    backR(2000);
    stop(200);
    
    right(6000);
    stop(100);
    
    forward(1000);
    stop(200);
    
    set_servo_position(2, 1125);
    msleep(1000);
    set_servo_position(1, 1600);
    msleep(1000);
    stop(200);
    
	disable_servos();
    
    return 0;
}
