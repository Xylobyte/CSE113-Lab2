#include <stdio.h>
#include <stdlib.h>

#define ITEMS 8
const int departure[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
const int arrival[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

int findFlight(int time);
void print12HrTime(int time);
int toMSM(int h, int m);

int main() {
    int h;
    int m;
    int departureTime;
    int arrivalTime;
    int i;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &h, &m);
    i = findFlight(toMSM(h, m));
    departureTime = departure[i];
    arrivalTime = arrival[i];
    printf("Departure Time: ");
    print12HrTime(departureTime);
    printf("Arrival Time: ");
    print12HrTime(arrivalTime);
    return 0;
}

int toMSM(int h, int m) {
    return (h * 60) + m;
}

void print12HrTime(int time) {
    int h;
    int m;
    int pm;
    h = time / 60;
    m = time %60;

    if(h > 12) {
        h = h - 12;
        pm = 1;
    } else {
        pm = 0;
    }

    printf("%d:%d ", h, m);
    if(pm){ 
        printf("PM\n");
    } else {
        printf("AM\n");
    }
}

int findFlight(int time) {
    int i = 0, j = 0;
    while(i < ITEMS) {
    if(abs(time - departure[i]) <= abs(time - departure[j]))
        j = i;
    i++;
    }
    return j;
}