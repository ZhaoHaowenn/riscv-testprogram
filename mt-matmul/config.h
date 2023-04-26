
#ifndef _CONF_H
#define _CONF_H

#define TURE   1
#define FALSE  0
#define ERROR -1

typedef unsigned char U8;        //U8 is 8-bit length
typedef unsigned short U16;      //U16 is 16-bit length
typedef unsigned int U32;        //U32 is 32-bit length
typedef unsigned long long U64;  //U64 is 64-bit length

#define MMIO_ADDR         0x60000000
#define MEM_ADDR          0x80000000
#define SIM_FINISH_ADDR   0x70707070

#define memaddr8(offset)    ((volatile U8 *)(MEM_ADDR + offset))
#define memaddr16(offset)   ((volatile U16 *)(MEM_ADDR + offset))
#define memaddr32(offset)   ((volatile U32 *)(MEM_ADDR + offset))

#define mmioaddr8(offset)   ((volatile U8 *)(MMIO_ADDR + offset))
#define mmioaddr16(offset)  ((volatile U16 *)(MMIO_ADDR + offset))
#define mmioaddr32(offset)  ((volatile U32 *)(MMIO_ADDR + offset))

#define simendaddr8(offset)   ((volatile U8 *)(SIM_FINISH_ADDR + offset))
#define simendaddr16(offset)  ((volatile U16 *)(SIM_FINISH_ADDR + offset))
#define simendaddr32(offset)  ((volatile U32 *)(SIM_FINISH_ADDR + offset))

/*Function declaration*/
//void pcie_phy_initial(void);

#endif
