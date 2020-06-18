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
 * \brief FLASH ���̣�ͨ��������ӿ�ʵ��
 *
 * - ʵ������
 *   1. �������������ڴ�ӡ"erase error!"��
 *   2. д����������ڴ�ӡ"program error!"��
 *   3. д��ɹ������ڴ�ӡ 255 ������(1024/4)�� 32bit ʮ���������ݡ�
 *
 * \note
 *    ����۲촮�ڴ�ӡ�ĵ�����Ϣ����Ҫ�� PIOA_10 �������� PC ���ڵ� TXD��
 *    PIOA_9 �������� PC ���ڵ� RXD��
 *
 * \par Դ����
 * \snippet demo_zsn700_drv_flash.c src_zsn700_drv_flash
 *
 * \internal
 * \par Modification history
 * - 1.00 19-09-20  zp, first implementation.
 * \endinternal
 */

/**
 * \addtogroup demo_if_zsn700_drv_flash
 * \copydoc demo_zsn700_drv_flash.c
 */

/** [src_zsn700_drv_flash] */
#include "ametal.h"
#include "am_board.h"
#include "am_vdebug.h"
#include "am_zsn700_flash.h"
#include "am_zsn700.h"
#include "demo_zlg_entries.h"
#include "demo_am700_core_entries.h"

#define FLASH_SECTOR  500    /**< \brief ���� */

/**
 * \brief �������
 */
void demo_zsn700_core_drv_flash_entry (void)
{
    AM_DBG_INFO("demo am700_core drv flash!\r\n");

    demo_zsn700_drv_flash_entry(ZSN700_FLASH, FLASH_SECTOR);
}

/** [src_zsn700_drv_flash] */

/* end of file */