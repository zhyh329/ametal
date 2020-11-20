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
 * \brief ADTIM6 ��ʱ�� TIMING ���̣�ͨ����׼�ӿ�ʵ��
 *
 * - ʵ������
 *   1. LED0 �� 5Hz ��Ƶ����˸��(����������10Hz��led��ת����Ϊ10/2=5Hz)
 *
 *
 * \par Դ����
 * \snippet demo_zsl42x_std_tim6_timing.c src_zsl42x_std_tim6_timing
 *
 * \internal
 * \par Modification history
 * - 1.00 19-10-09  zp, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_zsl42x_std_tim6_timing
 * \copydoc demo_zsl42x_std_tim6_timing.c
 */

/** [src_zsl42x_std_tim6_timing] */

#include "ametal.h"
#include "am_vdebug.h"
#include "demo_std_entries.h"
#include "am_zsl42x_inst_init.h"
#include "demo_am42x_core_entries.h"

/**
 * \brief �������
 */
void demo_zsl42x_core_std_tim6_timing_entry (void)
{
    AM_DBG_INFO("demo am42x_core std tim6 timing!\r\n");

    demo_std_timer_timing_entry(am_zsl42x_tim6_timing_inst_init(), 0);
}
/** [src_zsl42x_std_tim6_timing] */

/* end of file */