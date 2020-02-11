/*================================================================================*
** File:  ut_oscore_countsem_test.h
** Owner: Alan Cudmore
** Date:  April 2013
**================================================================================*/

#ifndef _UT_OSCORE_COUNTSEM_TEST_H_
#define _UT_OSCORE_COUNTSEM_TEST_H_

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#include "ut_os_support.h"

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

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

void UT_os_count_sem_create_test(void);
void UT_os_count_sem_delete_test(void);
void UT_os_count_sem_give_test(void);
void UT_os_count_sem_timed_wait_test(void);
void UT_os_count_sem_take_test(void);
void UT_os_count_sem_get_id_by_name_test(void);
void UT_os_count_sem_get_info_test(void);

/*--------------------------------------------------------------------------------*/

#endif  /* _UT_OSCORE_COUNTSEM_TEST_H_ */

/*================================================================================*
** End of File: ut_oscore_countsem_test.h
**================================================================================*/