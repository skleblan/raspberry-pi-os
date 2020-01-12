#ifndef	_P_PL011_UART_H
#define	_P_PL011_UART_H

#include "peripherals/base.h"

#define PL011_BASE	(PBASE+0x00201000)

#define PL011_DR	(PL011_BASE + \
    0x0000)
#define PL011_RSRECR	(PL011_BASE + \
    0x0004)
#define PL011_FR	(PL011_BASE + \
    0x0018)
#define PL011_ILPR	(PL011_BASE + \
    0x0020)
#define PL011_IBRD	(PL011_BASE + \
    0x0024)
#define PL011_FBRD	(PL011_BASE + \
    0x0028)
#define PL011_LCRH	(PL011_BASE + \
    0x002c)
#define PL011_CR	(PL011_BASE + \
    0x0030)
#define PL011_IFLS	(PL011_BASE + \
    0x0034)
#define PL011_IMSC	(PL011_BASE + \
    0x0038)
#define PL011_RIS	(PL011_BASE + \
    0x003c)
#define PL011_MIS	(PL011_BASE + \
    0x0040)
#define PL011_ICR	(PL011_BASE + \
    0x0044)
#define PL011_DMACR	(PL011_BASE + \
    0x0048)
#define PL011_ITCR	(PL011_BASE + \
    0x0080)
#define PL011_ITIP	(PL011_BASE + \
    0x0084)
#define PL011_ITOP	(PL011_BASE + \
    0x0088)
#define PL011_TDR	(PL011_BASE + \
    0x008c)


#endif  /*_P_MINI_UART_H */
