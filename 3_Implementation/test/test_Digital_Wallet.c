
#include "c:\Users\prasa\test\M1_DIGITAL-WALLET\3_Implementation\unity\unity.h"
#include "c:\Users\prasa\test\M1_DIGITAL-WALLET\3_Implementation\inc\header.h"

/* Modify these two lines according to the project */
#include "c:\Users\prasa\test\M1_DIGITAL-WALLET\3_Implementation\src\header.h"
#define PROJECT_NAME    "DIGITAL WALLET"

/* Prototypes for all the test functions */
void test_searchACustomer(void);
void test_payBill(void);
void test_printAllCustomers(void);
void test_addBalance(void);
void test_transaction(void);                                 // transaction

/* Required by the unity test framework */
void setUp(void)
{

}
/* Required by the unity test framework */
void tearDown(void)
{

}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_searchACustomer);
  RUN_TEST(test_payBill);
  RUN_TEST(test_printAllCustomers);
  RUN_TEST(test_addBalance);
  RUN_TEST(test_transaction);                                

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_searchACustomer(void) {
  TEST_ASSERT_EQUAL(void, searchACustomer(1001));
  
}

void test_payBill(void) {
  TEST_ASSERT_EQUAL(void, payBill(1001));
}

void test_printAllCustomers(void) {
  TEST_ASSERT_EQUAL(void, printAllCustomers());
}

void test_addBalance(void) {
  TEST_ASSERT_EQUAL(void, addBalance());
}

void test_transaction(void) {
  TEST_ASSERT_EQUAL(void, transaction());                             
}