#include <stdio.h>
#include <kipr/wombat.h>
int main()
{
    enable_servos();

    while(1) 
    {
        motor(0, 50);
        motor(3, 50);
        msleep(500);
        ao();
        int light = analog(1);
        printf("Light sensor value: %d\n", light);
        msleep(500); 
    }
    //while (analog(1) < 800) 
    //{
    //    motor(0, 50);   // Left wheel forward
    //    motor(3, 50);   // Right wheel forward
    //}
    
   
    ao(); 

  
    disable_servos();
    
    return 0;
}
