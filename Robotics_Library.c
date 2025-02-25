#include <kipr/wombat.h>
#include <stdio.h>

//------------------------
//     SIMPLE MOTION
//------------------------
void GoF(){
    motor(0, 83);
    motor(3, 83);
}

void GoB(){
    motor(0, -83);
    motor(3, -83);
}

void TuL(){
    motor(0, -83);
    motor(3, 83);
}

void TuR(){
    motor(0, 83);
    motor(3, -83);
}

//------------------------
//          TIME
//------------------------
void T(int distance){
    msleep(2000);
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
