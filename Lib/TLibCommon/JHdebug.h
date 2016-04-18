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

private:

};


#endif // !_JH_DEBUG_