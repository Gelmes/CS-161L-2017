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
static const char *ng0 = "C:/Users/marco/Dropbox/School/SPRING 2017/161L/New Stuff/Lab8/alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {8U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {9U, 0U};
static unsigned int ng5[] = {12U, 0U};
static unsigned int ng6[] = {13U, 0U};



static void Always_29_0(char *t0)
{
    char t8[8];
    char t9[8];
    char t11[8];
    char t32[8];
    char t33[8];
    char t60[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t10 = (t5 + 4);
    t12 = (t7 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t12);
    t22 = (t18 ^ t19);
    t23 = (t17 | t22);
    t24 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t12);
    t27 = (t24 | t26);
    t28 = (~(t27));
    t29 = (t23 & t28);
    if (t29 != 0)
        goto LAB98;

LAB95:    if (t27 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t11) = 1;

LAB98:    memset(t9, 0, 8);
    t14 = (t11 + 4);
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t11);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t14) != 0)
        goto LAB101;

LAB102:    t21 = (t9 + 4);
    t39 = *((unsigned int *)t9);
    t40 = *((unsigned int *)t21);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB103;

LAB104:    t42 = *((unsigned int *)t9);
    t43 = (~(t42));
    t44 = *((unsigned int *)t21);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t21) > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t9) > 0)
        goto LAB109;

LAB110:    memcpy(t8, t30, 8);

LAB111:    t31 = (t0 + 2248);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB16:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1048U);
    t10 = *((char **)t7);
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB18;

LAB17:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t5) < *((unsigned int *)t10))
        goto LAB19;

LAB20:    memset(t9, 0, 8);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) != 0)
        goto LAB24;

LAB25:    t21 = (t9 + 4);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB26;

LAB27:    t26 = *((unsigned int *)t9);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t21) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t9) > 0)
        goto LAB32;

LAB33:    memcpy(t8, t30, 8);

LAB34:    t31 = (t0 + 1928);
    xsi_vlogvar_assign_value(t31, t8, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(42, ng0);

LAB35:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t5, 32, t7, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t8, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB37;

LAB36:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB38;

LAB39:    memset(t9, 0, 8);
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB44:    t14 = (t9 + 4);
    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB45;

LAB46:    t26 = *((unsigned int *)t9);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t14) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t9) > 0)
        goto LAB51;

LAB52:    memcpy(t8, t21, 8);

LAB53:    t25 = (t0 + 1928);
    xsi_vlogvar_assign_value(t25, t8, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(46, ng0);

LAB54:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t10 = (t0 + 2728);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t7, 32, t13, 32);
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t5);
    t19 = (t18 >> 31);
    t22 = (t19 & 1);
    *((unsigned int *)t2) = t22;
    t7 = (t0 + 1048U);
    t10 = *((char **)t7);
    memset(t32, 0, 8);
    t7 = (t32 + 4);
    t12 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t24 = (t23 >> 31);
    t26 = (t24 & 1);
    *((unsigned int *)t32) = t26;
    t27 = *((unsigned int *)t12);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t7) = t29;
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t32);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t13 = (t11 + 4);
    t14 = (t32 + 4);
    t20 = (t33 + 4);
    t37 = *((unsigned int *)t13);
    t38 = *((unsigned int *)t14);
    t39 = (t37 | t38);
    *((unsigned int *)t20) = t39;
    t40 = *((unsigned int *)t20);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB55;

LAB56:
LAB57:    t30 = (t0 + 2408);
    t31 = (t30 + 56U);
    t59 = *((char **)t31);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 31);
    t65 = (t64 & 1);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 31);
    t68 = (t67 & 1);
    *((unsigned int *)t61) = t68;
    memset(t69, 0, 8);
    t70 = (t33 + 4);
    t71 = (t60 + 4);
    t72 = *((unsigned int *)t33);
    t73 = *((unsigned int *)t60);
    t74 = (t72 ^ t73);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = (t74 | t77);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t71);
    t81 = (t79 | t80);
    t82 = (~(t81));
    t83 = (t78 & t82);
    if (t83 != 0)
        goto LAB59;

LAB58:    if (t81 != 0)
        goto LAB60;

LAB61:    memset(t9, 0, 8);
    t85 = (t69 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t69);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t85) != 0)
        goto LAB64;

LAB65:    t92 = (t9 + 4);
    t93 = *((unsigned int *)t9);
    t94 = *((unsigned int *)t92);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB66;

LAB67:    t97 = *((unsigned int *)t9);
    t98 = (~(t97));
    t99 = *((unsigned int *)t92);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t92) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t9) > 0)
        goto LAB72;

LAB73:    memcpy(t8, t101, 8);

LAB74:    t102 = (t0 + 2088);
    xsi_vlogvar_assign_value(t102, t8, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(50, ng0);

LAB75:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t10 = (t0 + 2728);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t7, 32, t13, 32);
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t5 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 31);
    t17 = (t16 & 1);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t5);
    t19 = (t18 >> 31);
    t22 = (t19 & 1);
    *((unsigned int *)t2) = t22;
    t7 = (t0 + 1048U);
    t10 = *((char **)t7);
    memset(t32, 0, 8);
    t7 = (t32 + 4);
    t12 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t24 = (t23 >> 31);
    t26 = (t24 & 1);
    *((unsigned int *)t32) = t26;
    t27 = *((unsigned int *)t12);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t7) = t29;
    t34 = *((unsigned int *)t11);
    t35 = *((unsigned int *)t32);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t13 = (t11 + 4);
    t14 = (t32 + 4);
    t20 = (t33 + 4);
    t37 = *((unsigned int *)t13);
    t38 = *((unsigned int *)t14);
    t39 = (t37 | t38);
    *((unsigned int *)t20) = t39;
    t40 = *((unsigned int *)t20);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB76;

LAB77:
LAB78:    t30 = (t0 + 2408);
    t31 = (t30 + 56U);
    t59 = *((char **)t31);
    memset(t60, 0, 8);
    t61 = (t60 + 4);
    t62 = (t59 + 4);
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 31);
    t65 = (t64 & 1);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t62);
    t67 = (t66 >> 31);
    t68 = (t67 & 1);
    *((unsigned int *)t61) = t68;
    t72 = *((unsigned int *)t33);
    t73 = *((unsigned int *)t60);
    t74 = (t72 ^ t73);
    *((unsigned int *)t69) = t74;
    t70 = (t33 + 4);
    t71 = (t60 + 4);
    t84 = (t69 + 4);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 | t76);
    *((unsigned int *)t84) = t77;
    t78 = *((unsigned int *)t84);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB79;

LAB80:
LAB81:    memset(t9, 0, 8);
    t85 = (t69 + 4);
    t82 = *((unsigned int *)t85);
    t83 = (~(t82));
    t86 = *((unsigned int *)t69);
    t87 = (t86 & t83);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t85) != 0)
        goto LAB84;

LAB85:    t92 = (t9 + 4);
    t89 = *((unsigned int *)t9);
    t90 = *((unsigned int *)t92);
    t93 = (t89 || t90);
    if (t93 > 0)
        goto LAB86;

LAB87:    t94 = *((unsigned int *)t9);
    t95 = (~(t94));
    t97 = *((unsigned int *)t92);
    t98 = (t95 || t97);
    if (t98 > 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t92) > 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t9) > 0)
        goto LAB92;

LAB93:    memcpy(t8, t101, 8);

LAB94:    t102 = (t0 + 2088);
    xsi_vlogvar_assign_value(t102, t8, 0, 0, 1);
    goto LAB15;

LAB18:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB24:    t20 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB25;

LAB26:    t25 = ((char*)((ng3)));
    goto LAB27;

LAB28:    t30 = ((char*)((ng1)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t8, 32, t25, 32, t30, 32);
    goto LAB34;

LAB32:    memcpy(t8, t25, 8);
    goto LAB34;

LAB37:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB41:    *((unsigned int *)t9) = 1;
    goto LAB44;

LAB43:    t13 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB44;

LAB45:    t20 = ((char*)((ng3)));
    goto LAB46;

LAB47:    t21 = ((char*)((ng1)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t8, 32, t20, 32, t21, 32);
    goto LAB53;

LAB51:    memcpy(t8, t20, 8);
    goto LAB53;

LAB55:    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t33) = (t42 | t43);
    t21 = (t11 + 4);
    t25 = (t32 + 4);
    t44 = *((unsigned int *)t11);
    t45 = (~(t44));
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = *((unsigned int *)t25);
    t51 = (~(t50));
    t6 = (t45 & t47);
    t52 = (t49 & t51);
    t53 = (~(t6));
    t54 = (~(t52));
    t55 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t55 & t53);
    t56 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t56 & t54);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t57 & t53);
    t58 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t58 & t54);
    goto LAB57;

LAB59:    *((unsigned int *)t69) = 1;
    goto LAB61;

LAB60:    t84 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t9) = 1;
    goto LAB65;

LAB64:    t91 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB65;

LAB66:    t96 = ((char*)((ng3)));
    goto LAB67;

LAB68:    t101 = ((char*)((ng1)));
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t8, 32, t96, 32, t101, 32);
    goto LAB74;

LAB72:    memcpy(t8, t96, 8);
    goto LAB74;

LAB76:    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t33) = (t42 | t43);
    t21 = (t11 + 4);
    t25 = (t32 + 4);
    t44 = *((unsigned int *)t11);
    t45 = (~(t44));
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = *((unsigned int *)t25);
    t51 = (~(t50));
    t6 = (t45 & t47);
    t52 = (t49 & t51);
    t53 = (~(t6));
    t54 = (~(t52));
    t55 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t55 & t53);
    t56 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t56 & t54);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t57 & t53);
    t58 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t58 & t54);
    goto LAB78;

LAB79:    t80 = *((unsigned int *)t69);
    t81 = *((unsigned int *)t84);
    *((unsigned int *)t69) = (t80 | t81);
    goto LAB81;

LAB82:    *((unsigned int *)t9) = 1;
    goto LAB85;

LAB84:    t91 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB85;

LAB86:    t96 = ((char*)((ng3)));
    goto LAB87;

LAB88:    t101 = ((char*)((ng1)));
    goto LAB89;

LAB90:    xsi_vlog_unsigned_bit_combine(t8, 32, t96, 32, t101, 32);
    goto LAB94;

LAB92:    memcpy(t8, t96, 8);
    goto LAB94;

LAB97:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t9) = 1;
    goto LAB102;

LAB101:    t20 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB102;

LAB103:    t25 = ((char*)((ng3)));
    goto LAB104;

LAB105:    t30 = ((char*)((ng1)));
    goto LAB106;

LAB107:    xsi_vlog_unsigned_bit_combine(t8, 32, t25, 32, t30, 32);
    goto LAB111;

LAB109:    memcpy(t8, t25, 8);
    goto LAB111;

}


extern void work_m_00000000001885257014_2725559894_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000001885257014_2725559894", "isim/alu_master_tb_isim_beh.exe.sim/work/m_00000000001885257014_2725559894.didat");
	xsi_register_executes(pe);
}
