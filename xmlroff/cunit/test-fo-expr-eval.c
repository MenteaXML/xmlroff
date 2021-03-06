/*
 *  Simple example of a CUnit unit test.
 *
 *  This program (crudely) demonstrates a very simple "black box"
 *  test of the standard library functions fprintf() and fread().
 *  It uses suite initialization and cleanup functions to open
 *  and close a common temporary file used by the test functions.
 *  The test functions then write to and read from the temporary
 *  file in the course of testing the library functions.
 *
 *  The 2 test functions are added to a single CUnit suite, and
 *  then run using the CUnit Basic interface.  The output of the
 *  program (on CUnit version 2.0-2) is:
 *
 *           CUnit : A Unit testing framework for C.
 *           http://cunit.sourceforge.net/
 *
 *       Suite: Suite_1
 *         Test: test of fprintf() ... passed
 *         Test: test of fread() ... passed
 *
 *       --Run Summary: Type      Total     Ran  Passed  Failed
 *                      suites        1       1     n/a       0
 *                      tests         2       2       2       0
 *                      asserts       5       5       5       0
 */

#include "CUnit/Basic.h"
#include <libfo/fo-libfo-basic.h>
#include <libfo/expr/fo-expr-eval.h>

/* The suite initialization function.
 * Opens the temporary file used by the tests.
 * Returns zero on success, non-zero otherwise.
 */
static int
init_suite_expr (void)
{
  fo_libfo_init ();

  return 0;
}

/* The suite cleanup function.
 * Closes the temporary file used by the tests.
 * Returns zero on success, non-zero otherwise.
 */
static int
clean_suite_expr (void)
{
  fo_libfo_shutdown ();

  return 0;
}

static void
test_fo_expr_eval(void)
{
  CU_ASSERT_PTR_NULL (fo_expr_eval ("test",
				    "test",
				    NULL,
				    NULL,
				    NULL,
				    NULL,
				    NULL,
				    NULL,
				    NULL));
}

static CU_TestInfo test_array1[] = {
  { "test of fo_expr_eval()", test_fo_expr_eval },
  CU_TEST_INFO_NULL,
};

static CU_SuiteInfo suites[] = {
  { "fo-expr-eval", init_suite_expr, clean_suite_expr, test_array1 },
  CU_SUITE_INFO_NULL,
};

CU_SuiteInfo *
test_fo_expr_eval_get_suites()
{
  return suites;
}
