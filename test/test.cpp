/**
 * @file test.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <gtest/gtest.h>
#include "pid.hpp"

PIDController pid;

/**
 * This test checks the convergence
 */
TEST(test1, check_compute) {
    double final_vel = pid.compute(100.0, 5.0);  // desired = 100 mph, initial = 5mph
    EXPECT_NEAR(final_vel, 100.0, 0.1);  // threshhold of 0.1 mph
}

/**
 * This test checks the values of gain coeffecients
 */
TEST(test2, check_gains) {
    pid.setKp(4.1);
    pid.setKi(3.2);
    pid.setKd(10.3);
    ASSERT_DOUBLE_EQ(pid.getKp(), 4.1);
    ASSERT_DOUBLE_EQ(pid.getKi(), 3.2);
    ASSERT_DOUBLE_EQ(pid.getKd(), 10.3);
}
