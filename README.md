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

1. Calculate the exact time difference (
<a href="https://www.codecogs.com/eqnedit.php?latex=t_{interval}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{interval}" title="t_{interval}" /></a>
) between Maghrib (
<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Maghrib}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Maghrib}" title="t_{Maghrib}" /></a>
) and next day Fajr (
<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Fajr}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Fajr}" title="t_{Fajr}" /></a>
). 

<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Interval}&space;=&space;t_{Fajr}&space;-&space;t_{Maghrib}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Interval}&space;=&space;t_{Fajr}&space;-&space;t_{Maghrib}" title="t_{Interval} = t_{Fajr} - t_{Maghrib}" /></a>

2. Calculate the time interval (
<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Third}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Third}" title="t_{Third}" /></a>
) for one-third by dividing 
<a href="https://www.codecogs.com/eqnedit.php?latex=t_{interval}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{interval}" title="t_{interval}" /></a>
by 3. 
   
   <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Third}&space;=&space;\frac{t_{Interval}}{3}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Third}&space;=&space;\frac{t_{Interval}}{3}" title="t_{Third} = \frac{t_{Interval}}{3}" /></a>

3. Either add twice the 
<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Third}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Third}" title="t_{Third}" /></a> 
 to 
 <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Maghrib}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Maghrib}" title="t_{Maghrib}" /></a>
 or subtract 
 <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Third}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Third}" title="t_{Third}" /></a>
 from 
 <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Fajr}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Fajr}" title="t_{Fajr}" /></a>
 . This result will be the Tahajjud starting time (
 <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Tahajjud}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}" title="t_{Tahajjud}" /></a>
 ). 

   <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Tahajjud}&space;=&space;t_{Maghrib}&space;&plus;&space;2t_{Third}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Maghrib}&space;&plus;&space;2t_{Third}" title="t_{Tahajjud} = t_{Maghrib} + 2t_{Third}" /></a>

   or

   <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Tahajjud}&space;=&space;t_{Fajr}&space;-&space;t_{Third}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Fajr}&space;-&space;t_{Third}" title="t_{Tahajjud} = t_{Fajr} - t_{Third}" /></a>



#### Calculation 

We have 

1. Maghrib time: <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Maghrib}&space;=" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Maghrib}&space;=" title="t_{Maghrib} =" /></a> 6:51 pm [18:51]
2. Next day Fajr time: <a href="https://www.codecogs.com/eqnedit.php?latex=t_{Fajr}&space;=" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Fajr}&space;=" title="t_{Fajr} =" /></a> 5:27 am [05:27]

Following the Algorithm:

*Note: Actual time is in [square brackets] converted to 24-hour format and time interval is written normally* 

**Step 1**

<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Interval}&space;=&space;t_{Fajr}&space;-&space;t_{Maghrib}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Interval}&space;=&space;t_{Fajr}&space;-&space;t_{Maghrib}" title="t_{Interval} = t_{Fajr} - t_{Maghrib}" /></a> 

= [05:27 + 1 day] - [18:51]

= 10:36 (10 hours and 36 minutes)

**Step 2**

<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Third}&space;=&space;\frac{t_{Interval}}{3}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Third}&space;=&space;\frac{t_{Interval}}{3}" title="t_{Third} = \frac{t_{Interval}}{3}" /></a>

= [10:36]

= 3:32 (3 hours and 32 minutes)

**Step 3**

<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Tahajjud}&space;=&space;t_{Maghrib}&space;&plus;&space;2t_{Third}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Maghrib}&space;&plus;&space;2t_{Third}" title="t_{Tahajjud} = t_{Maghrib} + 2t_{Third}" /></a>

= [18:51] + 2*(03:32)

= [18:51] + 7:04

= [25:55]

= <u>[01:55 + 1 day] (next day 1:55 am)</u>

or 

<a href="https://www.codecogs.com/eqnedit.php?latex=t_{Tahajjud}&space;=&space;t_{Fajr}&space;-&space;t_{Third}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?t_{Tahajjud}&space;=&space;t_{Fajr}&space;-&space;t_{Third}" title="t_{Tahajjud} = t_{Fajr} - t_{Third}" /></a>

= [05:27 + 1 day] - 03:32

= <u>[01:55 + 1 day] (next day 1:55 am)</u>



#### Timeline Plot 

Here is a timeline showing the calculated values: 

![](/SolutionTimeline.png)

