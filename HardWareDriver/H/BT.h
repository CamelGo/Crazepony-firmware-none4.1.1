#ifndef _BT_H_
#define _BT_H_
#include "stm32f10x.h"
#include "UART1.h"


#define BT_on()      {GPIO_SetBits(GPIOB, GPIO_Pin_2);printf("������Դ��ʼ�������...\r\n");}
#define BT_off()     {GPIO_ResetBits(GPIOB, GPIO_Pin_2);printf("������Դ��ʼ���ر����...\r\n");}//�궨����������

void BT_PowerInit(void);   //����͸����Դ��ʼ��



#endif

