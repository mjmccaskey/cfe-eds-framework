/*************************************************************************
**
**      GSC-18128-1, "Core Flight Executive Version 6.7"
**
**      Copyright (c) 2006-2019 United States Government as represented by
**      the Administrator of the National Aeronautics and Space Administration.
**      All Rights Reserved.
**
**      Licensed under the Apache License, Version 2.0 (the "License");
**      you may not use this file except in compliance with the License.
**      You may obtain a copy of the License at
**
**        http://www.apache.org/licenses/LICENSE-2.0
**
**      Unless required by applicable law or agreed to in writing, software
**      distributed under the License is distributed on an "AS IS" BASIS,
**      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**      See the License for the specific language governing permissions and
**      limitations under the License.
**
** File: sample_lib.c
**
** Purpose: 
**   Sample CFS library
**
*************************************************************************/

/*************************************************************************
** Includes
*************************************************************************/
#include "sample_lib.h"
#include "sample_lib_version.h"

/* for "strncpy()" */
#include <string.h>

/*************************************************************************
** Macro Definitions
*************************************************************************/

#define SAMPLE_LIB_BUFFER_SIZE      16


/*************************************************************************
** Private Data Structures
*************************************************************************/
static char SAMPLE_Buffer[SAMPLE_LIB_BUFFER_SIZE];

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Library Initialization Routine                                  */
/* cFE requires that a library have an initialization routine      */ 
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_LibInit(void)
{
    /*
     * Call a C library function, like strcpy(), and test its result.
     *
     * This is primary for a unit test example, to have more than
     * one code path to exercise.
     *
     * The specification for strncpy() indicates that it should return
     * the pointer to the destination buffer, so it should be impossible
     * for this to ever fail when linked with a compliant C library.
     */
    if (strncpy(SAMPLE_Buffer, "SAMPLE DATA", sizeof(SAMPLE_Buffer)-1) !=
            SAMPLE_Buffer)
    {
        return CFE_STATUS_NOT_IMPLEMENTED;
    }
    
    /* ensure termination */
    SAMPLE_Buffer[sizeof(SAMPLE_Buffer)-1] = 0;


    OS_printf ("SAMPLE Lib Initialized.  Version %d.%d.%d.%d\n",
                SAMPLE_LIB_MAJOR_VERSION,
                SAMPLE_LIB_MINOR_VERSION, 
                SAMPLE_LIB_REVISION, 
                SAMPLE_LIB_MISSION_REV);
                
    return CFE_SUCCESS;
 
}/* End SAMPLE_LibInit */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                 */
/* Sample Lib function                                             */ 
/*                                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
int32 SAMPLE_Function( void ) 
{
   OS_printf ("SAMPLE_Function called, buffer=\'%s\'\n", SAMPLE_Buffer);

   return(CFE_SUCCESS);
   
} /* End SAMPLE_Function */

/************************/
/*  End of File Comment */
/************************/