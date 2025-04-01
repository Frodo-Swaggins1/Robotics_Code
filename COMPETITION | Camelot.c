#include <kipr/wombat.h>
#include <astolat.h>

int main()
{
//------------------------
//     WAIT FOR LIGHT
//------------------------
//wait_for_light(0);
//shut_down_in(119);
    
enable_servos();

    
//------------------------
//      GO GET POMS
//------------------------
set_servo_position(0, 1853);
forward();
T(2000);
right();
T(920);
forward();
T(4000);
set_servo_position(0, 1000);
backward();
T(1000);
    
//------------------------
//      SCORE POMS
//------------------------
right();
T(920);
forward();
T(600);
set_servo_position(0, 1700);
backward();
T(600);
    
disable_servos();
    
return 0;
}
