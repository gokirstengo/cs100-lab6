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

TEST(PerimeterTest, ZeroTest) {
    Rectangle* rect = new Rectangle();
    EXPECT_EQ(rect->perimeter(),0);
}
TEST(PerimeterTest, PositiveTest) {
    Rectangle* rect = new Rectangle(3,5);
    EXPECT_EQ(rect->perimeter(),16);
}
TEST(PerimeterTest, NegativeTest) {
    Rectangle* rect = new Rectangle(-4,1);
    EXPECT_EQ(rect->perimeter(),-6);
}
TEST(PerimeterTest, DoubleNegativeTest) {
    Rectangle* rect = new Rectangle(-7,8);
    EXPECT_EQ(rect->perimeter(),2);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

