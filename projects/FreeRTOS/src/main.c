#include "sys.h"
#include "delay.h"
#include "stm32f10x_gpio.h"

// 标准外设库
#include "stm32f10x.h"

// bsp
#include "delay.h"
#include "usart.h"

// freeRTOR
#include "FreeRTOS.h"
#include "task.h"

// 任务优先级
#define START_TASK_PRIO 3
#define TASK1_PRIO      4

/* 任务堆栈大小	*/
#define START_STK_SIZE 96
#define TASK1_STK_SIZE 64

// 任务句柄
TaskHandle_t StartTaskHandle = NULL;
TaskHandle_t Task1Handle     = NULL;

// 任务声明
void StartTask(void* pvParameters);
void Task1(void* pvParameters);

int main()
{
        BaseType_t xReturn = pdPASS; /* 定义一个创建信息返回值, 默认为 pdPASS */

        delay_init();
        printf("开始创建StartTask任务\r\n");
        xReturn = xTaskCreate((TaskFunction_t)StartTask,
                              (const char*)"StartTask",
                              (uint16_t)START_STK_SIZE,
                              (void*)0,
                              (UBaseType_t)START_TASK_PRIO,
                              (TaskHandle_t*)&StartTaskHandle);
        /* 启动任务调度 */
        if (pdPASS == xReturn) {
                printf("创建StartTask任务成功, 开始任务调度\r\n");
                vTaskStartScheduler(); /* 启动任务, 开启调度 */
        } else {
                return -1;
        }
}

void StartTask(void* pvParameters)
{
        BaseType_t xReturn = pdPASS; /* 定义一个创建信息返回值, 默认为 pdPASS */
        printf("开始创建Task1任务\r\n");
        taskENTER_CRITICAL();
        xReturn = xTaskCreate((TaskFunction_t)Task1,
                              (const char*)"Task1",
                              (uint16_t)TASK1_STK_SIZE,
                              (void*)0,
                              (UBaseType_t)TASK1_PRIO,
                              (TaskHandle_t*)&Task1Handle);
        if (pdPASS == xReturn) {
                printf("创建Task1任务成功\r\n");
                vTaskDelete(StartTaskHandle);
        } else {
                printf("创建Task1任务失败\r\n");
                return;
        }
        taskEXIT_CRITICAL();
}

void Task1(void* pvParameters)
{
        while (1) {
                GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);
                delay_ms(1000);
                GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_RESET);
                delay_ms(1000);
        }
}
