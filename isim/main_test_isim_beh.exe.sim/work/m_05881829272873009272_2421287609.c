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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/osboxes/Documents/digital-analog-converter/dac_adapter.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {4, 0};
static int ng5[] = {32, 0};
static int ng6[] = {3, 0};
static int ng7[] = {5, 0};
static int ng8[] = {24, 0};
static int ng9[] = {16, 0};
static int ng10[] = {6, 0};



static void Always_29_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t40[8];
    char t41[8];
    char t43[8];
    char t74[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t32;
    char *t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    unsigned int t84;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 7296);
    *((int *)t2) = 1;
    t3 = (t0 + 5272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(34, ng0);

LAB14:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 32);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t30 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t30 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 32);
    if (t30 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(80, ng0);

LAB65:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB30:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3208);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB12;

LAB16:    xsi_set_current_line(36, ng0);

LAB31:    xsi_set_current_line(37, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3208);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB30;

LAB18:    xsi_set_current_line(46, ng0);

LAB32:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 4168);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1528U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 32, t21, 12, t8, 32);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t6);
    t11 = (t9 | t10);
    *((unsigned int *)t31) = t11;
    t22 = (t7 + 4);
    t28 = (t6 + 4);
    t29 = (t31 + 4);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 | t13);
    *((unsigned int *)t29) = t14;
    t15 = *((unsigned int *)t29);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB33;

LAB34:
LAB35:    t39 = (t0 + 3848);
    xsi_vlogvar_assign_value(t39, t31, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB30;

LAB20:    xsi_set_current_line(51, ng0);

LAB36:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 3848);
    t8 = (t7 + 72U);
    t21 = *((char **)t8);
    t22 = (t0 + 4328);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t32 = ((char*)((ng1)));
    memset(t31, 0, 8);
    xsi_vlog_signed_minus(t31, 32, t29, 32, t32, 32);
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t21, 2, t31, 32, 1);
    t33 = (t0 + 3048);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 4328);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB30;

LAB22:    xsi_set_current_line(58, ng0);

LAB37:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 4328);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t7, 32, t8, 32);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(61, ng0);

LAB42:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB40:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t5, 32, t7, 32);
    memset(t31, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t8) != 0)
        goto LAB45;

LAB46:    t22 = (t31 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t22);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB47;

LAB48:    memcpy(t43, t31, 8);

LAB49:    t66 = (t43 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t43);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB24:    xsi_set_current_line(71, ng0);

LAB63:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB30;

LAB26:    xsi_set_current_line(75, ng0);

LAB64:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    goto LAB30;

LAB33:    t17 = *((unsigned int *)t31);
    t18 = *((unsigned int *)t29);
    *((unsigned int *)t31) = (t17 | t18);
    t32 = (t7 + 4);
    t33 = (t6 + 4);
    t19 = *((unsigned int *)t32);
    t20 = (~(t19));
    t23 = *((unsigned int *)t7);
    t34 = (t23 & t20);
    t24 = *((unsigned int *)t33);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t35 = (t26 & t25);
    t27 = (~(t34));
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & t27);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & t36);
    goto LAB35;

LAB38:    xsi_set_current_line(59, ng0);

LAB41:    xsi_set_current_line(60, ng0);
    t22 = ((char*)((ng6)));
    t28 = (t0 + 4008);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 5);
    goto LAB40;

LAB43:    *((unsigned int *)t31) = 1;
    goto LAB46;

LAB45:    t21 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB46;

LAB47:    t28 = (t0 + 4328);
    t29 = (t28 + 56U);
    t32 = *((char **)t29);
    t33 = ((char*)((ng9)));
    memset(t40, 0, 8);
    xsi_vlog_signed_greatereq(t40, 32, t32, 32, t33, 32);
    memset(t41, 0, 8);
    t39 = (t40 + 4);
    t17 = *((unsigned int *)t39);
    t18 = (~(t17));
    t19 = *((unsigned int *)t40);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t39) != 0)
        goto LAB52;

LAB53:    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t41);
    t26 = (t24 & t25);
    *((unsigned int *)t43) = t26;
    t44 = (t31 + 4);
    t45 = (t41 + 4);
    t46 = (t43 + 4);
    t27 = *((unsigned int *)t44);
    t36 = *((unsigned int *)t45);
    t37 = (t27 | t36);
    *((unsigned int *)t46) = t37;
    t38 = *((unsigned int *)t46);
    t47 = (t38 != 0);
    if (t47 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t41) = 1;
    goto LAB53;

LAB52:    t42 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB53;

LAB54:    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t46);
    *((unsigned int *)t43) = (t48 | t49);
    t50 = (t31 + 4);
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t31);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t41);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t30 = (t53 & t55);
    t34 = (t57 & t59);
    t60 = (~(t30));
    t61 = (~(t34));
    t62 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t62 & t60);
    t63 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t60);
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t61);
    goto LAB56;

LAB57:    xsi_set_current_line(65, ng0);

LAB60:    xsi_set_current_line(66, ng0);
    t72 = (t0 + 1368U);
    t73 = *((char **)t72);
    t72 = (t0 + 3688);
    t75 = (t0 + 3688);
    t76 = (t75 + 72U);
    t77 = *((char **)t76);
    t78 = (t0 + 4328);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng9)));
    memset(t82, 0, 8);
    xsi_vlog_signed_minus(t82, 32, t80, 32, t81, 32);
    xsi_vlog_generic_convert_bit_index(t74, t77, 2, t82, 32, 1);
    t83 = (t74 + 4);
    t84 = *((unsigned int *)t83);
    t35 = (!(t84));
    if (t35 == 1)
        goto LAB61;

LAB62:    goto LAB59;

LAB61:    xsi_vlogvar_assign_value(t72, t73, 0, *((unsigned int *)t74), 1);
    goto LAB62;

}

static void Cont_91_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7312);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_92_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7328);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_94_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7344);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_95_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 7360);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_97_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 7376);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_98_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 7392);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_99_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 7408);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_05881829272873009272_2421287609_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_91_1,(void *)Cont_92_2,(void *)Cont_94_3,(void *)Cont_95_4,(void *)Cont_97_5,(void *)Cont_98_6,(void *)Cont_99_7};
	xsi_register_didat("work_m_05881829272873009272_2421287609", "isim/main_test_isim_beh.exe.sim/work/m_05881829272873009272_2421287609.didat");
	xsi_register_executes(pe);
}
