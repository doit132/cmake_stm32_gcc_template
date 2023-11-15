TARGET_SOURCES(
  ${PROJECT_NAME}
  PRIVATE # {{BEGIN_TARGET_SOURCES}}
          ${CMAKE_CURRENT_LIST_DIR}/src/misc.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_adc.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_can.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_cec.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_crc.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_dac.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_dbgmcu.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_dma.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_exti.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_flash.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_fsmc.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_gpio.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_i2c.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_iwdg.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_pwr.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_rcc.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_rtc.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_sdio.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_spi.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_tim.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_usart.c
          ${CMAKE_CURRENT_LIST_DIR}/src/stm32f10x_wwdg.c
          # {{END_TARGET_SOURCES}}
)

# Add the Common/inc directory to the project include list
TARGET_INCLUDE_DIRECTORIES(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${CMAKE_CURRENT_LIST_DIR}/inc)
