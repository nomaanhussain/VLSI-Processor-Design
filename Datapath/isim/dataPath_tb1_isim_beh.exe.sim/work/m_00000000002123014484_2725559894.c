/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/TE/Winter/VLSI/finalProj/Datapath/alu.v";
static int ng1[] = {7, 0};



static void Cont_33_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t4, 8, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 4048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 255U;
    t14 = t13;
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    xsi_driver_vfirst_trans(t8, 0, 7);
    t21 = (t0 + 3968);
    *((int *)t21) = 1;

LAB1:    return;
}


extern void work_m_00000000002123014484_2725559894_init()
{
	static char *pe[] = {(void *)Cont_33_0};
	xsi_register_didat("work_m_00000000002123014484_2725559894", "isim/dataPath_tb1_isim_beh.exe.sim/work/m_00000000002123014484_2725559894.didat");
	xsi_register_executes(pe);
}
