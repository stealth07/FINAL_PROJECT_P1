/* 
 * File:   sensor.h
 * Author: Andres
 *
 * Created on April 13, 2016, 2:22 PM
 */

#ifndef SENSOR_H
#define	SENSOR_H

#define DETECTION_LIMIT_1 2.40
#define DETECTION_LIMIT_2 2.50
#define DETECTION_LIMIT_3 2.50

int scanLineSensors(int result, int display);

void displayLineSensors(int s1, int s2, int s3);

#endif	/* SENSOR_H */

