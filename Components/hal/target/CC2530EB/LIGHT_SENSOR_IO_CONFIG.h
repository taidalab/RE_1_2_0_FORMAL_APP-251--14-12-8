#ifndef LIGHT_SENSOR_IO_CONFIG_H
#define LIGHT_SENSOR_IO_CONFIG_H

//���ӵ����
#define LED1_BV           BV(7)//������LED��һ�汾���Ϊ0��7�ݸ�
#define LED1_SBIT         P0_7
#define LED1_DDR          P0DIR
#define LED1_POLARITY     ACTIVE_LOW//ACTIVE_HIGH

/* 2 - Red */
#define LED2_BV           BV(5)
#define LED2_SBIT         P0_5
#define LED2_DDR          P0DIR
#define LED2_POLARITY     ACTIVE_LOW//ACTIVE_HIGH

/* 3 - Yellow */
#define LED3_BV           BV(7)
#define LED3_SBIT         P1_7
#define LED3_DDR          P1DIR
#define LED3_POLARITY     ACTIVE_HIGH

/* 3 - Yellow */
#define LED4_BV           BV(7)
#define LED4_SBIT         P1_7
#define LED4_DDR          P1DIR
#define LED4_POLARITY     ACTIVE_HIGH

#define LED5_BV           BV(0)
#define LED5_SBIT         P2_0
#define LED5_DDR          P2DIR
#define LED5_POLARITY     ACTIVE_LOW//ACTIVE_HIGH

#define PUSH1_BV          BV(1)
#define PUSH1_SBIT        P0_1
#define PUSH1_POLARITY    ACTIVE_HIGH
/* Joystick Center Press */
#define PUSH2_BV          BV(0)
#define PUSH2_SBIT        P2_0
#define PUSH2_POLARITY    ACTIVE_HIGH

/* ���ӵ����� */
#define PUSH3_BV          BV(6) //�����İ�����һ�汾���Ϊ0��6�ݸ�
#define PUSH3_SBIT        P0_6
#define PUSH3_POLARITY    ACTIVE_HIGH

#define PUSH4_BV          BV(3)
#define PUSH4_SBIT        P1_3
#define PUSH4_POLARITY    ACTIVE_HIGH

#define PUSH5_BV          BV(4)
#define PUSH5_SBIT        P1_4
#define PUSH5_POLARITY    ACTIVE_HIGH

#define PUSH6_BV          BV(5)
#define PUSH6_SBIT        P0_5
#define PUSH6_POLARITY    ACTIVE_HIGH

//�������޸�IO������
#define HAL_IO_CONFIG_INIT()                                     \
{                                                                \
  LED1_DDR |= LED1_BV;                                           \
  HAL_TURN_OFF_LED1();                                           \
  LED2_DDR |= LED2_BV;                                           \
  HAL_TURN_OFF_LED2();                                           \
/*  ��P0.4 P1.5 P0.5��Ϊ3̬״̬��������������� P0.5������ķŲ���*/  \
  P0INP |= PUSH3_BV;\
}                                                                


#endif