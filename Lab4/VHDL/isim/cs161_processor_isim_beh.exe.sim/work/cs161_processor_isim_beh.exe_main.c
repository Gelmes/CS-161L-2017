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
    work_m_00000000001856888197_2162356400_init();
    work_m_00000000003309313775_1351276808_init();
    work_m_00000000000271329619_3345110369_init();
    work_m_00000000002899758031_4038558454_init();
    work_m_00000000000271329619_1710705532_init();
    work_m_00000000002975037628_1059438215_init();
    work_m_00000000003000611562_2725559894_init();
    work_m_00000000001639343122_3725379120_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001639343122_3725379120");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
