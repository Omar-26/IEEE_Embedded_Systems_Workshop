/**********************************************************************/
/***************    @file           : RCC_program.c    ****************/
/***************    @version        : 0.1              ****************/
/***************    @author         : Omar Ashraf      ****************/
/**********************************************************************/


/***********************< Includes Section Start **********************/

/********************************< LIB ********************************/
#include "BIT_MATH.h"
#include "STD_Types.h"
/********************************< MCAL ********************************/
#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

/************************< Includes Section End ************************/

/*******************< Function Implementations Start *******************/

Std_Returntype Mcal_Rcc_InitSysCLock(void)
{
    Std_Returntype Local_FunctionStatus = E_NOT_OK;
// Enabling is Done Using RCC_CR
// Selecting is Done Using RCC_CFGR

/**<HSE Will Be The System Clock*/
#if RCC_SYSCLK == RCC_HSE
/**<Which External Clock Will Be The System Clock*/
#if RCC_CLK_BYPASS == RCC_RC_CLK
    SET_BIT(RCC_CR, RCC_CR_HSEBYP); // Choose RC as System Clock

#elif RCC_CLK_BYPASS == RCC_CRYSTAL_CLK
    CLR_BIT(RCC_CR, RCC_CR_HSEBYP); // Choose Crystal as System Clock

#else
#error "Wrong Choice !!"

#endif /**<RCC_CLK_BYPASS == RCC_RC_CLK*/

    /**<Enable HSE*/
    SET_BIT(RCC_CR, RCC_CR_HSEON);

    /**<Wait Until Clock Be Stable*/
    while (!GET_BIT(RCC_CR, RCC_CR_HSERDY));

    /**<Select The HSE to be the system clock*/
    SET_BIT(RCC_CFGR, RCC_CFGR_SW0);

    Local_FunctionStatus = E_OK;

/**<HSI Will Be The System Clock*/
#elif RCC_SYSCLK == RCC_HSI

    /**<Enable HSI*/
    SET_BIT(RCC_CR, RCC_CR_HSION);

    /**<Wait Until Clock Be Stable*/
    while (!GET_BIT(RCC_CR, RCC_CR_HSIRDY));

    /**<Select The HSI to be the system clock*/
    CLR_BIT(RCC_CFGR, RCC_CFGR_SW0); /**<Note that this is already The default*/
    CLR_BIT(RCC_CFGR, RCC_CFGR_SW0); /**<Note that this is already The default*/

    Local_FunctionStatus = E_OK;


/**<PLL Will Be The System Clock*/
#elif RCC_SYSCLK == RCC_PLL

    /**<Enable PLL*/
    SET_BIT(RCC_CR, RCC_CR_PLLON);

    /**<Wait Until Clock Be Stable*/
    while (!GET_BIT(RCC_CR, RCC_CR_PLLRDY));

    /**<Select The PLL to be the system clock*/
    SET_BIT(RCC_CFGR, RCC_CFGR_SW1);

    Local_FunctionStatus = E_OK;

#else
#error "Wrong Choice !!"

    Local_FunctionStatus = E_OK;

#endif /**<RCC_SYSCLK*/

    return Local_FunctionStatus;
}

Std_Returntype Mcal_Rcc_EnablePeripheral(u8 Copy_BusId, u8 Copy_PeripheralId)
{
    Std_Returntype Local_FunctionStatus = E_NOT_OK;
    switch (Copy_BusId)
    {
        /**< Enable the peripheral on the AHB bus. */
    case RCC_AHB:
        SET_BIT(RCC_AHBENR, Copy_PeripheralId);
        Local_FunctionStatus = E_OK;
        break;

        /**< Enable the peripheral on the APB1 bus. */
    case RCC_APB1:
        SET_BIT(RCC_APB1ENR, Copy_PeripheralId);
        Local_FunctionStatus = E_OK;
        break;

        /**< Enable the peripheral on the APB2 bus. */
    case RCC_APB2:
        SET_BIT(RCC_APB2ENR, Copy_PeripheralId);
        Local_FunctionStatus = E_OK;
        break;

    default:
        Local_FunctionStatus = E_NOT_OK;
        break;
    }
    return Local_FunctionStatus;
}

Std_Returntype Mcal_Rcc_DisablePeripheral(u8 Copy_BusId, u8 Copy_PeripheralId)
{
    Std_Returntype Local_FunctionStatus = E_NOT_OK;
    switch (Copy_BusId)
    {
        /**< Disable the peripheral on the AHB bus. */
    case RCC_AHB:
        CLR_BIT(RCC_AHBENR, Copy_PeripheralId);
        Local_FunctionStatus = E_OK;
        break;

        /**< Disable the peripheral on the APB1 bus. */
    case RCC_APB1:
        CLR_BIT(RCC_APB1ENR, Copy_PeripheralId);
        Local_FunctionStatus = E_OK;
        break;

        /**< Disable the peripheral on the APB2 bus. */
    case RCC_APB2:
        CLR_BIT(RCC_APB2ENR, Copy_PeripheralId);
        Local_FunctionStatus = E_OK;
        break;

    default:
        Local_FunctionStatus = E_NOT_OK;
        break;
    }
    return Local_FunctionStatus;
}

/********************< Function Implementations End ********************/