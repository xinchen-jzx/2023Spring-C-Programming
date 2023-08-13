#include <iostream>
using namespace std;

int getNumberLen(char number[]);
void tranCharToInt(char number[], int num[100]); 
void plusInt(int num1[], int num2[], int finalNumber[]);

int main()
{
	int num1[100] = { 0 }, num2[100] = { 0 }, finalNumber[100] = {0};
	char number1[101], number2[101];
	//输入
	cout << "请分别输入两个大整数(两者及其和的长度均不超过100位)： " << endl;
	cin >> number1 >> number2;


	//将整数存入数组中
	tranCharToInt(number1, num1);
	tranCharToInt(number2, num2);
	
	//计算结果
	plusInt(num1, num2, finalNumber);

	//输出结果
	cout << "两长整数之和为： ";
	int i = 0;
	while (true)
	{
		if (finalNumber[i] == 0)
			i++;
		else
		{
			for (int j = i; j < 100; j++)
				cout << finalNumber[j];
			break;
		}
	}
	return 0;
}
//计算长整数长度
int getNumberLen(char number[])
{
	int i = 0, result = 0;
	while (number[i] != '\0')
	{
		result++;
		i++;
	}
	return result;
}
//将char转换为int存储起来
void tranCharToInt(char number[], int num[100])
{
	int i = 0,N = getNumberLen(number);
	while (number[i] != '\0')
	{
		// 0和9的ascii码值分别为48、57
		num[100 - N + i] = int(number[i]) - 48;
		i++;
	}
}
//实现长整数的竖式加法
void plusInt(int num1[], int num2[], int finalNumber[])
{
	int i = 0;
	while (num1[99 - i] != 0 || num2[99 -i] != 0)
	{
		if (num1[99 - i] + num2[99 - i] + finalNumber[99-i] >= 10)
		{
			//和满十进一
			finalNumber[99 - i] = (num1[99 - i] + num2[99 - i] + finalNumber[99 - i]) % 10;
			finalNumber[99 - i - 1] += 1;
		}
		//和未满十则不进一
		else finalNumber[99 - i] += num1[99 - i] + num2[99 - i];
		i++;
	}
}