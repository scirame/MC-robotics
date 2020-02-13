#include <kipr/wombat.h>

int left_pt = 1;
int right_pt = 0;
int claw_close = 790;
int claw_open = 1540;

int main()
{
    power(1200,5000);
   //turn_Rt(2000, -1200);
    
    printf("Hello World\n");
    return 0;
}



void power(int speed, int time)
{
    mav(0, speed);
    mav(1, speed);
    msleep(time);
}



void turn_Rt(int time, int power)
{
    mav(0, power);
    mav(1, 1200);
    msleep(time);
}

void turn_Lt(int time, int power)
{
    mav(0, 1200);
    mav(1, power);
    msleep(time);
}

void servo_movement(int port, int value)
{
    enable_servos(port);
    set_servo_position(port, value);
}
