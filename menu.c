
/******************************************************************************/
/*                                                                            */
/*  FILE NAME               :  menu.c                                         */
/*  PRINCIPAL AUTHOR        :  Suweijiang                                     */
/*  SUBSYSTEM NAME          :  menu                                           */
/*  MODULE NAME             :  menu                                           */
/*  LANGUAGE                :  C                                              */
/*  TARGET ENVIRONMENT      :  ANY                                            */
/*  DATE OF FIRST RELEASE   :  2014/09/09                                     */
/*  DESCRIPTION             :  This is a menu program                         */
/******************************************************************************/

/*
 *  Revision log:
 *
 *  Created by Suweijiang, 2014/9/9
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int Help();

#define CMD_MAX_LEN 128
#define DESC_LEN    1024
#define CMD_NUM     10

/* menu program */

static tDataNode head[]=
{
    {"help","this is help cmd!",Help,&head[1]},
    {"version","menu program v1.0",NULL,NULL}
};

main()
{	
    while(1)
    {
        char cmd[CMD_MAX_LEN];
        printf("Input a cmd string >");
        scanf("%s",cmd);
        tDataNode *p = FindCmd(head,cmd);
        if(p == NULL)
        {
            printf("This is a wrong cmd!\n");
        }
        printf("%s - %s\n", p->cmd, p->desc);
        if(p->handler != NULL)
        {
            p->handler();
        }
    }
}

int Help()
{
    ShowAllCmd(head);
    return 0;
}
