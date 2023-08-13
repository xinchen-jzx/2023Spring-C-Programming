//5.6.1: 24小时转12小时
#include<iostream>
using namespace std;
void convert(int& hour, int& minute, char& form);

int main(){
    int hour24, minute24;
    char form;
    cout<<"请输入24小时制的时间:(如14 24, 14时24分钟)"<<endl;
    cin>>hour24>>minute24;
    if (hour24 < 0 || hour24 > 23 || minute24 < 0 || minute24 > 59) {
        cout << "转换失败, 请检查输入";// 参数不合法，转换失败
        return 0;
    }
    convert(hour24,minute24, form);
    cout << hour24 << ":" << minute24 << form << "M";
    return 0;
}
void convert(int &hour, int &minute, char &form) {
    if (hour == 0) {
        hour = 12;
        form = 'A';
    } else if (hour < 12) {
        form = 'A';
    } else if (hour == 12) {
        hour = 12;
        form = 'P';
    } else {
        hour = hour - 12;
        form = 'P';
    }
    minute = minute;//或者不修改！
    return ; // 转换成功
}
