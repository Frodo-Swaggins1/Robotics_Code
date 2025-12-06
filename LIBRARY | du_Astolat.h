#include <kipr/wombat.h>

int back_R = 0; // red wire up
int front_R = 1; // red wire up 
int front_L = 2; // black wire up 
int back_L = 3; // black wire up

void stop(int dist){
motor(back_R, 0);
motor(front_R, 0);
motor(front_L, 0);
motor(back_L, 0);
msleep(dist);
}
    
void forward(int dist){
motor(back_R, 80);
motor(front_R, 80);
motor(front_L, 80);
motor(back_L, 80);
msleep(dist);
}
    
void back(int dist){
motor(back_R, -80);
motor(front_R, -80);
motor(front_L, -80);
motor(back_L, -80);
msleep(dist);
}

void left(int dist){
motor(back_R, -80);
motor(front_R, 80);
motor(front_L, -80);
motor(back_L, 80);
msleep(dist);
}
    
void right(int dist){
motor(back_R, 80);
motor(front_R, -80);
motor(front_L, 80);
motor(back_L, -80);
msleep(dist);
}

void forwardL(int dist){
motor(back_R, 0);
motor(front_R, 80);
motor(front_L, 0);
motor(back_L, 80);
msleep(dist);
}

void forwardR(int dist){
motor(back_R, 80);
motor(front_R, 0);
motor(front_L, 80);
motor(back_L, 0);
msleep(dist);
}

void backL(int dist){
motor(back_R, -80);
motor(front_R, 0);
motor(front_L, -80);
motor(back_L, 0);
msleep(dist);
}

void backR(int dist){
motor(back_R, 0);
motor(front_R, -80);
motor(front_L, 0);
motor(back_L, -80);
msleep(dist);
}

void slowServo (int arm, int initial, int final, int speed)
{	
    set_servo_position(arm, initial);
    msleep(500);
    int counter = initial;
    
    if (final > initial){
        while (get_servo_position(arm) < final) 
        {
            set_servo_position(arm, counter);
            counter = counter + speed;
            msleep(20);
        }
    }
    else if (final < initial){
        while (get_servo_position(arm) > final) 
        {
            set_servo_position(arm, counter);
            counter = counter - speed;
            msleep(20);
        }
    }
}
