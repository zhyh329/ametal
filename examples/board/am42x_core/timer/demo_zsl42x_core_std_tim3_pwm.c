/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
*******************************************************************************/

/**
 * \file
 * \brief TIM1 ��ʱ�� PWM ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. PIOA_3(TIM3_CH1)��� 2KHz �� PWM��ռ�ձ�Ϊ 50%��
 *
 * \par Դ����
 * \snippet demo_zsl42x_std_tim3_pwm.c src_zsl42x_std_tim3_pwm
 *
 * \internal
 * \par Modification history
 * - 1.00 19-09-23  zp, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_zsl42x_std_tim3_pwm
 * \copydoc demo_zsl42x_std_tim3_pwm.c
 */

/** [src_zsl42x_std_tim3_pwm] */

#include "ametal.h"
#include "am_vdebug.h"
#include "am_zsl42x_tim_pwm.h"
#include "am_zsl42x_inst_init.h"
#include "demo_std_entries.h"
#include "demo_am42x_core_entries.h"

/**
 * \brief �������
 */
void demo_zsl42x_core_std_tim3_pwm_entry (void)
{

    AM_DBG_INFO("demo am42x_core std tim3 pwm!\r\n");

    demo_std_timer_pwm_entry(am_zsl42x_tim3_pwm_inst_init(), AM_ZSL42x_TIM_PWM_CH1A);
}
/** [src_zsl42x_std_tim3_pwm] */

/* end of file */