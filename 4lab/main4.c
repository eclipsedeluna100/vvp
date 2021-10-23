#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,s,r,p,ch;
    scanf("%f", &a);
    scanf("%f", &b);
    s=pow(a,2)+pow(b,2);
    r=pow(a,2)-pow(b,2);
    p=pow(a,2)*pow(b,2);
    ch=pow(a,2)/pow(b,2);
    printf("s=%f\nr=%f\np=%f\nch=%f\n", s,r,p,ch);
}
