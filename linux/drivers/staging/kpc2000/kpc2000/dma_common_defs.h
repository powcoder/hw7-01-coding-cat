https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/* SPDX-License-Identifier: GPL-2.0+ */
#ifndef KPC_DMA_COMMON_DEFS_H_
#define KPC_DMA_COMMON_DEFS_H_

#define KPC_DMA_COMMON_OFFSET       0x4000
#define KPC_DMA_S2C_BASE_OFFSET     0x0000
#define KPC_DMA_C2S_BASE_OFFSET     0x2000
#define KPC_DMA_ENGINE_SIZE         0x0100
#define  ENGINE_CAP_PRESENT_MASK            0x1


#define KPC_DMA_CARD_IRQ_ENABLE                 (1 << 0)
#define KPC_DMA_CARD_IRQ_ACTIVE                 (1 << 1)
#define KPC_DMA_CARD_IRQ_PENDING                (1 << 2)
#define KPC_DMA_CARD_IRQ_MSI                    (1 << 3)
#define KPC_DMA_CARD_USER_INTERRUPT_MODE        (1 << 4)
#define KPC_DMA_CARD_USER_INTERRUPT_ACTIVE      (1 << 5)
#define KPC_DMA_CARD_IRQ_MSIX_MODE              (1 << 6)
#define KPC_DMA_CARD_MAX_PAYLOAD_SIZE_MASK      0x0700
#define KPC_DMA_CARD_MAX_READ_REQUEST_SIZE_MASK 0x7000
#define KPC_DMA_CARD_S2C_INTERRUPT_STATUS_MASK  0x00FF0000
#define KPC_DMA_CARD_C2S_INTERRUPT_STATUS_MASK  0xFF000000

#endif /* KPC_DMA_COMMON_DEFS_H_ */
