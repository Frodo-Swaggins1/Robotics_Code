#include <kipr/wombat.h>
#include <stdio.h>
int drift = 10;
//------------------------
//     SIMPLE MOTION
//------------------------
void forward(){
    motor(0, 83 + drift);
    motor(3, 83);
}

void backward(){
    motor(0, -83);
    motor(3, -83);
}

void still(){
    motor(0, 0);
    motor(3, 0);
}


void left(){
    motor(0, 83);
    motor(3, -83);
}

void right(){
    motor(0, -83);
    motor(3, 83);
}

//------------------------
//          TIME
//------------------------
void T(int distance){
    msleep(distance);
}

//------------------------
//         SERVOS
//------------------------
void CDo(){
    set_servo_position(0, 1600);
}

void COp(){
    set_servo_position(3, 1200);
}

void CUp(){
}


void CCl(){
}
