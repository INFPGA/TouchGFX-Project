#ifndef HW_DEF_H_
#define HW_DEF_H_



#include "bsp.h"
#ifndef SIMULATOR
#include "main.h"
#endif

#define _DEF_FIRMWATRE_VERSION    "V240320R1"
#define _DEF_BOARD_NAME           "METAL-DETECTOR-GUI"


//#define _USE_HW_FT5206
#define _USE_HW_AK4183
#define _USE_HW_QSPI
#define _USE_HW_FLASH


#define _USE_HW_LED
#define      HW_LED_MAX_CH          1

#define _USE_HW_UART
#define      HW_UART_MAX_CH         2
#define      HW_UART_CH_SWD         _DEF_UART1
#define      HW_UART_CH_MAIN        _DEF_UART2

#define _USE_HW_CLI
#define      HW_CLI_CMD_LIST_MAX    32
#define      HW_CLI_CMD_NAME_MAX    16
#define      HW_CLI_LINE_HIS_MAX    8
#define      HW_CLI_LINE_BUF_MAX    64

#define _USE_HW_CLI_GUI
#define      HW_CLI_GUI_WIDTH       80
#define      HW_CLI_GUI_HEIGHT      24

#define _USE_HW_LOG
#define      HW_LOG_CH              _DEF_UART1
#define      HW_LOG_BOOT_BUF_MAX    2048
#define      HW_LOG_LIST_BUF_MAX    4096

#define _USE_HW_BUTTON
#define      HW_BUTTON_MAX_CH       1

#define _USE_HW_SWTIMER
#define      HW_SWTIMER_MAX_CH      8

#define _USE_HW_GPIO
#define      HW_GPIO_MAX_CH         4

#define _USE_HW_SPI
#define      HW_SPI_MAX_CH          1

#define _USE_HW_SPI_FLASH
#define      HW_SPI_FLASH_ADDR      0x92000000

#define _USE_HW_I2C
#define      HW_I2C_MAX_CH          2
#define      HW_I2C_CH_TOUCH        _DEF_I2C1
#define      HW_I2C_CH_EEPROM       _DEF_I2C2

#define _USE_HW_EEPROM
#define      HW_EEPROM_MAX_SIZE     (2*1024)

#define _USE_HW_PWM
#define      HW_PWM_MAX_CH          1

#define _USE_HW_SDRAM
#define      HW_SDRAM_MEM_ADDR      0xC0000000
#define      HW_SDRAM_MEM_SIZE      (32*1024*1024)

#define _USE_HW_TOUCH
#define      HW_TOUCH_MAX_CH        5

#define _USE_HW_LTDC
#define      HW_LTDC_BUF_ADDR      HW_SDRAM_MEM_ADDR

#define _USE_HW_LCD
#define      HW_LCD_WIDTH           800
#define      HW_LCD_HEIGHT          480

#define _USE_HW_TOUCHGFX
#define      HW_TOUCHGFX_BUF_0      0xC0000000
#define      HW_TOUCHGFX_BUF_1      (HW_TOUCHGFX_BUF_0 + (HW_LCD_WIDTH * HW_LCD_HEIGHT * 2) * 1)
#define      HW_TOUCHGFX_BUF_2      (HW_TOUCHGFX_BUF_0 + (HW_LCD_WIDTH * HW_LCD_HEIGHT * 2) * 2)

#define FLASH_SIZE_TAG              0x400
#define FLASH_SIZE_VER              0x400
#define FLASH_SIZE_FIRM             (1024*1024 - 128*1024)

#define FLASH_ADDR_BOOT             0x08000000
#define FLASH_ADDR_FIRM             0x08020000

#define FLASH_ADDR_UPDATE           0x90800000

#define _PIN_GPIO_LCD_TS_RST        0
#define _PIN_GPIO_LCD_TS_INT        1
#define _PIN_GPIO_SPI_FLASH_CS      2
#define _PIN_GPIO_LCD_RST           3

#define _USE_HW_RTC
#endif
