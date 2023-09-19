#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

typedef struct
{
    volatile u32 ISER[3];
    volatile u32 reserved_0[29];
    
    volatile u32 ICER[3];
    volatile u32 reserved_1[29];
    
    volatile u32 ISPR[3];
    volatile u32 reserved_2[29];
    
    volatile u32 ICPR[3];
    volatile u32 reserved_3[29];
    
    volatile u32 IAPR[3];
    volatile u32 reserved_4[29];

    /* volatile u32 IPR[21]; */
    volatile u8 IPR[84];
    volatile u32 reserved_5[695];
    
    volatile u32 STIR;

}NVIC_Typedef;
#define NVIC_BASE_ADDRESS           0xE000E100
#endif /* NVIC_PRIVATE_H */