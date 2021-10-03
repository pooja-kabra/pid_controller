/**
 * @file pid.cpp
 * @author Pooja Kabra (pkabra@terpmail.umd.edu)
 * @author Aditya Jadhav (adi30jadhav@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<iostream>
#include <cmath>
#include "pid.hpp"

PIDController::PIDController() :
        setpoint(0),
        current_val(0) {
}


double PIDController::getKp() {
    return Kp;
}

double PIDController::getKd() {
    return Kd;
}

double PIDController::getKi() {
    return Ki;
}

void PIDController::setKp(double kp_i) {
    Kp = kp_i;
}

void PIDController::setKd(double kd_i) {
    Kd = kd_i;
}

void PIDController::setKi(double ki_i) {
    Ki = ki_i;
}


/* method to compute the corrected velocity */
double PIDController::compute(double sp, double cv) {
    setpoint = sp;
    current_val = cv;
    double error = setpoint - current_val;
    double previous_error = 0.0;
    while (std::abs(error) > 0.1) {
        // Add proportional gain
        double gain = Kp * error;
        // Add integral gain
        gain += (Ki * error * dt);
        // Add derivative gain
        gain += (Kd * (error - previous_error) / dt);
        // Latch values for next control loop iteration
        current_val += gain;
        previous_error = error;
        error = setpoint - current_val;
    }
    return current_val;
}

PIDController::~PIDController() {
}

