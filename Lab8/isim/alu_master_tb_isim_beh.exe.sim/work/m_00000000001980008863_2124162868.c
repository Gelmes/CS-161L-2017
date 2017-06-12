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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/marco/Dropbox/School/SPRING 2017/161L/New Stuff/Lab8/BCDtoBinary.v";
static int ng1[] = {10, 0};
static int ng2[] = {100, 0};
static int ng3[] = {1000, 0};
static int ng4[] = {10000, 0};
static int ng5[] = {100000, 0};
static int ng6[] = {1000000, 0};
static int ng7[] = {28, 0};
static int ng8[] = {31, 0};



static void Cont_8_0(char *t0)
{
    char t3[8];
    char t13[8];
    char t23[8];
    char t24[8];
    char t26[8];
    char t36[8];
    char t37[8];
    char t39[8];
    char t49[8];
    char t50[8];
    char t52[8];
    char t62[8];
    char t63[8];
    char t65[8];
    char t75[8];
    char t76[8];
    char t78[8];
    char t88[8];
    char t89[8];
    char t92[8];
    char t97[8];
    char t98[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t51;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 4);
    *((unsigned int *)t14) = t20;
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 15U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 15U);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_multiply(t23, 32, t12, 32, t13, 32);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t3, 32, t23, 32);
    t25 = ((char*)((ng2)));
    t27 = (t0 + 1048U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 8);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 8);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 15U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 15U);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_multiply(t36, 32, t25, 32, t26, 32);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t24, 32, t36, 32);
    t38 = ((char*)((ng3)));
    t40 = (t0 + 1048U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t40 = (t39 + 4);
    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (t43 >> 12);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 12);
    *((unsigned int *)t40) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 15U);
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 15U);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_multiply(t49, 32, t38, 32, t39, 32);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 32, t37, 32, t49, 32);
    t51 = ((char*)((ng4)));
    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t55 = (t54 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (t56 >> 16);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 16);
    *((unsigned int *)t53) = t59;
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 15U);
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t61 & 15U);
    memset(t62, 0, 8);
    xsi_vlog_unsigned_multiply(t62, 32, t51, 32, t52, 32);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_add(t63, 32, t50, 32, t62, 32);
    t64 = ((char*)((ng5)));
    t66 = (t0 + 1048U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 20);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 20);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 15U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 15U);
    memset(t75, 0, 8);
    xsi_vlog_unsigned_multiply(t75, 32, t64, 32, t65, 32);
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 32, t63, 32, t75, 32);
    t77 = ((char*)((ng6)));
    t79 = (t0 + 1048U);
    t80 = *((char **)t79);
    memset(t78, 0, 8);
    t79 = (t78 + 4);
    t81 = (t80 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (t82 >> 24);
    *((unsigned int *)t78) = t83;
    t84 = *((unsigned int *)t81);
    t85 = (t84 >> 24);
    *((unsigned int *)t79) = t85;
    t86 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t86 & 15U);
    t87 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t87 & 15U);
    memset(t88, 0, 8);
    xsi_vlog_unsigned_multiply(t88, 32, t77, 32, t78, 32);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 32, t76, 32, t88, 32);
    t90 = (t0 + 1048U);
    t91 = *((char **)t90);
    t90 = (t0 + 1008U);
    t93 = (t90 + 72U);
    t94 = *((char **)t93);
    t95 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t92, 32, t91, t94, 2, t95, 32, 1);
    t96 = ((char*)((ng8)));
    memset(t97, 0, 8);
    xsi_vlog_unsigned_lshift(t97, 32, t92, 32, t96, 32);
    t99 = *((unsigned int *)t89);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = (t89 + 4);
    t103 = (t97 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB4;

LAB5:
LAB6:    t126 = (t0 + 2768);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    memcpy(t130, t98, 8);
    xsi_driver_vfirst_trans(t126, 0, 31);
    t131 = (t0 + 2688);
    *((int *)t131) = 1;

LAB1:    return;
LAB4:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t89 + 4);
    t113 = (t97 + 4);
    t114 = *((unsigned int *)t112);
    t115 = (~(t114));
    t116 = *((unsigned int *)t89);
    t117 = (t116 & t115);
    t118 = *((unsigned int *)t113);
    t119 = (~(t118));
    t120 = *((unsigned int *)t97);
    t121 = (t120 & t119);
    t122 = (~(t117));
    t123 = (~(t121));
    t124 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t124 & t122);
    t125 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t125 & t123);
    goto LAB6;

}


extern void work_m_00000000001980008863_2124162868_init()
{
	static char *pe[] = {(void *)Cont_8_0};
	xsi_register_didat("work_m_00000000001980008863_2124162868", "isim/alu_master_tb_isim_beh.exe.sim/work/m_00000000001980008863_2124162868.didat");
	xsi_register_executes(pe);
}
