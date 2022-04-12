#include <gtest/gtest.h>

#include "A/index.h"
#include "B/lib.h"

TEST(CHECK, GET_HELLO_WORLD_MESSAGE) {
ASSERT_EQ(GetHelloWorldMessage(), "Hello, world!\n");
}

TEST(CHECK, SUM_POSITIVE) {
ASSERT_EQ(Sum(12345, 54321), 66666);
}

TEST(CHECK, SUM_NEGATIVE) {
ASSERT_EQ(Sum(-1000, -100), -1100);
}

TEST(CHECK, SUM_ZERO) {
ASSERT_EQ(Sum(22, 0), 22);
}

TEST(CHECK, SUM_OPPOSITE) {
ASSERT_EQ(Sum(-345665, 345665), 0);
}

