#include <REG52.h>
#include <INTRINS.H>

sbit beep=P3^0;	//定义端口为beep

void delay(unsigned int t)	//自定义延时函数
{
	unsigned char i;
	for(;t>0;t--)
	{
		for(i=100;i>0;i++);
	}
}

int main()
{
	while(1)
	{
		beep=1;	//npn 高电平驱动蜂鸣器响
	}
}