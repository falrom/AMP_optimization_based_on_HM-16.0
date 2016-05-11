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

#define			RUN_MY_JOB					1				//�ҽ����Ż��������ֵĿ��ء�
#define			DEBUG_MY_JOB				1				//�Ż����ֹ����ĵ��Կ��ء�

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

	//�˶����ƺ������õ���һЩ��־λ
	//static bool nowIsInterP;

	//�˶����ƺ������õ���һЩ��Ҫ��¼��ֵ
	//2NxN
	static unsigned int CostUp;
	static unsigned int CostDown;
	//Nx2N
	static unsigned int CostLeft;
	static unsigned int CostRight;

	static unsigned int timesOfGoodJob;						//ͳ���ҵļ��ٷ�������׼ȷ�Ĵ���
	static unsigned int timesOfDoJob;						//ͳ���ҵļ��ٷ������Բ���Ĵ�������ͳ�ƺ������������AMP��ͬʱ��

	//�ж���ֵ����
	static const double thresholdRatio16;					//��Գߴ�Ϊ16��CU������ж���ֵΪ����ֵ���ڴ��趨����Сֵ��
	static const double thresholdRatio32;					//��Գߴ�Ϊ32��CU������ж���ֵΪ����ֵ���ڴ��趨����Сֵ��
	static const double thresholdRatio64;					//��Գߴ�Ϊ64��CU������ж���ֵΪ����ֵ���ڴ��趨����Сֵ��

private:

};


#endif // !_JH_DEBUG_