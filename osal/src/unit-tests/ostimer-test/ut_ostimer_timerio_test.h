/*================================================================================*
** File:  ut_ostimer_timerio_test.h
** Owner: Tam Ngo
** Date:  April 2013
**================================================================================*/

#ifndef _UT_OSTIMER_TIMERIO_TEST_H_
#define _UT_OSTIMER_TIMERIO_TEST_H_

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_os_support.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

#define UT_OS_TIMER_LIST_LEN  (OS_MAX_TIMERS + 10)

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function prototypes
**--------------------------------------------------------------------------------*/

void UT_os_timerinit_test(void);
void UT_os_timercreate_test(void);
void UT_os_timerdelete_test(void);
void UT_os_timerset_test(void);
void UT_os_timergetidbyname_test(void);
void UT_os_timergetinfo_test(void);

/*--------------------------------------------------------------------------------*/

#endif  /* _UT_OSTIMER_TIMERIO_TEST_H_ */

/*================================================================================*
** End of File: ut_ostimer_timerio_test.h
**================================================================================*/