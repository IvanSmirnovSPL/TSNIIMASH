//
// Created by User on 02.03.2022.
//

#include "linear_approximation.h"

void calculate_coefs(double x1, double x2, double y1, double y2, double *k, double *b)
{
    *k = (y2 - y1) / (x2 - x1);
    *b = y1 - x1 * (*k);
}


void calculate_value(double *value, double *time_moment, double dt, double *array_of_value, double *array_of_time)
{
    int i, j = 0;
    for (i = 0; i < 2; i++)
    {
        double k, b;
        calculate_coefs(time_moment[i], time_moment[i + 1], value[i], value[i + 1], &k, &b);
        for (j; time_moment[i + 1] >= time_moment[0] + j * dt; j++) {
            array_of_time[j] = time_moment[0] + j * dt;
            array_of_value[j] = array_of_time[j] * k + b;
        }
    }
}