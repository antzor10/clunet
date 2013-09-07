/* Name: clunet_config.h
 * Project: CLUNET network driver
 * Author: Alexey Avdyukhin
 * Creation Date: 2012-11-08
 * License: DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 */
 
 #ifndef __clunet_config_h_included__
#define __clunet_config_h_included__

// ����� ���������� (0-255)
#define CLUNET_DEVICE_ID 99

// ��� ����������
#define CLUNET_DEVICE_NAME "CLUNET device"

// ������ ������ ��� ������ � �������� (������� ���������� �������)
#define CLUNET_SEND_BUFFER_SIZE 128
#define CLUNET_READ_BUFFER_SIZE 128

// ���� � ���� ��� �������� ������
#define CLUNET_WRITE_PORT D
#define CLUNET_WRITE_PIN 1

// ����������, ���� ����� ����������� � ����� ������������
#define CLUNET_WRITE_TRANSISTOR

// ���� � ���� ��� ������ ������, ������ ����� �������� ����������
#define CLUNET_READ_PORT D
#define CLUNET_READ_PIN 4

// ������������ �������
#define CLUNET_TIMER_PRESCALER 64

// ������������� �������
#define CLUNET_TIMER_INIT {unset_bit4(TCCR2, WGM21, WGM20, COM21, COM20); /* Timer2, ���������� ����� */ \
	set_bit(TCCR2, CS22); unset_bit2(TCCR2, CS21, CS20); /* 64x ������������ */ }

// ������� ������ ������� � ���������
#define CLUNET_TIMER_REG TCNT2
#define CLUNET_TIMER_REG_OCR OCR2

// ���������/���������� ���������� �������
#define CLUNET_ENABLE_TIMER_COMP set_bit(TIMSK, OCIE2)
#define CLUNET_DISABLE_TIMER_COMP unset_bit(TIMSK, OCIE2)
#define CLUNET_ENABLE_TIMER_OVF set_bit(TIMSK, TOIE2)
#define CLUNET_DISABLE_TIMER_OVF unset_bit(TIMSK, TOIE2)

// ������������� �������� ���������� � ��� ���������
#define CLUNET_INIT_INT {set_bit(MCUCR,ISC00);unset_bit(MCUCR,ISC01);}
#define CLUNET_ENABLE_INT set_bit(GICR, INT0)

// ������� ���������� ��� ������� � �������� ����������
#define CLUNET_TIMER_COMP_VECTOR TIMER2_COMP_vect
#define CLUNET_TIMER_OVF_VECTOR TIMER2_OVF_vect
#define CLUNET_INT_VECTOR INT0_vect

#endif
