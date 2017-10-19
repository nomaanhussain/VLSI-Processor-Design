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
static const char *ng0 = "E:/TE/Winter/VLSI/finalProj2/Mips/RegFile.v";
static int ng1[] = {0, 0};

static void NetReassign_40_1(char *);
static void NetReassign_41_2(char *);


static void Always_36_0(char *t0)
{
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4304);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2248);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5844);
    *((int *)t3) = 1;
    NetReassign_40_1(t0);

LAB8:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2408);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 5848);
    *((int *)t3) = 1;
    NetReassign_41_2(t0);
    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    t11 = (t0 + 2568);
    t15 = (t0 + 2568);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2568);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 3, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB10;

}

static void NetReassign_40_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t20[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t3 = 0;
    t2 = (t0 + 1368U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 7U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t5) > 0)
        goto LAB14;

LAB15:    memcpy(t4, t27, 8);

LAB16:    t33 = (t0 + 5844);
    if (*((int *)t33) > 0)
        goto LAB17;

LAB18:    if (t3 > 0)
        goto LAB19;

LAB20:    t36 = (t0 + 4320);
    *((int *)t36) = 0;

LAB21:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 2568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2568);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 1368U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t20, 32, t19, t23, t26, 2, 1, t28, 3, 2);
    goto LAB9;

LAB10:    t27 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t4, 32, t20, 32, t27, 32);
    goto LAB16;

LAB14:    memcpy(t4, t20, 8);
    goto LAB16;

LAB17:    t34 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t34, t4, 0, 0, 0, 8, ((int*)(t33)));
    t3 = 1;
    goto LAB18;

LAB19:    t35 = (t0 + 4320);
    *((int *)t35) = 1;
    goto LAB21;

}

static void NetReassign_41_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t20[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t3 = 0;
    t2 = (t0 + 1528U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 7U);
    if (t11 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB8;

LAB9:    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t13) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t5) > 0)
        goto LAB14;

LAB15:    memcpy(t4, t27, 8);

LAB16:    t33 = (t0 + 5848);
    if (*((int *)t33) > 0)
        goto LAB17;

LAB18:    if (t3 > 0)
        goto LAB19;

LAB20:    t36 = (t0 + 4336);
    *((int *)t36) = 0;

LAB21:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 2568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2568);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 1528U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_array_select_value(t20, 32, t19, t23, t26, 2, 1, t28, 3, 2);
    goto LAB9;

LAB10:    t27 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t4, 32, t20, 32, t27, 32);
    goto LAB16;

LAB14:    memcpy(t4, t20, 8);
    goto LAB16;

LAB17:    t34 = (t0 + 2408);
    xsi_vlogvar_assignassignvalue(t34, t4, 0, 0, 0, 8, ((int*)(t33)));
    t3 = 1;
    goto LAB18;

LAB19:    t35 = (t0 + 4336);
    *((int *)t35) = 1;
    goto LAB21;

}


extern void work_m_00000000004083996091_0254784918_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)NetReassign_40_1,(void *)NetReassign_41_2};
	xsi_register_didat("work_m_00000000004083996091_0254784918", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000004083996091_0254784918.didat");
	xsi_register_executes(pe);
}
