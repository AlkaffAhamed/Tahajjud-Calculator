# Tahajjud Calculator
Tahajjud Calculator is a Command-Line Application written in C++ to calculate Tahajjud Times. User will input the Maghrib time and the next day's Fajr time and this application will calculate the time Tahajjud starts. 

## Tahajjud Definition

Muslims pray 5 times daily and in addition to that, some will pray Tahajjud time at night for extra benefits. 

"The best time for Tahajjud is the last third portion of the night." (Abu Hurairah:Fiqh)

From the above definition, it is implied that the Tahajjud time starts at the $2/3$ marker between Maghrib time and Fajr time. It ends about 10 to 15 minutes before Fajr time starts. 

The following is an example with Maghrib time as 6 pm, Isha time as 7 pm and Fajr time as 6 am. For this example, Tahajjud is supposed to start at 2 am and end at 5:50 am. 



```
Time    1800  1900       2200           0200          0550 0600
     ---|-----|----------|--------------|-------------|----|---->
Event   Magh. Isha    1/3 Marker     2/3 Marker     Tahj.  Fajr
                                   (Tahj. Starts)
```

