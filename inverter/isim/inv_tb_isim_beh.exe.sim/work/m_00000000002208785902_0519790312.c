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
static const char *ng0 = "C:/Users/AS/Desktop/VLSI project/inverter/inverter_tb.v";
static unsigned int ng1[] = {240U, 0U};
static unsigned int ng2[] = {170U, 0U};
static unsigned int ng3[] = {51U, 0U};
static unsigned int ng4[] = {231U, 0U};
static const char *ng5 = "in = %b%b%b%b%b%b%b%b";
static const char *ng6 = "out = %b%b%b%b%b%b%b%b";



static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);

LAB4:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    goto LAB1;

}

static void Always_54_1(char *t0)
{
    char t7[8];
    char t19[8];
    char t31[8];
    char t43[8];
    char t55[8];
    char t67[8];
    char t79[8];
    char t91[8];
    char t102[8];
    char t112[8];
    char t122[8];
    char t132[8];
    char t142[8];
    char t152[8];
    char t162[8];
    char t172[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;

LAB0:    t1 = (t0 + 2616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    t16 = (t0 + 1448);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 6);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 6);
    t27 = (t26 & 1);
    *((unsigned int *)t20) = t27;
    t28 = (t0 + 1448);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t32 = (t31 + 4);
    t33 = (t30 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 5);
    t36 = (t35 & 1);
    *((unsigned int *)t31) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 5);
    t39 = (t38 & 1);
    *((unsigned int *)t32) = t39;
    t40 = (t0 + 1448);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t45 = (t42 + 4);
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 4);
    t48 = (t47 & 1);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 4);
    t51 = (t50 & 1);
    *((unsigned int *)t44) = t51;
    t52 = (t0 + 1448);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t56 = (t55 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t54);
    t59 = (t58 >> 3);
    t60 = (t59 & 1);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 3);
    t63 = (t62 & 1);
    *((unsigned int *)t56) = t63;
    t64 = (t0 + 1448);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 2);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 2);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    t76 = (t0 + 1448);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    memset(t79, 0, 8);
    t80 = (t79 + 4);
    t81 = (t78 + 4);
    t82 = *((unsigned int *)t78);
    t83 = (t82 >> 1);
    t84 = (t83 & 1);
    *((unsigned int *)t79) = t84;
    t85 = *((unsigned int *)t81);
    t86 = (t85 >> 1);
    t87 = (t86 & 1);
    *((unsigned int *)t80) = t87;
    t88 = (t0 + 1448);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t92 = (t91 + 4);
    t93 = (t90 + 4);
    t94 = *((unsigned int *)t90);
    t95 = (t94 >> 0);
    t96 = (t95 & 1);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 0);
    t99 = (t98 & 1);
    *((unsigned int *)t92) = t99;
    xsi_vlogfile_write(0, 0, 0, ng5, 9, t0, (char)118, t7, 1, (char)118, t19, 1, (char)118, t31, 1, (char)118, t43, 1, (char)118, t55, 1, (char)118, t67, 1, (char)118, t79, 1, (char)118, t91, 1);
    t100 = (t0 + 1048U);
    t101 = *((char **)t100);
    memset(t102, 0, 8);
    t100 = (t102 + 4);
    t103 = (t101 + 4);
    t104 = *((unsigned int *)t101);
    t105 = (t104 >> 7);
    t106 = (t105 & 1);
    *((unsigned int *)t102) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 >> 7);
    t109 = (t108 & 1);
    *((unsigned int *)t100) = t109;
    t110 = (t0 + 1048U);
    t111 = *((char **)t110);
    memset(t112, 0, 8);
    t110 = (t112 + 4);
    t113 = (t111 + 4);
    t114 = *((unsigned int *)t111);
    t115 = (t114 >> 6);
    t116 = (t115 & 1);
    *((unsigned int *)t112) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 >> 6);
    t119 = (t118 & 1);
    *((unsigned int *)t110) = t119;
    t120 = (t0 + 1048U);
    t121 = *((char **)t120);
    memset(t122, 0, 8);
    t120 = (t122 + 4);
    t123 = (t121 + 4);
    t124 = *((unsigned int *)t121);
    t125 = (t124 >> 5);
    t126 = (t125 & 1);
    *((unsigned int *)t122) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 >> 5);
    t129 = (t128 & 1);
    *((unsigned int *)t120) = t129;
    t130 = (t0 + 1048U);
    t131 = *((char **)t130);
    memset(t132, 0, 8);
    t130 = (t132 + 4);
    t133 = (t131 + 4);
    t134 = *((unsigned int *)t131);
    t135 = (t134 >> 4);
    t136 = (t135 & 1);
    *((unsigned int *)t132) = t136;
    t137 = *((unsigned int *)t133);
    t138 = (t137 >> 4);
    t139 = (t138 & 1);
    *((unsigned int *)t130) = t139;
    t140 = (t0 + 1048U);
    t141 = *((char **)t140);
    memset(t142, 0, 8);
    t140 = (t142 + 4);
    t143 = (t141 + 4);
    t144 = *((unsigned int *)t141);
    t145 = (t144 >> 3);
    t146 = (t145 & 1);
    *((unsigned int *)t142) = t146;
    t147 = *((unsigned int *)t143);
    t148 = (t147 >> 3);
    t149 = (t148 & 1);
    *((unsigned int *)t140) = t149;
    t150 = (t0 + 1048U);
    t151 = *((char **)t150);
    memset(t152, 0, 8);
    t150 = (t152 + 4);
    t153 = (t151 + 4);
    t154 = *((unsigned int *)t151);
    t155 = (t154 >> 2);
    t156 = (t155 & 1);
    *((unsigned int *)t152) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 >> 2);
    t159 = (t158 & 1);
    *((unsigned int *)t150) = t159;
    t160 = (t0 + 1048U);
    t161 = *((char **)t160);
    memset(t162, 0, 8);
    t160 = (t162 + 4);
    t163 = (t161 + 4);
    t164 = *((unsigned int *)t161);
    t165 = (t164 >> 1);
    t166 = (t165 & 1);
    *((unsigned int *)t162) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 >> 1);
    t169 = (t168 & 1);
    *((unsigned int *)t160) = t169;
    t170 = (t0 + 1048U);
    t171 = *((char **)t170);
    memset(t172, 0, 8);
    t170 = (t172 + 4);
    t173 = (t171 + 4);
    t174 = *((unsigned int *)t171);
    t175 = (t174 >> 0);
    t176 = (t175 & 1);
    *((unsigned int *)t172) = t176;
    t177 = *((unsigned int *)t173);
    t178 = (t177 >> 0);
    t179 = (t178 & 1);
    *((unsigned int *)t170) = t179;
    xsi_vlogfile_write(1, 0, 0, ng6, 9, t0, (char)118, t102, 1, (char)118, t112, 1, (char)118, t122, 1, (char)118, t132, 1, (char)118, t142, 1, (char)118, t152, 1, (char)118, t162, 1, (char)118, t172, 1);
    goto LAB2;

}


extern void work_m_00000000002208785902_0519790312_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000002208785902_0519790312", "isim/inv_tb_isim_beh.exe.sim/work/m_00000000002208785902_0519790312.didat");
	xsi_register_executes(pe);
}
