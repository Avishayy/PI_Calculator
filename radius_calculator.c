/* 
 * File:   calculate_radius.c
 * Author: Avishay
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float distanceFromMid(float, float);
int main(int argc, char** argv) {
    srand(time(NULL));
    float x, y, pi = 0;
    float sCircle = 0, sAll = 0;
    int i;
    
    for(i = 0; i < 10000; i++) {
        x = (rand() % 10) * 0.1;
        y = (rand() % 10) * 0.1;
        if (distanceFromMid(x, y) <= 0.5)
            sCircle++;
        sAll++;
        
    }
    printf("Just in circle - %d, in all - %d\n", (int) sCircle, (int) sAll);
    pi = 4 * (sCircle / sAll);
    printf("We calculated pi as %f", pi);
    return(EXIT_SUCCESS);
}

float distanceFromMid(float x, float y) {
    return sqrt((x-0.5)*(x-0.5) + (y-0.5)*(y-0.5));
}