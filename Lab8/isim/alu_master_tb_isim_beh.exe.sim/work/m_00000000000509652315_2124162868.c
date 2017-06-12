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
static int ng1[] = {0, 0};
static int ng2[] = {10, 0};
static int ng3[] = {100, 0};
static int ng4[] = {1000, 0};
static int ng5[] = {10000, 0};
static int ng6[] = {100000, 0};
static int ng7[] = {1000000, 0};



static void NetDecl_8_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 8);
    xsi_driver_vfirst_trans(t3, 0, 31U);

LAB1:    return;
}

static void Cont_9_1(char *t0)
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
    char *t92;
    char *t93;
    char *t94;
    char *t95;

LAB0:    t1 = (t0 + 2776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
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
    t12 = ((char*)((ng2)));
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
    t25 = ((char*)((ng3)));
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
    t38 = ((char*)((ng4)));
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
    t51 = ((char*)((ng5)));
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
    t64 = ((char*)((ng6)));
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
    t77 = ((char*)((ng7)));
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
    t90 = (t0 + 3768);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    memcpy(t94, t89, 8);
    xsi_driver_vfirst_trans(t90, 0, 31);
    t95 = (t0 + 3592);
    *((int *)t95) = 1;

LAB1:    return;
}

static void Cont_18_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 3024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 28);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 28);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 3832);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 31, 31);
    t25 = (t0 + 3608);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_19_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 3624);
    *((int *)t8) = 1;

LAB1:    return;
}


extern void work_m_00000000000509652315_2124162868_init()
{
	static char *pe[] = {(void *)NetDecl_8_0,(void *)Cont_9_1,(void *)Cont_18_2,(void *)Cont_19_3};
	xsi_register_didat("work_m_00000000000509652315_2124162868", "isim/alu_master_tb_isim_beh.exe.sim/work/m_00000000000509652315_2124162868.didat");
	xsi_register_executes(pe);
}
