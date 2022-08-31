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
    xilinxcorelib_ver_m_00000000001358910285_1256727229_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_2223321513_init();
    xilinxcorelib_ver_m_00000000001603977570_3590198961_init();
    work_m_00000000002489990758_1015039846_init();
    work_m_00000000001380463760_3383896982_init();
    work_m_00000000002719326054_2980647104_init();
    work_m_00000000003046218141_2749254585_init();
    work_m_00000000000704643321_0886308060_init();
    xilinxcorelib_ver_m_00000000000277421008_3261753898_init();
    xilinxcorelib_ver_m_00000000001603977570_3309543896_init();
    work_m_00000000000403262735_1948799799_init();
    work_m_00000000002127273507_3443282805_init();
    work_m_00000000002137280959_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002137280959_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
