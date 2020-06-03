/*
**
**      GSC-18128-1, "Core Flight Executive Version 6.6"
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
*/

#include "cfe_tbl_filedef.h" /* Required to obtain the CFE_TBL_FILEDEF macro definition */
#include "sch_lab_sched_tab.h"
#include "cfe_sb.h" /* Required to use the CFE_SB_MSGID_WRAP_VALUE macro */

/*
** SCH Lab schedule table
** When populating this table:
**  1. Make sure the table is terminated by the SCH_LAB_END_OF_TABLE entry
**  2. You can have commented out entries, but a zero MID will terminate the table processing,
**      skipping the remaining entries.
**  3. If the table grows too big, increase SCH_LAB_MAX_SCHEDULE_ENTRIES
*/

SCH_LAB_ScheduleTable_t SCH_TBL_Structure = {.Config = {
                                                 {CFE_MISSION_ES_SEND_HK_TOPICID, 4},
                                                 {CFE_MISSION_EVS_SEND_HK_TOPICID, 4},
                                                 {CFE_MISSION_TIME_SEND_HK_TOPICID, 4},
                                                 {CFE_MISSION_SB_SEND_HK_TOPICID, 4},
                                                 {CFE_MISSION_TBL_SEND_HK_TOPICID, 4},
                                                 {CFE_MISSION_CI_LAB_SEND_HK_TOPICID, 4},
                                                 {CFE_MISSION_TO_LAB_SEND_HK_TOPICID, 4},
                                                 {CFE_MISSION_SAMPLE_APP_SEND_HK_TOPICID, 4},
#if 0
                { CFE_MISSION_SC_SEND_HK_TOPICID,       4, 0 },
                { CFE_MISSION_SC_1HZ_WAKEUP_TOPICID,    1, 0 },  /* Example of a 1hz packet */
                { CFE_MISSION_HS_SEND_HK_TOPICID,       4, 0 },
                { CFE_MISSION_FM_SEND_HK_TOPICID,       4, 0 },
                { CFE_MISSION_DS_SEND_HK_TOPICID,       4, 0 },
                { CFE_MISSION_LC_SEND_HK_TOPICID,       4, 0 },
#endif
                                             }};

/*
** The macro below identifies:
**    1) the data structure type to use as the table image format
**    2) the name of the table to be placed into the cFE Table File Header
**    3) a brief description of the contents of the file image
**    4) the desired name of the table image binary file that is cFE compatible
*/
CFE_TBL_FILEDEF(SCH_TBL_Structure, "SCH_LAB_APP.SCH_LAB_SchTbl", "Schedule Lab Table", "sch_lab_table.tbl",
                "SCH_LAB/ScheduleTable")
