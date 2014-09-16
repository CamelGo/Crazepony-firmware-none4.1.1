#ifndef _CONTROL_H_
#define _CONTROL_H_
#include "stm32f10x.h"


// //����PID����
// typedef struct PID
// {
//     float P,
//           POUT,
//           I,
//           IOUT,
//           D,
//           DOUT,
//           IMAX,
//           SetPoint,
//           NowPoint,
//           LastError,
//           PrerError;

// }PID;


// PID�ṹ��
typedef struct
{
    float P;
    float I;
    float D;
    float Desired;
    float Error;
    float PreError;
    float PrePreError;
    float Increment;
    double Integ;
    float Deriv;
    float Output;
 
}PID_Typedef;


void Controler(void);
void PID_INIT(void);
void PID_Calculate(void);
char  ParameterWrite(void);
void  ParameterRead(void);

extern u16 PIDWriteBuf[3];//д��flash����ʱ���֣���NRF24L01_RXDATA[i]��ֵ 

extern PID_Typedef pitch_angle_PID;	//�ǶȻ���PID
extern PID_Typedef pitch_rate_PID;		//�����ʻ���PID

extern PID_Typedef roll_angle_PID;
extern PID_Typedef roll_rate_PID;

extern PID_Typedef yaw_angle_PID;
extern PID_Typedef yaw_rate_PID;


#endif


