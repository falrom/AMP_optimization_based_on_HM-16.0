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