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
static const char *ng0 = "E:/verilog/final_vendingmachine/vendingmachine.v";
static const char *ng1 = "data.txt";
static const char *ng2 = " list of product:\n product code:%d ,Number of product available:%d, price:%d\n";
static int ng3[] = {0, 0};
static const char *ng4 = " product code:%d ,Number of product available:%d ,price:%d\n";
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {5, 0};
static const char *ng11 = " money=%d , code=%d , count=%d \t posibilty:%d remain:%d";



static void Initial_16_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(17, ng0);

LAB2:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 2088);
    xsi_vlogfile_readmemb(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_21_1(char *t0)
{
    char t7[8];
    char t15[8];
    char t27[8];
    char t35[8];
    char t47[8];
    char t55[8];
    char t69[8];
    char t70[8];
    char t73[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
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
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t71;
    char *t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t14, 32, 1);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 6);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 3U);
    t24 = (t0 + 2088);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 2088);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2088);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t26, t30, t33, 2, 1, t34, 32, 1);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t27 + 4);
    t38 = *((unsigned int *)t27);
    t39 = (t38 >> 3);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 3);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 & 7U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 7U);
    t44 = (t0 + 2088);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t48 = (t0 + 2088);
    t49 = (t48 + 72U);
    t50 = *((char **)t49);
    t51 = (t0 + 2088);
    t52 = (t51 + 64U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t47, 8, t46, t50, t53, 2, 1, t54, 32, 1);
    memset(t55, 0, 8);
    t56 = (t55 + 4);
    t57 = (t47 + 4);
    t58 = *((unsigned int *)t47);
    t59 = (t58 >> 0);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 0);
    *((unsigned int *)t56) = t61;
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & 7U);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 & 7U);
    xsi_vlogfile_write(1, 0, 0, ng2, 4, t0, (char)118, t15, 2, (char)118, t35, 3, (char)118, t55, 3);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 6);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 3U);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t24 = *((char **)t17);
    t25 = (t0 + 2088);
    t26 = (t25 + 72U);
    t28 = *((char **)t26);
    t29 = (t0 + 2088);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t24, t28, t31, 2, 1, t32, 32, 1);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t34 = (t27 + 4);
    t38 = *((unsigned int *)t27);
    t39 = (t38 >> 3);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t34);
    t41 = (t40 >> 3);
    *((unsigned int *)t33) = t41;
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 & 7U);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t43 & 7U);
    t36 = (t0 + 2088);
    t37 = (t36 + 56U);
    t44 = *((char **)t37);
    t45 = (t0 + 2088);
    t46 = (t45 + 72U);
    t48 = *((char **)t46);
    t49 = (t0 + 2088);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t47, 8, t44, t48, t51, 2, 1, t52, 32, 1);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t54 = (t47 + 4);
    t58 = *((unsigned int *)t47);
    t59 = (t58 >> 0);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t54);
    t61 = (t60 >> 0);
    *((unsigned int *)t53) = t61;
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & 7U);
    t63 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t63 & 7U);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t15, 2, (char)118, t35, 3, (char)118, t55, 3);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 6);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 3U);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t24 = *((char **)t17);
    t25 = (t0 + 2088);
    t26 = (t25 + 72U);
    t28 = *((char **)t26);
    t29 = (t0 + 2088);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t24, t28, t31, 2, 1, t32, 32, 1);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t34 = (t27 + 4);
    t38 = *((unsigned int *)t27);
    t39 = (t38 >> 3);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t34);
    t41 = (t40 >> 3);
    *((unsigned int *)t33) = t41;
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 & 7U);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t43 & 7U);
    t36 = (t0 + 2088);
    t37 = (t36 + 56U);
    t44 = *((char **)t37);
    t45 = (t0 + 2088);
    t46 = (t45 + 72U);
    t48 = *((char **)t46);
    t49 = (t0 + 2088);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t47, 8, t44, t48, t51, 2, 1, t52, 32, 1);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t54 = (t47 + 4);
    t58 = *((unsigned int *)t47);
    t59 = (t58 >> 0);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t54);
    t61 = (t60 >> 0);
    *((unsigned int *)t53) = t61;
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & 7U);
    t63 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t63 & 7U);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t15, 2, (char)118, t35, 3, (char)118, t55, 3);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t12, 32, 1);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t14);
    t21 = (t20 >> 6);
    *((unsigned int *)t13) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 3U);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t24 = *((char **)t17);
    t25 = (t0 + 2088);
    t26 = (t25 + 72U);
    t28 = *((char **)t26);
    t29 = (t0 + 2088);
    t30 = (t29 + 64U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t27, 8, t24, t28, t31, 2, 1, t32, 32, 1);
    memset(t35, 0, 8);
    t33 = (t35 + 4);
    t34 = (t27 + 4);
    t38 = *((unsigned int *)t27);
    t39 = (t38 >> 3);
    *((unsigned int *)t35) = t39;
    t40 = *((unsigned int *)t34);
    t41 = (t40 >> 3);
    *((unsigned int *)t33) = t41;
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 & 7U);
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t43 & 7U);
    t36 = (t0 + 2088);
    t37 = (t36 + 56U);
    t44 = *((char **)t37);
    t45 = (t0 + 2088);
    t46 = (t45 + 72U);
    t48 = *((char **)t46);
    t49 = (t0 + 2088);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t47, 8, t44, t48, t51, 2, 1, t52, 32, 1);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t54 = (t47 + 4);
    t58 = *((unsigned int *)t47);
    t59 = (t58 >> 0);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t54);
    t61 = (t60 >> 0);
    *((unsigned int *)t53) = t61;
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & 7U);
    t63 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t63 & 7U);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t15, 2, (char)118, t35, 3, (char)118, t55, 3);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t14, 2, 2);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 6);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 3U);
    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    memset(t27, 0, 8);
    t24 = (t15 + 4);
    t26 = (t25 + 4);
    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t25);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t24);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t58 = (t40 | t43);
    t59 = *((unsigned int *)t24);
    t60 = *((unsigned int *)t26);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB7;

LAB6:    if (t61 != 0)
        goto LAB8;

LAB9:    t29 = (t27 + 4);
    t64 = *((unsigned int *)t29);
    t65 = (~(t64));
    t66 = *((unsigned int *)t27);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2088);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2088);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2248);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t5, t9, t12, 2, 1, t16, 2, 2);
    memset(t15, 0, 8);
    t17 = (t15 + 4);
    t24 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t24);
    t21 = (t20 >> 3);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 7U);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t23 & 7U);
    memset(t27, 0, 8);
    t25 = (t3 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB31;

LAB30:    t26 = (t15 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t3) > *((unsigned int *)t15))
        goto LAB33;

LAB32:    *((unsigned int *)t27) = 1;

LAB33:    memset(t35, 0, 8);
    t29 = (t27 + 4);
    t38 = *((unsigned int *)t29);
    t39 = (~(t38));
    t40 = *((unsigned int *)t27);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t29) != 0)
        goto LAB37;

LAB38:    t31 = (t35 + 4);
    t43 = *((unsigned int *)t35);
    t58 = *((unsigned int *)t31);
    t59 = (t43 || t58);
    if (t59 > 0)
        goto LAB39;

LAB40:    memcpy(t78, t35, 8);

LAB41:    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(48, ng0);

LAB60:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);

LAB56:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = (t0 + 1768);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    t9 = (t0 + 1928);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 0, ng11, 6, t0, (char)118, t3, 4, (char)118, t4, 2, (char)118, t5, 3, (char)118, t8, 1, (char)118, t11, 4);
    goto LAB2;

LAB7:    *((unsigned int *)t27) = 1;
    goto LAB9;

LAB8:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t30 = (t0 + 2248);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng5)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t32, 2, t33, 32);
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 2);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t14, 2, 2);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 6);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 3U);
    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    memset(t27, 0, 8);
    t24 = (t15 + 4);
    t26 = (t25 + 4);
    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t25);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t24);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t58 = (t40 | t43);
    t59 = *((unsigned int *)t24);
    t60 = *((unsigned int *)t26);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB15;

LAB14:    if (t61 != 0)
        goto LAB16;

LAB17:    t29 = (t27 + 4);
    t64 = *((unsigned int *)t29);
    t65 = (~(t64));
    t66 = *((unsigned int *)t27);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB15:    *((unsigned int *)t27) = 1;
    goto LAB17;

LAB16:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);

LAB21:    xsi_set_current_line(33, ng0);
    t30 = (t0 + 2248);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng5)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t32, 2, t33, 32);
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 2);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t14, 2, 2);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 6);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 6);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 3U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 3U);
    t24 = (t0 + 1048U);
    t25 = *((char **)t24);
    memset(t27, 0, 8);
    t24 = (t15 + 4);
    t26 = (t25 + 4);
    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t25);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t24);
    t42 = *((unsigned int *)t26);
    t43 = (t41 ^ t42);
    t58 = (t40 | t43);
    t59 = *((unsigned int *)t24);
    t60 = *((unsigned int *)t26);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB23;

LAB22:    if (t61 != 0)
        goto LAB24;

LAB25:    t29 = (t27 + 4);
    t64 = *((unsigned int *)t29);
    t65 = (~(t64));
    t66 = *((unsigned int *)t27);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB20;

LAB23:    *((unsigned int *)t27) = 1;
    goto LAB25;

LAB24:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(34, ng0);

LAB29:    xsi_set_current_line(35, ng0);
    t30 = (t0 + 2248);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng5)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t32, 2, t33, 32);
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 2);
    goto LAB28;

LAB31:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t35) = 1;
    goto LAB38;

LAB37:    t30 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB38;

LAB39:    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    t32 = (t0 + 1208U);
    t34 = *((char **)t32);
    t32 = (t0 + 2088);
    t36 = (t32 + 56U);
    t37 = *((char **)t36);
    t44 = (t0 + 2088);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t48 = (t0 + 2088);
    t49 = (t48 + 64U);
    t50 = *((char **)t49);
    t51 = (t0 + 2248);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    xsi_vlog_generic_get_array_select_value(t47, 8, t37, t46, t50, 2, 1, t53, 2, 2);
    memset(t55, 0, 8);
    t54 = (t55 + 4);
    t56 = (t47 + 4);
    t60 = *((unsigned int *)t47);
    t61 = (t60 >> 0);
    *((unsigned int *)t55) = t61;
    t62 = *((unsigned int *)t56);
    t63 = (t62 >> 0);
    *((unsigned int *)t54) = t63;
    t64 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t64 & 7U);
    t65 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t65 & 7U);
    memset(t69, 0, 8);
    xsi_vlog_unsigned_multiply(t69, 4, t34, 3, t55, 4);
    memset(t70, 0, 8);
    t57 = (t33 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB43;

LAB42:    t71 = (t69 + 4);
    if (*((unsigned int *)t71) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t33) > *((unsigned int *)t69))
        goto LAB44;

LAB45:    memset(t73, 0, 8);
    t74 = (t70 + 4);
    t66 = *((unsigned int *)t74);
    t67 = (~(t66));
    t68 = *((unsigned int *)t70);
    t75 = (t68 & t67);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t74) != 0)
        goto LAB49;

LAB50:    t79 = *((unsigned int *)t35);
    t80 = *((unsigned int *)t73);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t35 + 4);
    t83 = (t73 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB41;

LAB43:    t72 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t70) = 1;
    goto LAB45;

LAB47:    *((unsigned int *)t73) = 1;
    goto LAB50;

LAB49:    t77 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB50;

LAB51:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t35 + 4);
    t93 = (t73 + 4);
    t94 = *((unsigned int *)t35);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t73);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB53;

LAB54:    xsi_set_current_line(40, ng0);

LAB57:    xsi_set_current_line(42, ng0);
    t116 = ((char*)((ng9)));
    t117 = (t0 + 1768);
    xsi_vlogvar_assign_value(t117, t116, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 2248);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t17, 2, 2);
    memset(t15, 0, 8);
    t24 = (t15 + 4);
    t25 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t25);
    t21 = (t20 >> 0);
    *((unsigned int *)t24) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 7U);
    t23 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t23 & 7U);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_multiply(t27, 4, t4, 3, t15, 4);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 4, t3, 4, t27, 4);
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t35, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2088);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t7, 8, t4, t8, t11, 2, 1, t14, 2, 2);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 3);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 7U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 7U);
    t24 = (t0 + 1208U);
    t25 = *((char **)t24);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 3, t15, 3, t25, 3);
    t24 = (t0 + 2088);
    t26 = (t0 + 2088);
    t28 = (t26 + 72U);
    t29 = *((char **)t28);
    t30 = (t0 + 2088);
    t31 = (t30 + 64U);
    t32 = *((char **)t31);
    t33 = (t0 + 2248);
    t34 = (t33 + 56U);
    t36 = *((char **)t34);
    xsi_vlog_generic_convert_array_indices(t35, t47, t29, t32, 2, 1, t36, 2, 2);
    t37 = (t0 + 2088);
    t44 = (t37 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng10)));
    t48 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t55, t69, t70, ((int*)(t45)), 2, t46, 32, 1, t48, 32, 1);
    t49 = (t35 + 4);
    t38 = *((unsigned int *)t49);
    t102 = (!(t38));
    t50 = (t47 + 4);
    t39 = *((unsigned int *)t50);
    t103 = (!(t39));
    t118 = (t102 && t103);
    t51 = (t55 + 4);
    t40 = *((unsigned int *)t51);
    t119 = (!(t40));
    t120 = (t118 && t119);
    t52 = (t69 + 4);
    t41 = *((unsigned int *)t52);
    t121 = (!(t41));
    t122 = (t120 && t121);
    t53 = (t70 + 4);
    t42 = *((unsigned int *)t53);
    t123 = (!(t42));
    t124 = (t122 && t123);
    if (t124 == 1)
        goto LAB58;

LAB59:    goto LAB56;

LAB58:    t43 = *((unsigned int *)t70);
    t125 = (t43 + 0);
    t58 = *((unsigned int *)t47);
    t59 = *((unsigned int *)t69);
    t126 = (t58 + t59);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t69);
    t127 = (t60 - t61);
    t128 = (t127 + 1);
    xsi_vlogvar_assign_value(t24, t27, t125, t126, t128);
    goto LAB59;

}


extern void work_m_00000000003812893554_0009454150_init()
{
	static char *pe[] = {(void *)Initial_16_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000003812893554_0009454150", "isim/vending_machine_test_isim_beh.exe.sim/work/m_00000000003812893554_0009454150.didat");
	xsi_register_executes(pe);
}
