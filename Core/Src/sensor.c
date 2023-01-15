#include "device.h"
#include "sensor.h"

#define ADC_SET_SQR1(adc) (ADC_SQR1_RK(adc, 16)|\
							ADC_SQR1_RK(adc, 15) |\
							ADC_SQR1_RK(adc, 14) |\
							ADC_SQR1_RK(adc, 13) 

#define ADC_SET_SQR2(adc) (ADC_SQR2_RK(adc, 12)|\
							ADC_SQR2_RK(adc, 11) |\
							ADC_SQR2_RK(adc, 10) |\
							ADC_SQR2_RK(adc, 9) |\
							ADC_SQR2_RK(adc, 8) |\
							ADC_SQR2_RK(adc, 7))
							
#define ADC_SET_SQR3(adc) (ADC_SQR3_RK(adc, 6)|\
								ADC_SQR3_RK(adc, 5) |\
								ADC_SQR3_RK(adc, 4) |\
								ADC_SQR3_RK(adc, 3) |\
								ADC_SQR3_RK(adc, 2) |\
								ADC_SQR3_RK(adc, 1))

#if 1
#define ADC_1	0x0
#define ADC_2	0x1
#define ADC_3	0x2
#define ADC_4	0x3
#define ADC_5	0x4
#define ADC_6	0x5
#define ADC_7	0x6
#define ADC_8	0x7
#define ADC_9	0x8
#define ADC_10	0x9
#define ADC_11	0xa
#define ADC_12	0xb
#define ADC_13	0xc
#define ADC_14	0xd
#define ADC_15	0xe
#define ADC_16	0xf
#endif

//PD08 ~ PD15

typedef volatile enum
{
	#if 1
	SEN0 = 8,
	SEN1 ,
	SEN2 ,
	SEN3 ,
	SEN4 ,
	SEN5 ,
	SEN6 ,
	SEN7 ,
	SEN_END = 8,
	
	SQR = 3,
	SQR_1 = 1,
	SQR_2= 2,
	SQR_3= 3,
	POS = 3,
	ADC_NUM =16
	#endif

	}sensor_num;

volatile Uint16 sen_shoot_arr[ SEN_END ] = 
{
	SEN0, SEN1, SEN2, SEN3, SEN4, SEN5, SEN6, SEN7
};

/*
volatile Uint16 sen_adc_seq[ADC_NUM][POS]
{
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_12), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	{ADC_SET_SQR1(ADC_1), ADC_SET_SQR2(ADC_1), ADC_SET_SQR3(ADC_1)} ,
	
};
*/

extern ADC_HandleTypeDef hadc1;
/*
interrupt void Sensor_Value(void)
{
	PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
	GpioDataRegs.GPASET.all = ( ON_L << sen_shoot_arr[ g_int32_sen_cnt ] );	 //sensor shoot code
	

	AdcRegs.ADCCHSELSEQ1.all = sen_adc_seq[ g_int32_sen_cnt ];
	AdcRegs.ADCCHSELSEQ2.all = sen_adc_seq[ g_int32_sen_cnt + SEN_END ];
	AdcRegs.ADCCHSELSEQ3.all = sen_adc_seq[ g_int32_sen_cnt ];
	AdcRegs.ADCCHSELSEQ4.all = sen_adc_seq[ g_int32_sen_cnt + SEN_END ];
	
	AdcRegs.ADCTRL2.bit.SOC_SEQ1 = 1;

}
*/

/*
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	if(htim->Instance == TIM4)
	{
		//Motor Timer Interrupt
	}

	else if(htim->Instance == TIM9)
	{
		//TODO : SQR Set Before ADC Start
		//It should be executed after MX_ADC_INIT()
		//GPIO ON and adc start sequence start implement
		GPIOD->BSRR = ( ON_L << sen_shoot_arr[ g_int32_sen_cnt ] );
	
	#if 0
		//ADC_SQR1(ADC_NUM)
		ADC1->Instance->SQR1 = 
		ADC1->Instance->SQR2 =
		ADC1->Instance->SQR3 = 
		
	#endif
		// adc start
		
	}
}
*/

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
	if(hadc->Instance == ADC1)
	{
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,GPIO_PIN_RESET);
	}
}

