#include <stdio.h>
#include <ctype.h>

void find_closet_flight(int desired_time, int *departure_time, int *arrival_time);



int main(void) {
  char departure_am = 'a', arrival_am = 'a';
  int hour, minute, desired_time, departure_time, arrival_time, departure_hour, departure_minute, arrival_hour, arrival_minute; 
  
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);
    
  desired_time = hour * 60 + minute;

  find_closet_flight(desired_time, &departure_time, &arrival_time);

  if (departure_time > 720)
    departure_am = 'p';
  if (arrival_time > 720)
    arrival_am = 'p';

  if ((departure_time % 720) < 60) {
    departure_hour = 12;
    departure_minute = departure_time % 60;
  } else {
    departure_hour = (departure_time % 720) / 60;
    departure_minute = departure_time % 60;
  }

  if ((arrival_time % 720) < 60) {
    arrival_hour = 12;
    arrival_minute = arrival_time % 60;
  } else {
    arrival_hour = (arrival_time % 720) / 60;
    arrival_minute = arrival_time % 60;
  }
    
  printf("Closet departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.", departure_hour, departure_minute, departure_am, arrival_hour, arrival_minute, arrival_am);
    
  return 0;
}

void find_closet_flight(int desired_time, int *departure_time, int *arrival_time)
{
  int total1, total2, total3, total4, total5, total6, total7, total8;

    total1 = 8 * 60 + 0;
    total2 = 9 * 60 + 43;
    total3 = 11 * 60 + 19;
    total4 = 12 * 60 + 47;
    total5 = 14 * 60 + 0;
    total6 = 15 * 60 + 45;
    total7 = 19 * 60 + 0;
    total8 = 21 * 60 + 45;
    
    if (desired_time < total1) {
      if ((total1 - desired_time) < ((1440 - total8) + desired_time)) {
        *departure_time = total1;
        *arrival_time = 10*60 + 16;
      } else {
        *departure_time = total8;
        *arrival_time = 23*60 + 58;
      }
    } else if (desired_time < total2) {
      if (desired_time - total1 < total2 - desired_time) {
        *departure_time = total1;
        *arrival_time = 10*60 + 16;
      } else {
        *departure_time = total2;
        *arrival_time = 11*60 + 52;
      }
    } else if (desired_time < total3) {
      if (desired_time - total2 < total3 - desired_time) {
        *departure_time = total2;
        *arrival_time = 11*60 + 52;
      } else {
        *departure_time = total3;
        *arrival_time = 13*60 + 31; 
      }
    } else if (desired_time < total4) {
      if (desired_time - total3 < total4 - desired_time) {
        *departure_time = total3;
        *arrival_time = 13*60 + 31; 
      } else {
        *departure_time = total4;
        *arrival_time = 15*60 + 0;
      }
    } else if (desired_time < total5) {
      if (desired_time - total4 < total5 - desired_time) {
        *departure_time = total4;
        *arrival_time = 15*60 + 0;
      } else {
        *departure_time = total5;
        *arrival_time = 16*60 + 8;
      }
    } else if (desired_time < total6) {
      if (desired_time - total5 < total4 - desired_time) {
        *departure_time = total5;
        *arrival_time = 16*60 + 8;
      } else {
        *departure_time = total6;
        *arrival_time = 17*60 + 55;
      }
    } else if (desired_time < total7) {
      if (desired_time - total6 < total5 - desired_time) {
        *departure_time = total6;
        *arrival_time = 17*60 + 55;
      } else {
        *departure_time = total7;
        *arrival_time = 21*60 + 20;
      }
    } else if (desired_time < total8) {
        if (desired_time - total7 < total6 - desired_time) {
          *departure_time = total7;
          *arrival_time = 21*60 + 20;
        } else {
          *departure_time = total8;
          *arrival_time = 23*60 + 58;
        }
    } else {
      *departure_time = total8;
      *arrival_time = 23*60 + 58;
    }
}
