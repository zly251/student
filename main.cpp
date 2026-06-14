#include <iostream>
#include<vector>
using namespace std;
struct Student
{
    string name;
    int score;
};
vector<Student>students;
int choice;

int main()
{
    system("chcp 65001");//解决qt输出乱码问题
    while(true){//循环保证窗口一直存在
    cout<<"请输入您的选项：1.添加。2.显示。3，退出";//cout用法，输出给用户的提示
    cin>>choice;//cin用法，让用户自己选择模式
    switch (choice) {//switch用法，多情况时更简洁，2026.6.14,代码编写人的想法
    case 1:
    {
        string name;
        int score;
        cout<<"输入姓名："; cin>>name;
        cout<<"输入分数："; cin>>score;
        students.push_back({name,score});//将输入的姓名和分数放进列表
        break;//情况一，定义完姓名（字符串类型），score（整型），之后正常cout输出
    }
    case 2:
    {
        for(size_t i=0;i<students.size();i++){
            cout<<"姓名："<<students[i].name<<"分数："<<students[i].score;
        };//for循环打印输出学生姓名分数列表
        break;
    }
    case 3:
        break;//退出
    default:
        break;
    }
    }
    return 0;
}
