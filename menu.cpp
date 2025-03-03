#include "main.h"
using namespace std;

void print_dividerstar(){ cout<<"***************************************************************"; }
void print_shortstar(){ cout<<"***************"; }
void print_longstar(){ cout<<"*********************"; }
void print_itemdot(){ cout<<"\t^ "; }
void print_commandsign(){ cout<<"\t$ ";}
void print_slowdot(){ for(int i=1;i<=3;++i){ cout<<"."; Sleep(500);} cout<<endl;}

int tryPasswordCount = 0;// 登录失败计数

void print_welcome_logo(){
    cout<<"      ___           ___           ___       ___           ___           ___           ___     "<<endl;
    cout<<"     /\\__\\         /\\  \\         /\\__\\     /\\  \\         /\\  \\         /\\__\\         /\\  \\    "<<endl;
    cout<<"    /:/ _/_       /::\\  \\       /:/  /    /::\\  \\       /::\\  \\       /::|  |       /::\\  \\   "<<endl;
    cout<<"   /:/ /\\__\\     /:/\\:\\  \\     /:/  /    /:/\\:\\  \\     /:/\\:\\  \\     /:|:|  |      /:/\\:\\  \\  "<<endl;
    cout<<"  /:/ /:/ _/_   /::\\~\\:\\  \\   /:/  /    /:/  \\:\\  \\   /:/  \\:\\  \\   /:/|:|__|__   /::\\~\\:\\  \\ "<<endl;
    cout<<" /:/_/:/ /\\__\\ /:/\\:\\ \\:\\__\\ /:/__/    /:/__/ \\:\\__\\ /:/__/ \\:\\__\\ /:/ |::::\\__\\ /:/\\:\\ \\:\\__\\"<<endl;
    cout<<" \\:\\/:/ /:/  / \\:\\~\\:\\ \\/__/ \\:\\  \\    \\:\\  \\  \\/__/ \\:\\  \\ /:/  / \\/__/~~/:/  / \\:\\~\\:\\ \\/__/"<<endl;
    cout<<"  \\::/_/:/  /   \\:\\ \\:\\__\\    \\:\\  \\    \\:\\  \\        \\:\\  /:/  /        /:/  /   \\:\\ \\:\\__\\  "<<endl;
    cout<<"   \\:\\/:/  /     \\:\\ \\/__/     \\:\\  \\    \\:\\  \\        \\:\\/:/  /        /:/  /     \\:\\ \\/__/  "<<endl;
    cout<<"    \\::/  /       \\:\\__\\        \\:\\__\\    \\:\\__\\        \\::/  /        /:/  /       \\:\\__\\    "<<endl;
    cout<<"     \\/__/         \\/__/         \\/__/     \\/__/         \\/__/         \\/__/         \\/__/    "<<endl;
}

void print_greeting_menu(){
    string password;

    print_welcome_logo();
    print_longstar(); cout<<"欢迎进入学生管理系统"; print_longstar(); cout<<endl;
    print_itemdot(); cout<<"Made by noone & xjs114 & 001Pro-Max & shingosen"<<endl;
    print_itemdot(); cout<<"当前系统时间是:  "; cout << get_time();
    print_itemdot(); cout<<"进入该系统设有密码,只有"<<TryPasswordTimes<<"次机会"<<endl;
    print_itemdot(); cout<<"请注意喵,登录密码为: "<<TruePassword<<endl;
    print_itemdot(); cout<<"请输入密码谢谢喵:"; cin>>password; check_loginPW(password);
}

void print_MAIN_menu(){
    char chooseItemId;

    print_dividerstar(); cout<<endl;
    print_longstar(); cout<<"欢迎来到-学生管理系统"; print_longstar(); cout<<endl; print_dividerstar(); cout<<endl;
    print_shortstar(); cout<<"\t\t1 创建学生信息\t\t"; print_shortstar(); cout<<endl;
    print_shortstar(); cout<<"\t\t2 显示学生信息\t\t"; print_shortstar(); cout<<endl;
    print_shortstar(); cout<<"\t\t3 排序学生信息\t\t"; print_shortstar(); cout<<endl;
    print_shortstar(); cout<<"\t\t4 查询学生信息\t\t"; print_shortstar(); cout<<endl;
    print_shortstar(); cout<<"\t\t5 删除学生信息\t\t"; print_shortstar(); cout<<endl;
    print_shortstar(); cout<<"\t\t6 修改学生信息\t\t"; print_shortstar(); cout<<endl;
    print_shortstar(); cout<<"\t\t0 成功退出系统\t\t"; print_shortstar(); cout<<endl;
    print_dividerstar(); cout<<endl; print_dividerstar(); cout<<endl;

    print_itemdot(); cout<<"请输入您想要完成的操作:";
    cin>>chooseItemId;
    choose_fuc(chooseItemId);
}

