/******************************************************************************
*	JHdebug.h
*	JH�ĸ���debug�ļ�
*	������Ӧ��ȫ�ֱ����ͺ궨��
*******************************************************************************/



#ifndef _JH_DEBUG_
#define _JH_DEBUG_

#include <time.h>

//	============================================================================
//	debug�궨��
//	============================================================================

#define			JH_IS_DEBUGING				1				//�ҵ�debug�ܿ���
#define			FIND_AMP_TIMES				1				//ͳ��AMPģʽ�о��Ͳ��ô����Ŀ���
#define			PRINT_ENCODE_I2P_TIME		0				//��ӡ�ӱ����һ֡��I֡����ɵ������P֡��ɵ�ʱ�䡣��������I-P-P...�ṹ���������ļ���P_lowdelay��
#define			PRINT_ENCODE_ALLP_TIME		1				//��ӡ����P֡�ı���ʱ��

//	============================================================================
//	��������
//	============================================================================

class JHdebug
{
public:
	JHdebug();
	~JHdebug();
		
	static unsigned int timesOfAmpJudge;				//ͳ�ƽ���AMPģʽ�о��Ĵ���
	static unsigned int timesOfUsingAmp;				//ͳ��AMPģʽ�о������AMPģʽ�Ĵ��������������ս����

	static clock_t timeOfIEnd;							//��¼��һ֡I֡�������ʱ���
	static double timeOfAllP;							//��¼��������P֡����ʱ��

private:

};


#endif // !_JH_DEBUG_