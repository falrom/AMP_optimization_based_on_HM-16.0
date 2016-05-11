/******************************************************************************
*	JHdebug.h
*	JH的个人debug文件
*	定义相应的全局变量和宏定义
*******************************************************************************/



#ifndef _JH_DEBUG_
#define _JH_DEBUG_

#include <time.h>

//	============================================================================
//	debug宏定义
//	============================================================================

#define			JH_IS_DEBUGING				1				//我的debug总开关
#define			FIND_AMP_TIMES				1				//统计AMP模式判决和采用次数的开关
#define			PRINT_ENCODE_I2P_TIME		0				//打印从编码第一帧（I帧）完成到编码该P帧完成的时间。仅适用于I-P-P...结构编码配置文件（P_lowdelay）
#define			PRINT_ENCODE_ALLP_TIME		1				//打印所有P帧的编码时间

#define			RUN_MY_JOB					1				//我进行优化工作部分的开关。
#define			DEBUG_MY_JOB				1				//优化部分工作的调试开关。

//	============================================================================
//	调试用类
//	============================================================================

class JHdebug
{
public:
	JHdebug();
	~JHdebug();
		
	static unsigned int timesOfAmpJudge;				//统计进行AMP模式判决的次数
	static unsigned int timesOfUsingAmp;				//统计AMP模式判决后采用AMP模式的次数（不代表最终结果）

	static clock_t timeOfIEnd;							//记录第一帧I帧编码完成时间点
	static double timeOfAllP;							//记录编码所有P帧所用时间

	//运动估计函数中用到的一些标志位
	//static bool nowIsInterP;

	//运动估计函数中用到的一些需要记录的值
	//2NxN
	static unsigned int CostUp;
	static unsigned int CostDown;
	//Nx2N
	static unsigned int CostLeft;
	static unsigned int CostRight;

	//判断阈值恒量
	static const double thresholdSmaller16;					//针对尺寸为16的CU的最佳判断阈值为较小Cost值，在此设定其最大值。
	static const double thresholdRatio32;					//针对尺寸为32的CU的最佳判断阈值为比例值，在此设定其最小值。
	static const double thresholdSmaller64;					//针对尺寸为64的CU的最佳判断阈值为较小Cost值，在此设定其最大值。

private:

};


#endif // !_JH_DEBUG_