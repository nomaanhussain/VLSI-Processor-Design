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
    work_m_00000000003504184607_3923228367_init();
    work_m_00000000002790876153_3440007364_init();
    work_m_00000000002936479174_2520594940_init();
    work_m_00000000001831763072_3092946469_init();
    work_m_00000000000604679715_0682962954_init();
    work_m_00000000002779771476_0364846962_init();
    work_m_00000000003433945117_2226537372_init();
    work_m_00000000002996243082_1652689816_init();
    work_m_00000000000604679715_3063441418_init();
    work_m_00000000004057483115_2987726008_init();
    work_m_00000000001919160972_3076129341_init();
    work_m_00000000004083996091_0254784918_init();
    work_m_00000000004101067089_3729007407_init();
    work_m_00000000004101067089_0762686649_init();
    work_m_00000000001386841999_2133763605_init();
    work_m_00000000003213186189_3663180403_init();
    work_m_00000000003311513007_4033376979_init();
    work_m_00000000001481991960_0145744408_init();
    work_m_00000000002123014484_2725559894_init();
    work_m_00000000004227113380_0340138146_init();
    work_m_00000000003470944582_3877310806_init();
    work_m_00000000000595460748_2381739659_init();
    work_m_00000000001025149197_3052352512_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001025149197_3052352512");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}