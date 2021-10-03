/**
 * @file pid.hpp
* @author Pooja Kabra (pkabra@terpmail.umd.edu)
 * @author Aditya Jadhav (adi30jadhav@gmail.com)
 * @brief 
 * @version 1.01
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

/**
 * @brief 
 * 
 */
class PIDController {
 public:
    /**
     * @brief Construct a new PIDController object
     * 
     */
    PIDController();

    /**
     * @brief Set the Kp object
     * 
     * @param kp_i 
     */
    void setKp(double kp_i);

    /**
     * @brief Set the Kd object
     * 
     * @param kd_i 
     */
    void setKd(double kd_i);

    /**
     * @brief Set the Ki object
     * 
     * @param ki_i 
     */

    /**
     * @brief Set the Ki object
     * 
     * @param ki_i 
     */
    void setKi(double ki_i);

    /**
     * @brief Get the Kp object
     * 
     * @return double 
     */
    double getKp();

    /**
     * @brief Get the Ki object
     * 
     * @return double 
     */
    double getKi();

    /**
     * @brief Get the Kd object
     * 
     * @return double 
     */
    double getKd();

    /**
     * @brief Compute the resultant velocity of the PID controller
     * 
     * @param sp
     * @param cv
     * @return double 
     */
    double compute(double sp, double cv);
    /**
     * @brief Destroy the PIDController object
     * 
     */
    ~PIDController();

 private:
    double Kp = 1.0;  // Proportional constant
    double Ki = 0.0;  // Integral constant
    double Kd = 0.0;  // Derivative constant
    double dt = 0.5;  // Time step
    double max = 50;  // Max output value
    double min = 10;  // Min output value
    double setpoint;  // Desired output value
    double current_val;  // Current output value
};

#endif  // INCLUDE_PID_HPP_
