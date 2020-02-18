#include<stdio.h>
#include<string.h>

int tahajjud(int iH, int iM, int fH, int fM)
{
    int i, f, td, t;

    i = (iH)*60 + iM;
    f = (fH + 12)*60 + fM;

    td = (f - i)/3;
    t = i + 2*td;

    //printf("i = %d, f = %d, td = %d, t = %d\n", i, f, td, t);

    return t;
 }

 int tahajjudDisp(int t)
 {
     int hr, mn;
     char ampm;

     //Calculate

     if (t >= 720)
     {
         hr = t/60 - 12;
         if (hr < 1)
         {
             hr = 12;
         }
         mn = t%60;
         ampm = 'A';
     }
     else
     {
         hr = t/60;
         if (hr < 1)
         {
             hr = 12;
         }
         mn = t%60;
         ampm = 'P';
     }

     //Display

     printf("Tahajjud Time: ");
     if (hr<10)
     {
         printf("0%d:", hr);
     }
     else
     {
         printf("%d:", hr);
     }
     if (mn<10)
     {
         printf("0%d", mn);
     }
     else
     {
         printf("%d", mn);
     }

     printf(" %cM", ampm);
 }

int main ()
{
    int ishaHr, ishaMin, fajrHr, fajrMin, t, i;

    printf("Enter Maghrib time (12 hour format): ");
    scanf("%d:%d", &ishaHr, &ishaMin);
    printf("Enter Fajr time (12 hour format): ");
    scanf("%d:%d", &fajrHr, &fajrMin);

    t = tahajjud(ishaHr, ishaMin, fajrHr, fajrMin);
    tahajjudDisp(t);

    printf("\nPress 0 to terminate.\n");
    scanf("%d", &i);

    while(i != 0)
    {
        scanf("%d", &i);
        break;
    }
}
