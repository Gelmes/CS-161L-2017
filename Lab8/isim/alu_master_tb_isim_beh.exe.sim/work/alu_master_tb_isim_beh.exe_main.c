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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001980008863_2124162868_init();
    work_m_00000000001885257014_2725559894_init();
    work_m_00000000003239581454_3911257715_init();
    work_m_00000000001024799819_1052150248_init();
    work_m_00000000001070456995_2647549902_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001070456995_2647549902");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}