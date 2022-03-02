//
// Created by User on 02.03.2022.
//

#ifndef MASHA_LINEAR_APPROXIMATION_H
#define MASHA_LINEAR_APPROXIMATION_H

/* function to determine values in time with step dt
 * - Input:
 * -- value [*double] - array of measuring value 
 * -- time_moment [*double] - array of time 
 * -- dt [double] - time step
 * - Output:
 * -- array_of_value [*double] - array of value in required time moments
 * -- array_of_time [*double] - array of time moments
 * */
void calculate_value(double *value, double *time_moment, double dt, double *array_of_value, double *array_of_time);




/* function to determine approximation coefs
 * Input:
 * - x1, x2, y1, y2
 * Output:
 * - *k, *b
 * */
void calculate_coefs(double x1, double x2, double y1, double y2, double *k, double *b);

#endif //MASHA_LINEAR_APPROXIMATION_H
