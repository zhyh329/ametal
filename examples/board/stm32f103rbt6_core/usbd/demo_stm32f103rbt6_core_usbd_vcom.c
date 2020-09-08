/*******************************************************************************
*                                 AMetal
*                       ----------------------------
*                       innovating embedded platform
*
* Copyright (c) 2001-2018 Guangzhou ZHIYUAN Electronics Stock Co., Ltd.
* All rights reserved.
*
* Contact information:
* web site:    http://www.zlg.cn/
* e-mail:      ametal.support@zlg.cn
*******************************************************************************/

/**
 * \file
 * \brief USB printer_counter 例程
 *
 * - 实验现象：
 * 1. 将板子与PC机用USB电缆线连接。
 * 2. PC端用串口助手(xcom)给板子发送数据，如果板子收到数据，会回传“recv success”.
 *
 * \par 源代码
 * \snippet demo_stm32f103rbt6_core_usbd_printer.c src_stm32f103rbt6_core_usbd_printer
 *
 * \internal
 * \par Modification History
 * - 1.00 19-05-28  htf, first implementation
 * \endinternal
 */

/**
 * \addtogroup demo_if_demo_stm32f103rbt6_core_usbd_printer
 * \copydoc demo_stm32f103rbt6_core_usbd_printer.c
 */

/** [src_demo_stm32f103rbt6_core_usbd_printer] */

#include "demo_stm32f103rbt6_entries.h"
#include "am_stm32f103rbt6_inst_init.h"
#include "demo_stm32f103rbt6_core_entries.h"

void demo_stm32f103rbt6_usbd_vcom_entry (void)
{

    AM_DBG_INFO("demo stm32f103rbt6_core usbd vcom!\r\n");

    /* usb打印机实例初始化*/
    am_usbd_cdc_vcom_handle handle = am_stm32f103rbt6_usbd_vcom_inst_init();

    demo_usbd_vcom_entry(handle);
}

/** [src_demo_stm32f103rbt6_core_usbd_printer] */

/* end of file */
