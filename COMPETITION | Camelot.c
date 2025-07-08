#include <kipr/wombat.h>
#include <astolat.h>

int main()
{
//------------------------
//     WAIT FOR LIGHT
//------------------------
wait_for_light(0);
shut_down_in(119);
    
enable_servos();

    
//------------------------
//      GO GET POMS
//------------------------
set_servo_position(0, 259);
set_servo_position(3, 1630);
still();
T(1000);
forward();
T(2000);
right();
T(785);
forward();
T(4010);
set_servo_position(0, 1030);
still();
T(1000);
set_servo_position(3, 1100);
still();
T(1000);
forward();
T(800);
backward();
T(200);
    
//------------------------
//      SCORE POMS
//------------------------
right();
T(785);
forward();
T(500);
set_servo_position(0, 259);
still();
T(1000);
backward();
T(500);
    
//------------------------
//     GET MORE POMS
//------------------------
left();
T(800);
forward();
T(200);
set_servo_position(3, 1630);
forward();
T(700);
set_servo_position(0, 259);
forward();
T(3500);
set_servo_position(0, 1030);
still();
T(1000);
set_servo_position(3, 1100);
still();
T(1000);
backward();
T(100);

//------------------------
//    SCORE MORE POMS
//------------------------
right();
T(785);
forward();
T(500);
set_servo_position(0, 500);
still();
T(1000);
backward();
T(550);
//------------------------
//    SILLY THE WATER
//------------------------    
left();
T(800);
forward();
T(4700);
left();
T(1000);
set_servo_position(0, 1030);
set_servo_position(3, 1630);
still();
T(1000);
forward();
T(1400);
left();
T(200);
right();
T(400);
left();
T(400);
right();
T(400);
left();
T(400);
right();
T(400);
backward();
T(900);
set_servo_position(3,1630);
forward();
T(400);
//EXPERIMENTS
set_servo_position(0, 1030);
set_servo_position(3, 400);
forward();
T(2000);
forward();
T(300);

    
disable_servos();
    
return 0;
}
