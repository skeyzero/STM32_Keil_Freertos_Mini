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
	xTaskCreate(	Task_Function,		//����ʵ�ֺ���
					"usr_task_name",			//��������
					512,				//ջ�ռ�
					NULL,				//���ݵ������е�ֵ
					1,					//���ȼ�0��ͣ����configMAX_PRIORITIES-1
					&test_Task_Handle);		//�����������������ʹ���������
	 /*�������������������ʼִ��*/
    vTaskStartScheduler();
	return 0;
}






