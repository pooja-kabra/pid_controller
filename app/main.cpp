/**
 * @file main.cpp
 * @author Pooja Kabra (pkabra@terpmail.umd.edu)
 * @author Aditya Jadhav (adi30jadhav@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "pid.hpp"

using std::endl;

int main() {
    double set_velocity, kp, ki, kd;


    PIDController pid;
    std::cout << "Please enter proportional gain, integral gain and derivative"
                  " gain : " << endl;
    std::cin >> kp >> ki >> kd;

    pid.setKp(kp);
    pid.setKi(ki);
    pid.setKd(kd);

    std::cout << "Please enter the desired velocity:" << endl;
    std::cin >> set_velocity;

    double init_velocity = 5.0;
    double final_velocity = pid.compute(set_velocity, init_velocity);

    std::cout<< "Final velocity is : " << final_velocity << " MPH " << endl;
    return 0;
}
