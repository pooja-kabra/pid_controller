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
#include "pid.hpp"


PIDController::PIDController() {
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
double PIDController::compute(double setpoint, double current_val) {
    return 0;
}

PIDController::~PIDController() {
}

