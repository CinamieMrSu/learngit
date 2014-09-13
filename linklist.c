/******************************************************************************/
/*                                                                            */
/*  FILE NAME               :  linklist.c                                     */
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

#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

tDataNode* FindCmd(tDataNode * head,char * cmd)
{
    if(head == NULL || cmd == NULL)
    {
        return NULL;
    }
    tDataNode *p=head;
    while(p != NULL)
    {
        if(!strcmp(p->cmd,cmd))
        {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int ShowAllCmd(tDataNode * head)
{
    printf("Menu List:\n");
    tDataNode *p = head;
    while(p != NULL)
    {
        printf("%s - %s\n", p->cmd, p->desc);
    	p = p->next;
    }
    return 0;
}
