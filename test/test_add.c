#include "unity.h"
#include "mock_add.h"


int fake_add(int val1,int val2,int numOfCalls){
	if(numOfCalls == 0)
		return 8;
	else if(numOfCalls == 1)
		return 21;
}

void setUp(void){
	add_StubWithCallback(fake_add);
}

void tearDown(void){}





void test_add_given_2_6_expect_8(void)
{
	//add_ExpectAndReturn(2,6,8);
	//add_ExpectAndReturn(9,12,21);
	
    TEST_ASSERT_EQUAL(8,add(2,6));
    TEST_ASSERT_EQUAL(21,add(9,12));
}
