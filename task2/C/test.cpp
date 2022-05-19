#include <gtest/gtest.h>

#include "A/index.h"
#include "B/lib.h"

TEST(CHECK, GET_HELLO_WORLD_MESSAGE) {
    ASSERT_EQ(GetHelloWorldMessage(), "Hello, world!\n");
}

TEST(CHECK, SUM) {
    ASSERT_EQ(Sum(12345, 54321), 66666);
    ASSERT_EQ(Sum(-1000, -100), -1100);
    ASSERT_EQ(Sum(22, 0), 22);
    ASSERT_EQ(Sum(-345665, 345665), 0);
}
