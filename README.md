# Tahajjud Calculator
Tahajjud Calculator is a Command-Line Application written in C++ to calculate Tahajjud Times. User will input the Maghrib time and the next day's Fajr time and this application will calculate the time Tahajjud starts. 

## Tahajjud Definition

Muslims pray 5 times daily and in addition to that, some will pray Tahajjud time at night for extra benefits. 

"The best time for Tahajjud is the last third portion of the night." (Abu Hurairah:Fiqh)

From the above definition, it is implied that the Tahajjud time starts at the ⅔ marker between Maghrib time and Fajr time. It ends about 10 to 15 minutes before Fajr time starts. 


![](/DefinitionTimeline.png)



### Worked Example 

The following is a real life example for calculating Tahajjud starting time. This example is taken from Singapore for the date 13th November 2019. 

#### Data 

| Parameters    | Values                                                     |
| ------------- | ---------------------------------------------------------- |
| Country       | Singapore (GMT +08:00)                                     |
| Date          | 13th November 2019                                         |
| Maghrib       | 6:51 pm                                                    |
| Isha          | 8:04 pm (for reference only, not required for calculation) |
| Next Day Fajr | 5:27 am                                                    |

Source: https://www.muis.gov.sg/-/media/Files/Corporate-Site/Prayer-Timetable-2019.pdf



#### Algorithm 

The following steps are used to calculate the Tahajjud starting time: 

**Step 1**

Calculate the exact time difference (<img src="https://latex.codecogs.com/gif.latex?t_{interval}" title="t_{interval}" />) between Maghrib (<img src="https://latex.codecogs.com/gif.latex?t_{Maghrib}" title="t_{Maghrib}" />) and next day Fajr (<img src="https://latex.codecogs.com/gif.latex?t_{Fajr}" title="t_{Fajr}" />). 

<img src="https://latex.codecogs.com/gif.latex?t_{Interval}&space;=&space;t_{Fajr}&space;-&space;t_{Maghrib}" title="t_{Interval} = t_{Fajr} - t_{Maghrib}" />

**Step 2**

Calculate the time interval (<img src="https://latex.codecogs.com/gif.latex?t_{Third}" title="t_{Third}" />) for one-third by dividing <img src="https://latex.codecogs.com/gif.latex?t_{interval}" title="t_{interval}" />by 3. 
   
<img src="https://latex.codecogs.com/gif.latex?t_{Third}&space;=&space;\frac{t_{Interval}}{3}" title="t_{Third} = \frac{t_{Interval}}{3}" />

**Step 3**

Either add twice the <img src="https://latex.codecogs.com/gif.latex?t_{Third}" title="t_{Third}" /> to <img src="https://latex.codecogs.com/gif.latex?t_{Maghrib}" title="t_{Maghrib}" /> or subtract <img src="https://latex.codecogs.com/gif.latex?t_{Third}" title="t_{Third}" /> from <img src="https://latex.codecogs.com/gif.latex?t_{Fajr}" title="t_{Fajr}" />. This result will be the Tahajjud starting time (<img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}" title="t_{Tahajjud}" />). 

<img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Maghrib}&space;&plus;&space;2t_{Third}" title="t_{Tahajjud} = t_{Maghrib} + 2t_{Third}" />

&lt;or&gt; 
   
<img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Fajr}&space;-&space;t_{Third}" title="t_{Tahajjud} = t_{Fajr} - t_{Third}" />



#### Calculation 

We have 

1. Maghrib time: <img src="https://latex.codecogs.com/gif.latex?t_{Maghrib}" title="t_{Maghrib}" /> = 6:51 pm [18:51]
2. Next day Fajr time: <img src="https://latex.codecogs.com/gif.latex?t_{Fajr}" title="t_{Fajr}" /> = 5:27 am [05:27]

Following the Algorithm:

*Note: Actual time is in [square brackets] converted to 24-hour format and time interval is written normally* 

**Step 1**

<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Interval}&space;=&space;t_{Fajr}&space;-&space;t_{Maghrib}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Interval}&space;=&space;t_{Fajr}&space;-&space;t_{Maghrib}" title="t_{Interval} = t_{Fajr} - t_{Maghrib}" /></a> 

= [05:27 + 1 day] - [18:51]

= 10:36 (10 hours and 36 minutes)

**Step 2**

<img src="https://latex.codecogs.com/gif.latex?t_{Third}&space;=&space;\frac{t_{Interval}}{3}" title="t_{Third} = \frac{t_{Interval}}{3}" />

= [10:36]

= 3:32 (3 hours and 32 minutes)

**Step 3**

<img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Maghrib}&space;&plus;&space;2t_{Third}" title="t_{Tahajjud} = t_{Maghrib} + 2t_{Third}" />

= [18:51] + 2*(03:32)

= [18:51] + 7:04

= [25:55]

= <u>[01:55 + 1 day] (next day 1:55 am)</u>

   &lt;or&gt; 

<img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Fajr}&space;-&space;t_{Third}" title="t_{Tahajjud} = t_{Fajr} - t_{Third}" />

= [05:27 + 1 day] - 03:32

= <u>[01:55 + 1 day] (next day 1:55 am)</u>



#### Timeline Plot 

Here is a timeline showing the calculated values: 

![](/SolutionTimeline.png)

