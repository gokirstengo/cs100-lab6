#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(AreaTest, ZeroTest) {
    Rectangle* rect = new Rectangle();
    EXPECT_EQ(rect->area(),0);
}
TEST(AreaTest, PositiveTest) {
    Rectangle* rect = new Rectangle(3,8);
    EXPECT_EQ(rect->area(),24);
}
TEST(AreaTest, NegativeTest) {
    Rectangle* rect = new Rectangle(-5,4);
    EXPECT_EQ(rect->area(),-20);
}
TEST(AreaTest, DoubleNegativeTest) {
    Rectangle* rect = new Rectangle(-3,-6);
    EXPECT_EQ(rect->area(),18);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

