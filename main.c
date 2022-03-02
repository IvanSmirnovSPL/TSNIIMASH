#include <stdio.h>
#include "linear_approximation.h"

int main() {
    double value[3] = {0, 8, 6}; /*measuring value*/
    double time_moment[3] = {0, 0.1, 0.15}; /*time changing of value*/
    double dt = 0.01; /*step of time*/
    int n = (time_moment[2] - time_moment[0]) / dt + 1;
    printf("%d\n", n);
    double array_of_value[n], array_of_time[n];
    calculate_value(value, time_moment, dt, array_of_value, array_of_time);
    
    /* showing results: for every time moment(step dt) show this moment and value*/
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%f %f\n", array_of_time[i], array_of_value[i]);
    }

    /* writing to file */
    FILE *fp;
    fp = fopen("data.txt", "w");
    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%f %f\n", array_of_time[i], array_of_value[i]);
    }
    fclose(fp);

    return 0;
}
