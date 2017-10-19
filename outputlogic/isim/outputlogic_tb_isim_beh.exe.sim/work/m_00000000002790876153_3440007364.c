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
static const char *ng0 = "C:/Users/AS/Desktop/VLSI project/outputlogic/outputlogic.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {3U, 0U};



static void Always_41_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;

LAB0:    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6376);
    *((int *)t2) = 1;
    t3 = (t0 + 6088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4656);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3216);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3376);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5136);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2816U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 472);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 744);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1152);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1288);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1560);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = (t0 + 1968);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = (t0 + 2104);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);

LAB34:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3216);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4816);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB9:    xsi_set_current_line(70, ng0);

LAB35:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3216);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4816);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB11:    xsi_set_current_line(78, ng0);

LAB36:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3216);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4816);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB13:    xsi_set_current_line(86, ng0);

LAB37:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3216);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 4656);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4816);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB15:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 4496);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    goto LAB33;

LAB17:    xsi_set_current_line(97, ng0);

LAB38:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3536);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4496);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB33;

LAB19:    xsi_set_current_line(103, ng0);

LAB39:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3216);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB21:    xsi_set_current_line(109, ng0);

LAB40:    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4016);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3696);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB23:    xsi_set_current_line(115, ng0);

LAB41:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3376);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3856);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB25:    xsi_set_current_line(121, ng0);

LAB42:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3536);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 5136);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB33;

LAB27:    xsi_set_current_line(127, ng0);

LAB43:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4176);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4016);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB29:    xsi_set_current_line(133, ng0);

LAB44:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 3536);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 5136);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4976);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4336);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB33;

LAB31:    xsi_set_current_line(141, ng0);

LAB45:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 4816);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 4336);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB33;

}


extern void work_m_00000000002790876153_3440007364_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000002790876153_3440007364", "isim/outputlogic_tb_isim_beh.exe.sim/work/m_00000000002790876153_3440007364.didat");
	xsi_register_executes(pe);
}
