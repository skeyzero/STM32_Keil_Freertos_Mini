#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "list.h"
#include "portable.h"
#include "freertosconfig.h"

TaskHandle_t test_Task_Handle;


void Task_Function(void *param)
{
	for(;;);
}

int main(void)
{
	xTaskCreate(	Task_Function,		//任务实现函数
					"usr_task_name",			//任务名称
					512,				//栈空间
					NULL,				//传递到任务中的值
					1,					//优先级0最低，最高configMAX_PRIORITIES-1
					&test_Task_Handle);		//任务句柄，多任务操作使用这个参数
	 /*启动任务调度器，任务开始执行*/
    vTaskStartScheduler();
	return 0;
}






