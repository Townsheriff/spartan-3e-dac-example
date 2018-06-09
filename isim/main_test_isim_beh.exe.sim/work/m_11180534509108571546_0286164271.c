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
static const char *ng0 = "/home/osboxes/Documents/digital-analog-converter/main.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {4095U, 0U};
static int ng3[] = {0, 0};



static void Always_42_0(char *t0)
{
    char t8[8];
    char t36[8];
    char t41[8];
    char t42[8];
    char t46[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 4152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);

LAB14:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 12, t7, 32);
    t9 = (t0 + 3208);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 12);

LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;

LAB18:    memset(t36, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t10) != 0)
        goto LAB21;

LAB22:    t24 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = *((unsigned int *)t24);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB23;

LAB24:    memcpy(t54, t36, 8);

LAB25:    t86 = (t54 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t54);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB45;

LAB42:    if (t20 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t8) = 1;

LAB45:    memset(t36, 0, 8);
    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t10) != 0)
        goto LAB48;

LAB49:    t24 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = *((unsigned int *)t24);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB50;

LAB51:    memcpy(t46, t36, 8);

LAB52:    t69 = (t46 + 4);
    t87 = *((unsigned int *)t69);
    t88 = (~(t87));
    t89 = *((unsigned int *)t46);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB65;

LAB66:
LAB67:
LAB40:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t30 = (t0 + 3208);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t32, 12, t35, 32);
    t37 = (t0 + 3208);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 12);
    goto LAB12;

LAB17:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t36) = 1;
    goto LAB22;

LAB21:    t23 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB22;

LAB23:    t30 = (t0 + 3208);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 2888);
    t35 = (t34 + 56U);
    t37 = *((char **)t35);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_minus(t41, 32, t33, 32, t37, 32);
    memset(t42, 0, 8);
    t43 = (t32 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB27;

LAB26:    t44 = (t41 + 4);
    if (*((unsigned int *)t44) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t32) > *((unsigned int *)t41))
        goto LAB28;

LAB29:    memset(t46, 0, 8);
    t47 = (t42 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t42);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t47) != 0)
        goto LAB33;

LAB34:    t55 = *((unsigned int *)t36);
    t56 = *((unsigned int *)t46);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t36 + 4);
    t59 = (t46 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB25;

LAB27:    t45 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t42) = 1;
    goto LAB29;

LAB31:    *((unsigned int *)t46) = 1;
    goto LAB34;

LAB33:    t53 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB34;

LAB35:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t36 + 4);
    t69 = (t46 + 4);
    t70 = *((unsigned int *)t36);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t46);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB37;

LAB38:    xsi_set_current_line(49, ng0);

LAB41:    xsi_set_current_line(50, ng0);
    t92 = ((char*)((ng3)));
    t93 = (t0 + 3048);
    xsi_vlogvar_assign_value(t93, t92, 0, 0, 1);
    goto LAB40;

LAB44:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t36) = 1;
    goto LAB49;

LAB48:    t23 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB49;

LAB50:    t30 = (t0 + 3208);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t41, 0, 8);
    t37 = (t32 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB54;

LAB53:    t43 = (t35 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB54;

LAB57:    if (*((unsigned int *)t32) < *((unsigned int *)t35))
        goto LAB55;

LAB56:    memset(t42, 0, 8);
    t45 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (~(t48));
    t50 = *((unsigned int *)t41);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t45) != 0)
        goto LAB60;

LAB61:    t55 = *((unsigned int *)t36);
    t56 = *((unsigned int *)t42);
    t57 = (t55 & t56);
    *((unsigned int *)t46) = t57;
    t53 = (t36 + 4);
    t58 = (t42 + 4);
    t59 = (t46 + 4);
    t61 = *((unsigned int *)t53);
    t62 = *((unsigned int *)t58);
    t63 = (t61 | t62);
    *((unsigned int *)t59) = t63;
    t64 = *((unsigned int *)t59);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB52;

LAB54:    t44 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB56;

LAB55:    *((unsigned int *)t41) = 1;
    goto LAB56;

LAB58:    *((unsigned int *)t42) = 1;
    goto LAB61;

LAB60:    t47 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB61;

LAB62:    t66 = *((unsigned int *)t46);
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t46) = (t66 | t67);
    t60 = (t36 + 4);
    t68 = (t42 + 4);
    t70 = *((unsigned int *)t36);
    t71 = (~(t70));
    t72 = *((unsigned int *)t60);
    t73 = (~(t72));
    t74 = *((unsigned int *)t42);
    t75 = (~(t74));
    t76 = *((unsigned int *)t68);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t82 & t80);
    t83 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t83 & t81);
    t84 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t84 & t80);
    t85 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t85 & t81);
    goto LAB64;

LAB65:    xsi_set_current_line(51, ng0);

LAB68:    xsi_set_current_line(52, ng0);
    t86 = ((char*)((ng1)));
    t92 = (t0 + 3048);
    xsi_vlogvar_assign_value(t92, t86, 0, 0, 1);
    goto LAB67;

}

static void Cont_56_1(char *t0)
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

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 4095U;
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
    xsi_driver_vfirst_trans(t5, 0, 11);
    t18 = (t0 + 4704);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_11180534509108571546_0286164271_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Cont_56_1};
	xsi_register_didat("work_m_11180534509108571546_0286164271", "isim/main_test_isim_beh.exe.sim/work/m_11180534509108571546_0286164271.didat");
	xsi_register_executes(pe);
}
