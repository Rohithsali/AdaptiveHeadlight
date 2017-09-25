/*******************************************************************************
* File Name: Ultrasonic1_Input_P_12_5.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Ultrasonic1_Input_P_12_5_H) /* Pins Ultrasonic1_Input_P_12_5_H */
#define CY_PINS_Ultrasonic1_Input_P_12_5_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Ultrasonic1_Input_P_12_5_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Ultrasonic1_Input_P_12_5__PORT == 15 && ((Ultrasonic1_Input_P_12_5__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Ultrasonic1_Input_P_12_5_Write(uint8 value);
void    Ultrasonic1_Input_P_12_5_SetDriveMode(uint8 mode);
uint8   Ultrasonic1_Input_P_12_5_ReadDataReg(void);
uint8   Ultrasonic1_Input_P_12_5_Read(void);
void    Ultrasonic1_Input_P_12_5_SetInterruptMode(uint16 position, uint16 mode);
uint8   Ultrasonic1_Input_P_12_5_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Ultrasonic1_Input_P_12_5_SetDriveMode() function.
     *  @{
     */
        #define Ultrasonic1_Input_P_12_5_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Ultrasonic1_Input_P_12_5_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Ultrasonic1_Input_P_12_5_DM_RES_UP          PIN_DM_RES_UP
        #define Ultrasonic1_Input_P_12_5_DM_RES_DWN         PIN_DM_RES_DWN
        #define Ultrasonic1_Input_P_12_5_DM_OD_LO           PIN_DM_OD_LO
        #define Ultrasonic1_Input_P_12_5_DM_OD_HI           PIN_DM_OD_HI
        #define Ultrasonic1_Input_P_12_5_DM_STRONG          PIN_DM_STRONG
        #define Ultrasonic1_Input_P_12_5_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Ultrasonic1_Input_P_12_5_MASK               Ultrasonic1_Input_P_12_5__MASK
#define Ultrasonic1_Input_P_12_5_SHIFT              Ultrasonic1_Input_P_12_5__SHIFT
#define Ultrasonic1_Input_P_12_5_WIDTH              1u

/* Interrupt constants */
#if defined(Ultrasonic1_Input_P_12_5__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Ultrasonic1_Input_P_12_5_SetInterruptMode() function.
     *  @{
     */
        #define Ultrasonic1_Input_P_12_5_INTR_NONE      (uint16)(0x0000u)
        #define Ultrasonic1_Input_P_12_5_INTR_RISING    (uint16)(0x0001u)
        #define Ultrasonic1_Input_P_12_5_INTR_FALLING   (uint16)(0x0002u)
        #define Ultrasonic1_Input_P_12_5_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Ultrasonic1_Input_P_12_5_INTR_MASK      (0x01u) 
#endif /* (Ultrasonic1_Input_P_12_5__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Ultrasonic1_Input_P_12_5_PS                     (* (reg8 *) Ultrasonic1_Input_P_12_5__PS)
/* Data Register */
#define Ultrasonic1_Input_P_12_5_DR                     (* (reg8 *) Ultrasonic1_Input_P_12_5__DR)
/* Port Number */
#define Ultrasonic1_Input_P_12_5_PRT_NUM                (* (reg8 *) Ultrasonic1_Input_P_12_5__PRT) 
/* Connect to Analog Globals */                                                  
#define Ultrasonic1_Input_P_12_5_AG                     (* (reg8 *) Ultrasonic1_Input_P_12_5__AG)                       
/* Analog MUX bux enable */
#define Ultrasonic1_Input_P_12_5_AMUX                   (* (reg8 *) Ultrasonic1_Input_P_12_5__AMUX) 
/* Bidirectional Enable */                                                        
#define Ultrasonic1_Input_P_12_5_BIE                    (* (reg8 *) Ultrasonic1_Input_P_12_5__BIE)
/* Bit-mask for Aliased Register Access */
#define Ultrasonic1_Input_P_12_5_BIT_MASK               (* (reg8 *) Ultrasonic1_Input_P_12_5__BIT_MASK)
/* Bypass Enable */
#define Ultrasonic1_Input_P_12_5_BYP                    (* (reg8 *) Ultrasonic1_Input_P_12_5__BYP)
/* Port wide control signals */                                                   
#define Ultrasonic1_Input_P_12_5_CTL                    (* (reg8 *) Ultrasonic1_Input_P_12_5__CTL)
/* Drive Modes */
#define Ultrasonic1_Input_P_12_5_DM0                    (* (reg8 *) Ultrasonic1_Input_P_12_5__DM0) 
#define Ultrasonic1_Input_P_12_5_DM1                    (* (reg8 *) Ultrasonic1_Input_P_12_5__DM1)
#define Ultrasonic1_Input_P_12_5_DM2                    (* (reg8 *) Ultrasonic1_Input_P_12_5__DM2) 
/* Input Buffer Disable Override */
#define Ultrasonic1_Input_P_12_5_INP_DIS                (* (reg8 *) Ultrasonic1_Input_P_12_5__INP_DIS)
/* LCD Common or Segment Drive */
#define Ultrasonic1_Input_P_12_5_LCD_COM_SEG            (* (reg8 *) Ultrasonic1_Input_P_12_5__LCD_COM_SEG)
/* Enable Segment LCD */
#define Ultrasonic1_Input_P_12_5_LCD_EN                 (* (reg8 *) Ultrasonic1_Input_P_12_5__LCD_EN)
/* Slew Rate Control */
#define Ultrasonic1_Input_P_12_5_SLW                    (* (reg8 *) Ultrasonic1_Input_P_12_5__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Ultrasonic1_Input_P_12_5_PRTDSI__CAPS_SEL       (* (reg8 *) Ultrasonic1_Input_P_12_5__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Ultrasonic1_Input_P_12_5_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Ultrasonic1_Input_P_12_5__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Ultrasonic1_Input_P_12_5_PRTDSI__OE_SEL0        (* (reg8 *) Ultrasonic1_Input_P_12_5__PRTDSI__OE_SEL0) 
#define Ultrasonic1_Input_P_12_5_PRTDSI__OE_SEL1        (* (reg8 *) Ultrasonic1_Input_P_12_5__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Ultrasonic1_Input_P_12_5_PRTDSI__OUT_SEL0       (* (reg8 *) Ultrasonic1_Input_P_12_5__PRTDSI__OUT_SEL0) 
#define Ultrasonic1_Input_P_12_5_PRTDSI__OUT_SEL1       (* (reg8 *) Ultrasonic1_Input_P_12_5__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Ultrasonic1_Input_P_12_5_PRTDSI__SYNC_OUT       (* (reg8 *) Ultrasonic1_Input_P_12_5__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Ultrasonic1_Input_P_12_5__SIO_CFG)
    #define Ultrasonic1_Input_P_12_5_SIO_HYST_EN        (* (reg8 *) Ultrasonic1_Input_P_12_5__SIO_HYST_EN)
    #define Ultrasonic1_Input_P_12_5_SIO_REG_HIFREQ     (* (reg8 *) Ultrasonic1_Input_P_12_5__SIO_REG_HIFREQ)
    #define Ultrasonic1_Input_P_12_5_SIO_CFG            (* (reg8 *) Ultrasonic1_Input_P_12_5__SIO_CFG)
    #define Ultrasonic1_Input_P_12_5_SIO_DIFF           (* (reg8 *) Ultrasonic1_Input_P_12_5__SIO_DIFF)
#endif /* (Ultrasonic1_Input_P_12_5__SIO_CFG) */

/* Interrupt Registers */
#if defined(Ultrasonic1_Input_P_12_5__INTSTAT)
    #define Ultrasonic1_Input_P_12_5_INTSTAT            (* (reg8 *) Ultrasonic1_Input_P_12_5__INTSTAT)
    #define Ultrasonic1_Input_P_12_5_SNAP               (* (reg8 *) Ultrasonic1_Input_P_12_5__SNAP)
    
	#define Ultrasonic1_Input_P_12_5_0_INTTYPE_REG 		(* (reg8 *) Ultrasonic1_Input_P_12_5__0__INTTYPE)
#endif /* (Ultrasonic1_Input_P_12_5__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Ultrasonic1_Input_P_12_5_H */


/* [] END OF FILE */
