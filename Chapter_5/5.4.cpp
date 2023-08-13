#include<iostream>
using namespace std;

int countWeek(int year,int month,int day);
int countDays(int year,int month,int day);
bool moreYear(int year);

int main(){
	int year,month,day;
	cout<<"请输入年月日："<<endl;
	cin>>year>>month>>day;
	switch (countWeek(year,month,day)) {
		case 1:
			cout<<"星期一"<<endl;
			break;
		case 2:
			cout<<"星期二"<<endl;
			break;
		case 3:
			cout<<"星期三"<<endl;
			break;
		case 4:
			cout<<"星期四"<<endl;
			break;
		case 5:
			cout<<"星期五"<<endl;
			break;
		case 6:
			cout<<"星期六"<<endl;
			break;
		case 7:
			cout<<"星期天"<<endl;
			break;
		default:
			cout<<"error!"<<endl;
			break;
	}
	return 0;
}

int countWeek(int year,int month,int day){
	int S=0,X=year,C=countDays(year,month,day);
	S=X-1+(X-1)/4-(X-1)/100+(X-1)/400+C;
	if(S%7==0){
		return 7;
	}else{
		return S%7;
	}
}

int countDays(int year,int month,int day){
	int days=0;
	if(moreYear(year)){
		//闰年
		for(int i=1;i<month;i++){
			switch (i) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					days+=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					days+=30;
					break;
				default:
					days+=29;
					break;
			}
		}		
		return days+=day;
	}else{
		//平年
		for(int i=1;i<month;i++){
			switch (i) {
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:
					days+=31;
					break;
				case 4:
				case 6:
				case 9:
				case 11:
					days+=30;
					break;
				default:
					days+=28;
					break;
			}
		}		
		return days+=day;
	}
}

bool moreYear(int year){
	return year%400==0||(year%4==0&&year%100!=0);
}
