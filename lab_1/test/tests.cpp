#include <gtest/gtest.h>
#include "../include/functions.h"


TEST(test_01, basic_test_set) 
{
    ASSERT_TRUE(count_of_ones_total(2, 7) == 11);
}


TEST(test_02, basic_test_set) 
{
    ASSERT_TRUE(count_of_ones_total(1, 6) == 9);
}

TEST(test_03, basic_test_set) 
{
    ASSERT_TRUE(count_of_ones_total(32, 100) == 239);
}


TEST(test_04, basic_test_set) 
{
    ASSERT_TRUE(count_of_ones_total(1, 10000000) == 114434632);
}



TEST(test_05, basic_test_set) 
{
    ASSERT_TRUE(count_of_ones_total(42, 3232) == 18187);
}

TEST(test_06, basic_test_set) 
{
    ASSERT_TRUE(count_of_ones_total(5, 5) == 2);
}

TEST(test_07, invalid_input_test_set) {
    ASSERT_TRUE(count_of_ones_total(-1, -30) == -1);
}


TEST(test_08, invalid_input_test_set) {
    ASSERT_TRUE(count_of_ones_total(40, 20) == -1);
}


TEST(test_09, invalid_input_test_set) {
    ASSERT_TRUE(count_of_ones_total(-1,53) == -1);
}


TEST(test_10, invalid_input_test_set) {
    ASSERT_TRUE(count_of_ones_total(-1, -30) == -1);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}