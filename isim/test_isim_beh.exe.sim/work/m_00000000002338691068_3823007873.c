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
static const char *ng0 = "D:/zuchengyuanli/chengfaqi/chengfaqi.v";
static int ng1[] = {9, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {10, 0};
static int ng6[] = {11, 0};



static void Always_99_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t62[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
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
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t0 + 2248);
    t9 = (t0 + 2248);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    t13 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t15 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t2);
    t22 = (t15 ^ t18);
    t25 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t5);
    t28 = (t25 ^ t27);
    t31 = (t22 | t28);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t5);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB11;

LAB8:    if (t34 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;

LAB11:    t10 = (t6 + 4);
    t37 = *((unsigned int *)t10);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB12;

LAB13:
LAB14:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t15 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t2);
    t22 = (t15 ^ t18);
    t25 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t5);
    t28 = (t25 ^ t27);
    t31 = (t22 | t28);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t5);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB19;

LAB16:    if (t34 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB19:    t10 = (t6 + 4);
    t37 = *((unsigned int *)t10);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, t26, *((unsigned int *)t7), t30, 0LL);
    goto LAB7;

LAB10:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(103, ng0);

LAB15:    xsi_set_current_line(104, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 12, 0LL);
    goto LAB14;

LAB18:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(107, ng0);

LAB23:    xsi_set_current_line(108, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2248);
    t13 = (t0 + 2248);
    t14 = (t13 + 72U);
    t17 = *((char **)t14);
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t7, t17, 2, t21, 32, 1);
    t42 = (t7 + 4);
    t43 = *((unsigned int *)t42);
    t16 = (!(t43));
    if (t16 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t18 = (t15 >> 5);
    t22 = (t18 & 1);
    *((unsigned int *)t6) = t22;
    t25 = *((unsigned int *)t4);
    t27 = (t25 >> 5);
    t28 = (t27 & 1);
    *((unsigned int *)t2) = t28;
    t5 = (t0 + 1208U);
    t9 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t10 = (t9 + 4);
    t31 = *((unsigned int *)t9);
    t32 = (t31 >> 5);
    t33 = (t32 & 1);
    *((unsigned int *)t7) = t33;
    t34 = *((unsigned int *)t10);
    t35 = (t34 >> 5);
    t36 = (t35 & 1);
    *((unsigned int *)t5) = t36;
    t37 = *((unsigned int *)t6);
    t38 = *((unsigned int *)t7);
    t39 = (t37 & t38);
    *((unsigned int *)t8) = t39;
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t40 = *((unsigned int *)t11);
    t41 = *((unsigned int *)t12);
    t43 = (t40 | t41);
    *((unsigned int *)t13) = t43;
    t44 = *((unsigned int *)t13);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB26;

LAB27:
LAB28:    t21 = (t0 + 2248);
    t42 = (t0 + 2248);
    t63 = (t42 + 72U);
    t64 = *((char **)t63);
    t65 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t62, t64, 2, t65, 32, 1);
    t66 = (t62 + 4);
    t67 = *((unsigned int *)t66);
    t20 = (!(t67));
    if (t20 == 1)
        goto LAB29;

LAB30:    goto LAB22;

LAB24:    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB25;

LAB26:    t46 = *((unsigned int *)t8);
    t47 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t46 | t47);
    t14 = (t6 + 4);
    t17 = (t7 + 4);
    t48 = *((unsigned int *)t6);
    t49 = (~(t48));
    t50 = *((unsigned int *)t14);
    t51 = (~(t50));
    t52 = *((unsigned int *)t7);
    t53 = (~(t52));
    t54 = *((unsigned int *)t17);
    t55 = (~(t54));
    t16 = (t49 & t51);
    t19 = (t53 & t55);
    t56 = (~(t16));
    t57 = (~(t19));
    t58 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t58 & t56);
    t59 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t59 & t57);
    t60 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t60 & t56);
    t61 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t61 & t57);
    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t21, t8, 0, *((unsigned int *)t62), 1, 0LL);
    goto LAB30;

}


extern void work_m_00000000002338691068_3823007873_init()
{
	static char *pe[] = {(void *)Always_99_0};
	xsi_register_didat("work_m_00000000002338691068_3823007873", "isim/test_isim_beh.exe.sim/work/m_00000000002338691068_3823007873.didat");
	xsi_register_executes(pe);
}
