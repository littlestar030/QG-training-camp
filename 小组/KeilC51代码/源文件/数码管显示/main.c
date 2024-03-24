#include "REG51.H"
unsigned char s[9]={0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
//共阴0-9

void delay(unsigned int n)	//自定义延时函数
{
	unsigned int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++);
	}
}

void seg()
{
	int i=0;
	for(i=0;i<9;i++)	//遍历数组
	{
		P2=s[i];	//循环显示1-9
		delay(800);
	}
}

void main()
{
	while(1)
	{
		seg();
	}
}