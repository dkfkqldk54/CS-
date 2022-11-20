#include <stdio.h>
#include <math.h>

int main(void) {
  int departure_time[8] = {480, 583, 679, 767, 840, 945, 1140, 1305}, arrival_time[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438}, i, hour, minute, total, departure_hour, departure_minute, arrival_hour, arrival_minute, departure_result, arrival_result, small_index;
  char departure_char, arrival_char;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);
  total = hour * 60 + minute;
  
  if (total < departure_time[0])
    small_index = departure_time[0]-total<1440-departure_time[7]+total?0:7;
  else if (total < departure_time[1])
    small_index = departure_time[1]-total<total-departure_time[0]?1:0;
  else if (total < departure_time[2])
    small_index = departure_time[2]-total<total-departure_time[1]?2:1;
  else if (total < departure_time[3])
    small_index = departure_time[3]-total<total-departure_time[2]?3:2;
  else if (total < departure_time[4])
    small_index = departure_time[4]-total<total-departure_time[3]?4:3;
  else if (total < departure_time[5])
    small_index = departure_time[5]-total<total-departure_time[4]?5:4;
  else if (total < departure_time[6])
    small_index = departure_time[6]-total<total-departure_time[5]?6:5;
  else if (total < departure_time[7])
    small_index = departure_time[7]-total<total-departure_time[6]?7:6;
  else
    small_index = total-departure_time[7]<1440-total+departure_time[0]?7:0; 

  departure_result = departure_time[small_index];
  arrival_result = arrival_time[small_index];

  if (departure_result < 60) {
    departure_hour = 12;
    departure_minute = departure_result;
    departure_char = 'a';
  } else if (departure_result < 720) {
    departure_hour = departure_result / 60;
    departure_minute = departure_result % 60;
    departure_char = 'a';
  } else if (departure_result < 780) {
    departure_hour = 12;
    departure_minute = departure_result % 60;
    departure_char = 'p';
  } else {
    departure_hour = departure_result / 60 - 12;
    departure_minute = departure_result % 60;
    departure_char = 'p';
  }

  if (arrival_result < 60) {
    arrival_hour = 12;
    arrival_minute = arrival_result;
    arrival_char = 'a';
  } else if (arrival_result < 720) {
    arrival_hour = arrival_result / 60;
    arrival_minute = arrival_result % 60;
    arrival_char = 'a';
  } else if (arrival_result < 780) {
    arrival_hour = 12;
    arrival_minute = arrival_result % 60;
    arrival_char = 'p';
  } else {
    arrival_hour = arrival_result / 60 - 12;
    arrival_minute = arrival_result % 60;
    arrival_char = 'p';
  }

  printf("Closet departure time is %d:%.2d %c.m., arriving at %d:%.2d %c.m.", departure_hour, departure_minute, departure_char, arrival_hour, arrival_minute, arrival_char);
  
  return 0;
}
