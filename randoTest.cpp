/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"


	//FUNCTIONS WE NEED TO TEST:

	//bool shouldWorry(bool,bool,bool);
	//bool isDivisbleBy(int,int);
	//bool isPrime(int);
	//int nearestToZero(int a,int a);


class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
	ASSERT_TRUE( rando.shouldWorry(true,false,false) );
}

TEST(RandoTest, nearestToZero)
{
  Rando rando;
  int a, b;
  ASSERT_TRUE( rando.nearestToZero(a,b));
}

TEST(RandoTest, isPrime)
{
	Rando rando;
	int a;
	ASSERT_TRUE( rando.isPrime(a));
}

TEST(RandoTest, isDivisbleBy)
{
	Rando rando;
	int first, second;
	ASSERT_TRUE( rando.isDivisbleBy(first,second));
}
