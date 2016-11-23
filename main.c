#include"stdlib.h"
#include"stdio.h"
#include"string.h"
#include"conio.h"		//实现按下即输出
	char start();
	int choose();
	void one();
	void two();
	void three();
	void four();
	void five();
	void six();
	void seven();
	void eight();
	void nine();
	void Exit();
	void end();
	
	char def_color[3]="e3";
	char num='m';
int main(){
//	int chose=start();
	system("title 虚 拟 热 点 工 具");
	system("mode con:cols=90 lines=30");
	system("color e3");
	choose();
	return 0;
} 
char start(){
//	system("cls");
//	其中color后面的0是背景色代号，A是前景色代号。各颜色代码如下：0=黑色 1=蓝色 2=绿色 3=湖蓝色 4=红色 5=紫色 6=黄色 7=白色 8=灰色 9=淡蓝色 A=淡绿色 B=淡浅绿色 C=淡红色 D=淡紫色 E=淡黄色 F=亮白色
	do{
	system("cls");
	printf("\t\t\t欢 迎 使 用\n");
	printf("\t\t____________________________________\n\n");
	printf("			1：查看当前承载网络状态\n");
	printf("			2：显示系统无线功能\n");
	printf("			3：启用托管网络\n");
	printf("			4：打开承载网络\n");
	printf("			5：关闭承载网络\n");
	printf("			6：设置承载网络SSID\n");
	printf("			7：设置承载网络KEY\n");
	printf("			8：显示wifi列表\n");
	printf("			9：皮肤设置\n");
	printf("			0：退出\n");
	printf("\t\t____________________________________\n\n");
	printf("\t\t\t\t\tPowerd by Mix\n\n");
	printf("请输入字符选择功能：");
//	scanf("%c",&num);
//	num=getchar();
	num=getch();	//按下即输出（调用conio.h）
	system("cls");
//	printf("\t\t\t\t\tPowerd by Mix %c\n\n",num);
//	printf("warning:输入有误，请重试!\n"); 
//	system("pause");
}while(num>57||num<48);
//	return num; 
}
int choose()
{
	char choice;
	start();
	system("cls");
	switch(num)
	{
		case '1':one();
		break;
		case '2':two();
		break;
		case '3':three();
		break;
		case '4':four();
		break;
		case '5':five();
		break;
		case '6':six();
		break;
		case '7':seven();
		break;
		case '8':eight();
		break;
		case '9':nine();
		break;
		case '0':Exit();
		break;
		default:
//		printf("您输入的是%c",num);
//		printf("输入有误，请重试.");
		end();
	}
}
void one(){
	system("netsh wlan show hostednetwork");
//	system("pause");
	end();
}
void two(){
	system("netsh wlan show wirelesscapabilities|more");
	end();
}
void three(){
	system("netsh wlan set hostednetwork mode=allow");
	end();
}
void four(){
	system("netsh wlan start hostednetwork");
	end();
}
void five(){
	system("netsh wlan stop hostednetwork");
	end();
}
void six(){
	char SSID[20];
	char s[50]="netsh wlan set hostednetwork ssid=";
	printf("请输入SSID:");
	scanf("%s",SSID);
//	printf("%s",SSID);
	strcat(s,SSID);
//	sprintf(s,"netsh wlan set hostednetwork ssid=%s",SSID);
//	printf(s);
//	system("pause");
	system(s);
	printf("更改SSID后需要重启承载网络\n");
	printf("正在重启承载网络\n");
	four();
}
void seven(){
	char KEY[50];
	char s[100]="netsh wlan set hostednetwork key=";
	printf("请输入KEY:");
	scanf("%s",KEY);
	strcat(s,KEY);
	system(s);
	end();
}
void eight(){
	system("netsh wlan show networks|more");
	end();
}
void nine(){
	int choose;
	char color[2];
	char s[30]="color ";
	printf("当前色彩：%s\n\n",def_color);
	printf("\t0=黑色\t \t1=蓝色\t \t2=绿色\t \t3=湖蓝色\n \t4=红色\t \t5=紫色\t \t6=黄色\t \t7=白色\n \t8=灰色\t \t9=淡蓝色\tA=淡绿色\tB=淡浅绿色 \n \tC=淡红色\tD=淡紫色\tE=淡黄色\tF=亮白色\n");
	printf("\n请输入两个代号(第一个代表背景色，第二个代表前景色)：") ;
	scanf("%s",color);
	strcat(s,color);
	system(s);
	system("cls");
	printf("\n\t这个如何？<1：很好啊/0：不可以>\n\n");
	scanf("%d",&choose);
	if(choose==1)
	{
	strcpy(def_color,color);
	printf("设置完成 ！\n");
	end();
	}
	else if(choose==0)
	{
	strcpy(s,"color ");
	strcat(s,def_color);
	system(s);
	system("cls");
	printf("\n\t那咱们再来\n");
	nine();
	}
	else
	{
	printf("输入有误请重新输入\n");
	nine();
	} 
//	end();
}
void end(){
	system("pause");
	system("cls");
	choose();
}
void Exit(){
//	system("cls");
//	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
//	printf("				* * * * * * * * * * * * * * * * * * * * *\n");
//	printf("				*					*\n");
//	printf("				*					*\n");
//	printf("				*	再见ヾ(￣▽￣)Bye~Bye~		*\n");
//	printf("				*					*\n");
//	printf("				*				By 大孟	*\n");
//	printf("				* * * * * * * * * * * * * * * * * * * * *\n");
//	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t");
//	system("choice /t 1 /d y /n /m \"1S后自动退出\""); 
	
}
