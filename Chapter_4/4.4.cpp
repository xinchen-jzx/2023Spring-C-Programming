#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int main(){
	int setNumber,gessNumber; 
	long startTime;
	int first,second,third,fourth;
	int gessFirst,gessSecond,gessThird,gessFourth;
	int flag0=0,flag1=1;
	do{
		//清屏
		system("cls");
		
		//随机数		
		startTime = GetTickCount();
		srand(startTime);
		setNumber= rand()/( 8999+ 1)+1000;
		flag0=0;
		
		//随机数拆解
		first=setNumber/1000;
		second=setNumber%1000/100;
		third=setNumber%100/10;
		fourth=setNumber%10;
				
		//主体
		for(int i=0;i<5;i++){
			
			//输入猜想
			cout<<"请输入4位数"<<endl;
			while(1){
				cin>>gessNumber;
				if(gessNumber>9999 || gessNumber<1000){
					cout<<"输入不正确，请输入四位数"<<endl;
				}else{
					break;
				}
			}
			
			//拆解
			gessFirst=gessNumber/1000;
			gessSecond=gessNumber%1000/100;
			gessThird=gessNumber%100/10;
			gessFourth=gessNumber%10;
			
			//第一位判别
			if(gessFirst==first){
				cout<<"O";
			}else if(gessFirst==second || gessFirst==third || gessFirst==fourth){
				cout<<"-";
			}else{
				cout<<"X";
			}
			
			//第二位判别
			if(gessSecond==second){
				cout<<"O";
			}else if(gessSecond==first || gessSecond==third || gessSecond==fourth){
				cout<<"-";
			}else{
				cout<<"X";
			}
			
			//第三位判别
			if(gessThird==third){
				cout<<"O";
			}else if(gessThird==second || gessThird==first || gessThird==fourth){
				cout<<"-";
			}else{
				cout<<"X";
			}
			
			//第四位判别
			if(gessFourth==fourth){
				cout<<"O"<<endl;
			}else if(gessFourth==second || gessFourth==third || gessFourth==first){
				cout<<"-"<<endl;
			}else{
				cout<<"X"<<endl;
			}
			
			if(setNumber==gessNumber){
				cout<<"回答正确"<<endl;
				flag0=1;
				break;
			}
		}
		
		//重玩
		if(flag0){
			cout<<"答案为："<<setNumber<<"\n选择是(1)否(0)重玩"<<endl;
		}else{
			cout<<"5次机会用尽，答案为："<<setNumber<<"\n选择是(1)否(0)重玩"<<endl;
		}		
		while(1){
			cin>>flag1;
			if(flag1!=1 &&flag1!=0){
				cout<<"输入不正确，请重新输入"<<endl;
			}else{
				break;
			}	
		}		
	}while(flag1);
	return 0;
}
