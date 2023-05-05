/*******************************************************************************/
/******************************************************************************/
/*****************************************************************************/
/****************    Author    : Mahmoud Radwan       ***********************/
/****************    Layer     : MCAL                 **********************/
/****************    SWC       : I2C                  *********************/
/****************    version   : 1.0                  ********************/
/************************************************************************/
/***********************************************************************/





#ifndef I2C_register_H_

 #define I2C_register_H_ 

	#define SPDR                    *((volataile u8*)0x2F)   /* SPI Data REGISTER */
	
	#define SPSR                    *((volataile u8*)0x2E)   /* SPI control status REGISTER */
	
	#define SPSR_SPIF               7                        /* SPI interrupt flag */
	#define SPSR_SPI2X              0                        /* prescaler bit 2 */
	
	
	#define SPCR                    *((volataile u8*)0x2D)   /* SPI control REGISTER */
	#define SPCR_SPE                6                        /* SPI Enable */
	#define SPCR_MSTR               4                        /* Master bit */
	#define SPCR_SPR1               1                        /* prescaler bit 1 */
	#define SPCR_SPR0               0                        /* prescaler bit 0 */
	

 

	
	
	
#endif