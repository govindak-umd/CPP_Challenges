#include <gtest/gtest.h>

int main(int argc, char **argv) {
        std::cout <<" This is from the main testing file " << std::endl;
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}