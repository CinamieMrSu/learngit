/******************************************************************************/
/*                                                                            */
/*  FILE NAME               :  linklist.h                                     */
/*  PRINCIPAL AUTHOR        :  Suweijiang                                     */
/*  SUBSYSTEM NAME          :  menu                                           */
/*  MODULE NAME             :  linklist                                       */
/*  LANGUAGE                :  C                                              */
/*  TARGET ENVIRONMENT      :  ANY                                            */
/*  DATE OF FIRST RELEASE   :  2014/09/13                                     */
/*  DESCRIPTION             :  linklist for menu program                      */
/******************************************************************************/

/*
 *  Revision log:
 *
 *  Created by Suweijiang, 2014/09/13
 *
 */

/* data struct and its operations*/

typedef struct DataNode
{
    char*   cmd;
    char*   desc;
    int     (*handler)();
    struct  DataNode *next;
}tDataNode;

tDataNode* FindCmd(tDataNode * head,char * cmd);

int ShowAllCmd(tDataNode * head);
