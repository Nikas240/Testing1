#ifndef NEWFUNC_TEST_H
#define NEWFUNC_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "newfunc.h"
}

TEST(newfuncTest, num0) {
    ASSERT_EQ(newfunc(1, 4, 4).flag, 2);
    ASSERT_NEAR(newfunc(1, 4, 4).x1, -2.00, 0.001);
    ASSERT_NEAR(newfunc(1, 4, 4).x2, -2.00, 0.001);
}

TEST(newfuncTest, num1) {
    ASSERT_EQ(newfunc(1, 1, 4).flag, 0);
}

TEST(newfuncTest, num2) {
    ASSERT_EQ(newfunc(1, 0, -4).flag, 2);
    ASSERT_NEAR(newfunc(1, 0, -4).x1, 2.00, 0.001);
    ASSERT_NEAR(newfunc(1, 0, -4).x2, -2.00, 0.001);
}

TEST(newfuncTest, num3) {
    ASSERT_EQ(newfunc(0, 2, 2).flag, 1);
    ASSERT_NEAR(newfunc(0, 2, 2).x1, -1.00, 0.001);
}

TEST(newfuncTest, num4) {
    ASSERT_EQ(newfunc(0, 0, 1).flag, 0);
}

TEST(newfuncTest, num5) {
    ASSERT_EQ(newfunc(0, 1, 0).flag, 1);
    ASSERT_NEAR(newfunc(0, 1, 0).x1, 0.00, 0.001);
}


#endif // NEWFUNC_TEST_H
