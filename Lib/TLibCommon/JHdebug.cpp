/******************************************************************************
*	JHdebug.cpp
*	JH�ĸ���debug�ļ�
*	JHdebug.hͷ�ļ��е�ʵ��
*******************************************************************************/


#include "JHdebug.h"


JHdebug::JHdebug()
{
}

JHdebug::~JHdebug()
{
}

unsigned int JHdebug::timesOfAmpJudge = 0;
unsigned int JHdebug::timesOfUsingAmp = 0;

clock_t JHdebug::timeOfIEnd = 0;
double  JHdebug::timeOfAllP = 0;

unsigned int JHdebug::CostUp = 0;
unsigned int JHdebug::CostDown = 0;
unsigned int JHdebug::CostLeft = 0;
unsigned int JHdebug::CostRight = 0;

const double JHdebug::thresholdSmaller16 = 500;
const double JHdebug::thresholdRatio32 = 1.1;
const double JHdebug::thresholdSmaller64 = 18000;