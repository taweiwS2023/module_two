#include "gtest/gtest.h"
#include "ModuleTwo.h"

TEST(ModuleTwoTest, testMultiply) {
    ModuleTwo mt;
    int result = mt.multiply(5, 3);
    ASSERT_EQ(result, 15);
}
