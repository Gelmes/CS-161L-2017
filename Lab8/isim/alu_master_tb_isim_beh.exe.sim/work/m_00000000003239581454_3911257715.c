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
static const char *ng0 = "C:/Users/marco/Dropbox/School/SPRING 2017/161L/New Stuff/Lab8/BinarytoBCD.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {32, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {3, 0};
static int ng8[] = {7, 0};
static int ng9[] = {4, 0};
static int ng10[] = {11, 0};
static int ng11[] = {8, 0};
static int ng12[] = {15, 0};
static int ng13[] = {12, 0};
static int ng14[] = {19, 0};
static int ng15[] = {16, 0};
static int ng16[] = {23, 0};
static int ng17[] = {20, 0};
static int ng18[] = {27, 0};
static int ng19[] = {24, 0};
static int ng20[] = {31, 0};



static void Always_11_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t29[8];
    char t39[8];
    char t52[8];
    char t54[8];
    char t55[8];
    char t56[8];
    char t79[16];
    char t80[16];
    char t81[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    int t64;
    char *t65;
    unsigned int t66;
    int t67;
    int t68;
    char *t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    int t78;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng2)));
    t3 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t2, 32, t3, 32);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 6);
    xsi_set_current_line(14, ng0);

LAB6:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB9;

LAB10:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    t5 = (t0 + 1008U);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng20)));
    xsi_vlog_generic_get_index_select_value(t79, 36, t7, t9, 2, t10, 32, 1);
    t17 = ((char*)((ng2)));
    xsi_vlog_unsigned_lshift(t80, 36, t79, 36, t17, 32);
    t11 = 0;

LAB98:    t12 = (t11 < 1);
    if (t12 == 1)
        goto LAB99;

LAB100:    t11 = 1;

LAB101:    t84 = (t11 < 2);
    if (t84 == 1)
        goto LAB102;

LAB107:    t57 = (t0 + 1448);
    xsi_vlogvar_assign_value(t57, t81, 0, 0, 36);
    goto LAB2;

LAB8:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(14, ng0);

LAB14:    xsi_set_current_line(15, ng0);
    t17 = (t0 + 1608);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t16) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t26 & 15U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 15U);
    t28 = ((char*)((ng5)));
    memset(t29, 0, 8);
    t30 = (t16 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB16;

LAB15:    t31 = (t28 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t16) > *((unsigned int *)t28))
        goto LAB17;

LAB18:    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 4);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB27;

LAB26:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t6) > *((unsigned int *)t8))
        goto LAB28;

LAB29:    t18 = (t16 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 8);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 8);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB38;

LAB37:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t6) > *((unsigned int *)t8))
        goto LAB39;

LAB40:    t18 = (t16 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB42;

LAB43:
LAB44:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 12);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 12);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB49;

LAB48:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB49;

LAB52:    if (*((unsigned int *)t6) > *((unsigned int *)t8))
        goto LAB50;

LAB51:    t18 = (t16 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 16);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB60;

LAB59:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t6) > *((unsigned int *)t8))
        goto LAB61;

LAB62:    t18 = (t16 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 20);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 20);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB71;

LAB70:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t6) > *((unsigned int *)t8))
        goto LAB72;

LAB73:    t18 = (t16 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB75;

LAB76:
LAB77:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 24);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 24);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 15U);
    t8 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB82;

LAB81:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB82;

LAB85:    if (*((unsigned int *)t6) > *((unsigned int *)t8))
        goto LAB83;

LAB84:    t18 = (t16 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (~(t23));
    t25 = *((unsigned int *)t16);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB86;

LAB87:
LAB88:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 6, t5, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 6);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1008U);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t17 = (t0 + 1768);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_index_select_value(t16, 32, t8, t10, 2, t19, 6, 2);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t16);
    t13 = (t11 | t12);
    *((unsigned int *)t29) = t13;
    t20 = (t6 + 4);
    t21 = (t16 + 4);
    t28 = (t29 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t22 = (t14 | t15);
    *((unsigned int *)t28) = t22;
    t23 = *((unsigned int *)t28);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB92;

LAB93:
LAB94:    t32 = (t0 + 1608);
    xsi_vlogvar_assign_value(t32, t29, 0, 0, 32);
    goto LAB6;

LAB16:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t29) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(15, ng0);

LAB23:    xsi_set_current_line(15, ng0);
    t40 = (t0 + 1608);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t39, 0, 8);
    t43 = (t39 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t39) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t49 & 15U);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 15U);
    t51 = ((char*)((ng6)));
    memset(t52, 0, 8);
    xsi_vlog_unsigned_add(t52, 4, t39, 4, t51, 4);
    t53 = (t0 + 1608);
    t57 = (t0 + 1608);
    t58 = (t57 + 72U);
    t59 = *((char **)t58);
    t60 = ((char*)((ng7)));
    t61 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t54, t55, t56, ((int*)(t59)), 2, t60, 32, 1, t61, 32, 1);
    t62 = (t54 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (!(t63));
    t65 = (t55 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    t68 = (t64 && t67);
    t69 = (t56 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (!(t70));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB24;

LAB25:    goto LAB22;

LAB24:    t73 = *((unsigned int *)t56);
    t74 = (t73 + 0);
    t75 = *((unsigned int *)t54);
    t76 = *((unsigned int *)t55);
    t77 = (t75 - t76);
    t78 = (t77 + 1);
    xsi_vlogvar_assign_value(t53, t52, t74, *((unsigned int *)t55), t78);
    goto LAB25;

LAB27:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(16, ng0);

LAB34:    xsi_set_current_line(16, ng0);
    t19 = (t0 + 1608);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t29, 0, 8);
    t28 = (t29 + 4);
    t30 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (t34 >> 4);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 4);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 15U);
    t31 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 4, t29, 4, t31, 4);
    t32 = (t0 + 1608);
    t33 = (t0 + 1608);
    t40 = (t33 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng8)));
    t43 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t52, t54, t55, ((int*)(t41)), 2, t42, 32, 1, t43, 32, 1);
    t44 = (t52 + 4);
    t46 = *((unsigned int *)t44);
    t64 = (!(t46));
    t51 = (t54 + 4);
    t47 = *((unsigned int *)t51);
    t67 = (!(t47));
    t68 = (t64 && t67);
    t53 = (t55 + 4);
    t48 = *((unsigned int *)t53);
    t71 = (!(t48));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB35;

LAB36:    goto LAB33;

LAB35:    t49 = *((unsigned int *)t55);
    t74 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t63 = *((unsigned int *)t54);
    t77 = (t50 - t63);
    t78 = (t77 + 1);
    xsi_vlogvar_assign_value(t32, t39, t74, *((unsigned int *)t54), t78);
    goto LAB36;

LAB38:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB40;

LAB39:    *((unsigned int *)t16) = 1;
    goto LAB40;

LAB42:    xsi_set_current_line(17, ng0);

LAB45:    xsi_set_current_line(17, ng0);
    t19 = (t0 + 1608);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t29, 0, 8);
    t28 = (t29 + 4);
    t30 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (t34 >> 8);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 8);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 15U);
    t31 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 4, t29, 4, t31, 4);
    t32 = (t0 + 1608);
    t33 = (t0 + 1608);
    t40 = (t33 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng10)));
    t43 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t52, t54, t55, ((int*)(t41)), 2, t42, 32, 1, t43, 32, 1);
    t44 = (t52 + 4);
    t46 = *((unsigned int *)t44);
    t64 = (!(t46));
    t51 = (t54 + 4);
    t47 = *((unsigned int *)t51);
    t67 = (!(t47));
    t68 = (t64 && t67);
    t53 = (t55 + 4);
    t48 = *((unsigned int *)t53);
    t71 = (!(t48));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB46;

LAB47:    goto LAB44;

LAB46:    t49 = *((unsigned int *)t55);
    t74 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t63 = *((unsigned int *)t54);
    t77 = (t50 - t63);
    t78 = (t77 + 1);
    xsi_vlogvar_assign_value(t32, t39, t74, *((unsigned int *)t54), t78);
    goto LAB47;

LAB49:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB51;

LAB50:    *((unsigned int *)t16) = 1;
    goto LAB51;

LAB53:    xsi_set_current_line(18, ng0);

LAB56:    xsi_set_current_line(18, ng0);
    t19 = (t0 + 1608);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t29, 0, 8);
    t28 = (t29 + 4);
    t30 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (t34 >> 12);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 12);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 15U);
    t31 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 4, t29, 4, t31, 4);
    t32 = (t0 + 1608);
    t33 = (t0 + 1608);
    t40 = (t33 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng12)));
    t43 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t52, t54, t55, ((int*)(t41)), 2, t42, 32, 1, t43, 32, 1);
    t44 = (t52 + 4);
    t46 = *((unsigned int *)t44);
    t64 = (!(t46));
    t51 = (t54 + 4);
    t47 = *((unsigned int *)t51);
    t67 = (!(t47));
    t68 = (t64 && t67);
    t53 = (t55 + 4);
    t48 = *((unsigned int *)t53);
    t71 = (!(t48));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB57;

LAB58:    goto LAB55;

LAB57:    t49 = *((unsigned int *)t55);
    t74 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t63 = *((unsigned int *)t54);
    t77 = (t50 - t63);
    t78 = (t77 + 1);
    xsi_vlogvar_assign_value(t32, t39, t74, *((unsigned int *)t54), t78);
    goto LAB58;

LAB60:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t16) = 1;
    goto LAB62;

LAB64:    xsi_set_current_line(19, ng0);

LAB67:    xsi_set_current_line(19, ng0);
    t19 = (t0 + 1608);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t29, 0, 8);
    t28 = (t29 + 4);
    t30 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (t34 >> 16);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 16);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 15U);
    t31 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 4, t29, 4, t31, 4);
    t32 = (t0 + 1608);
    t33 = (t0 + 1608);
    t40 = (t33 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng14)));
    t43 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t52, t54, t55, ((int*)(t41)), 2, t42, 32, 1, t43, 32, 1);
    t44 = (t52 + 4);
    t46 = *((unsigned int *)t44);
    t64 = (!(t46));
    t51 = (t54 + 4);
    t47 = *((unsigned int *)t51);
    t67 = (!(t47));
    t68 = (t64 && t67);
    t53 = (t55 + 4);
    t48 = *((unsigned int *)t53);
    t71 = (!(t48));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB68;

LAB69:    goto LAB66;

LAB68:    t49 = *((unsigned int *)t55);
    t74 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t63 = *((unsigned int *)t54);
    t77 = (t50 - t63);
    t78 = (t77 + 1);
    xsi_vlogvar_assign_value(t32, t39, t74, *((unsigned int *)t54), t78);
    goto LAB69;

LAB71:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t16) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(20, ng0);

LAB78:    xsi_set_current_line(20, ng0);
    t19 = (t0 + 1608);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t29, 0, 8);
    t28 = (t29 + 4);
    t30 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (t34 >> 20);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 20);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 15U);
    t31 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 4, t29, 4, t31, 4);
    t32 = (t0 + 1608);
    t33 = (t0 + 1608);
    t40 = (t33 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng16)));
    t43 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t52, t54, t55, ((int*)(t41)), 2, t42, 32, 1, t43, 32, 1);
    t44 = (t52 + 4);
    t46 = *((unsigned int *)t44);
    t64 = (!(t46));
    t51 = (t54 + 4);
    t47 = *((unsigned int *)t51);
    t67 = (!(t47));
    t68 = (t64 && t67);
    t53 = (t55 + 4);
    t48 = *((unsigned int *)t53);
    t71 = (!(t48));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB79;

LAB80:    goto LAB77;

LAB79:    t49 = *((unsigned int *)t55);
    t74 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t63 = *((unsigned int *)t54);
    t77 = (t50 - t63);
    t78 = (t77 + 1);
    xsi_vlogvar_assign_value(t32, t39, t74, *((unsigned int *)t54), t78);
    goto LAB80;

LAB82:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB84;

LAB83:    *((unsigned int *)t16) = 1;
    goto LAB84;

LAB86:    xsi_set_current_line(21, ng0);

LAB89:    xsi_set_current_line(21, ng0);
    t19 = (t0 + 1608);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t29, 0, 8);
    t28 = (t29 + 4);
    t30 = (t21 + 4);
    t34 = *((unsigned int *)t21);
    t35 = (t34 >> 24);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 24);
    *((unsigned int *)t28) = t37;
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 15U);
    t45 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t45 & 15U);
    t31 = ((char*)((ng6)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 4, t29, 4, t31, 4);
    t32 = (t0 + 1608);
    t33 = (t0 + 1608);
    t40 = (t33 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng18)));
    t43 = ((char*)((ng19)));
    xsi_vlog_convert_partindices(t52, t54, t55, ((int*)(t41)), 2, t42, 32, 1, t43, 32, 1);
    t44 = (t52 + 4);
    t46 = *((unsigned int *)t44);
    t64 = (!(t46));
    t51 = (t54 + 4);
    t47 = *((unsigned int *)t51);
    t67 = (!(t47));
    t68 = (t64 && t67);
    t53 = (t55 + 4);
    t48 = *((unsigned int *)t53);
    t71 = (!(t48));
    t72 = (t68 && t71);
    if (t72 == 1)
        goto LAB90;

LAB91:    goto LAB88;

LAB90:    t49 = *((unsigned int *)t55);
    t74 = (t49 + 0);
    t50 = *((unsigned int *)t52);
    t63 = *((unsigned int *)t54);
    t77 = (t50 - t63);
    t78 = (t77 + 1);
    xsi_vlogvar_assign_value(t32, t39, t74, *((unsigned int *)t54), t78);
    goto LAB91;

LAB92:    t25 = *((unsigned int *)t29);
    t26 = *((unsigned int *)t28);
    *((unsigned int *)t29) = (t25 | t26);
    t30 = (t6 + 4);
    t31 = (t16 + 4);
    t27 = *((unsigned int *)t30);
    t34 = (~(t27));
    t35 = *((unsigned int *)t6);
    t64 = (t35 & t34);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t16);
    t67 = (t38 & t37);
    t45 = (~(t64));
    t46 = (~(t67));
    t47 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t47 & t45);
    t48 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t48 & t46);
    goto LAB94;

LAB95:    t38 = (t11 * 8);
    t45 = *((unsigned int *)t20);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t20) = (t45 | t46);
    t31 = (t4 + t38);
    t47 = (t38 + 4);
    t32 = (t4 + t47);
    t33 = (t80 + t38);
    t48 = (t38 + 4);
    t40 = (t80 + t48);
    t49 = *((unsigned int *)t32);
    t50 = (~(t49));
    t63 = *((unsigned int *)t31);
    t64 = (t63 & t50);
    t66 = *((unsigned int *)t40);
    t70 = (~(t66));
    t73 = *((unsigned int *)t33);
    t67 = (t73 & t70);
    t75 = (~(t64));
    t76 = (~(t67));
    t82 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t82 & t75);
    t83 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t83 & t76);

LAB97:    t11 = (t11 + 1);
    goto LAB98;

LAB96:    goto LAB97;

LAB99:    t13 = (t11 * 8);
    t18 = (t4 + t13);
    t19 = (t80 + t13);
    t20 = (t81 + t13);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t22 = (t14 | t15);
    *((unsigned int *)t20) = t22;
    t23 = (t11 * 8);
    t24 = (t23 + 4);
    t21 = (t4 + t24);
    t25 = (t23 + 4);
    t28 = (t80 + t25);
    t26 = (t23 + 4);
    t30 = (t81 + t26);
    t27 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t28);
    t35 = (t27 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB95;
    else
        goto LAB96;

LAB102:    t85 = (t11 * 8);
    t41 = (t81 + t85);
    *((unsigned int *)t41) = 0;
    t86 = (t85 + 4);
    t42 = (t81 + t86);
    *((unsigned int *)t42) = 0;
    t87 = (t11 < 1);
    if (t87 == 1)
        goto LAB103;

LAB105:    t92 = (t11 < 2);
    if (t92 == 1)
        goto LAB104;

LAB106:    t11 = (t11 + 1);
    goto LAB101;

LAB103:    t43 = (t4 + t85);
    t88 = (t85 + 4);
    t44 = (t4 + t88);
    t89 = *((unsigned int *)t43);
    t90 = *((unsigned int *)t44);
    t91 = (t89 | t90);
    *((unsigned int *)t41) = t91;
    *((unsigned int *)t42) = *((unsigned int *)t44);
    goto LAB106;

LAB104:    t51 = (t80 + t85);
    t93 = (t85 + 4);
    t53 = (t80 + t93);
    t94 = *((unsigned int *)t51);
    t95 = *((unsigned int *)t53);
    t96 = (t94 | t95);
    *((unsigned int *)t41) = t96;
    *((unsigned int *)t42) = *((unsigned int *)t53);
    goto LAB106;

}


extern void work_m_00000000003239581454_3911257715_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000003239581454_3911257715", "isim/alu_master_tb_isim_beh.exe.sim/work/m_00000000003239581454_3911257715.didat");
	xsi_register_executes(pe);
}
