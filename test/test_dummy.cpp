#include "../include/DummyTest.h"
#include <gtest/gtest.h>

class DummyTestFixture : public ::testing::Test{

public:

    DummyTest dummyTest;

    void SetUp(){
        std::cout << "-----In SetUp-----" << std::endl;

    }

    void TearDown(){
        std::cout << "-----In TearDown-----" << std::endl;
    }

};

TEST_F(DummyTestFixture,test_1){
    EXPECT_EQ(dummyTest.a,9);
}

TEST_F(DummyTestFixture,test_2){
    EXPECT_EQ(dummyTest.k,22);
}

TEST_F(DummyTestFixture,test_3){
    EXPECT_EQ(dummyTest.findFactorial(5),120);
}