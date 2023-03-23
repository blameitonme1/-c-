#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class user_profile
{
    public:
    enum U_level {beginner,middle,senior,master};//用户的等级。枚举类型
    user_profile(string login,U_level =beginner);//最开始默认设定为beginner。
    user_profile();//重载函数。
    bool operator==(const user_profile&);
    bool operator!=(const user_profile&);
    //输入数据函数。
    string login()const{ return _login;}
    string user_name_()const{ return user_name;}
    int login_count()const{return login_number;}
    int guess_count()const{ return guess_number;}
    int correct_count()const{return correct_number;}
    double percentage_count()const;
    string level_search()const;
    //接下来的函数用来写入数据。
    void reset_login(string &n){_login=n;}
    void reset_username(string &n){ user_name=n;}
    void reset_level(const string&);//这一个函数可能是拿来防范用户不正确输入的。
    void reset_level(U_level newlevel){user_level=newlevel;}//加一个重载函数。
    void reset_login_count(int &n){login_number=n;}
    void reset_guess_count(int &n){guess_number=n;}
    void reset_correct_count(int &n){correct_number=n;}
    void bump_login_count(int val=1){login_number+=val;}//参数还是给个默认值。
    void bump_guess_count(int val=1){guess_number+=val;}
    void bump_correct_count(int val=1){correct_number+=val;}
    private:
    string _login;//登录提示。
    string user_name;
    int login_number;
    int guess_number;
    int correct_number;
    double percentage;//猜对的百分比。
    U_level user_level;
    static map<string,U_level> level_map;
    static void init_map();
};
//开始具体定义函数。
inline double user_profile::percentage_count()
const{
    return guess_number?double(correct_number)/double(guess_number)*100:0.0;//百分比，巧妙地使用到了？：这个式字简化了程序.
}//注意细节问题。
inline user_profile::user_profile(string login,U_level level)//用成员初始化列表。
:_login(login),user_level(level),login_number(1),guess_number(0),correct_number(0)
{

}//这一部分语法上是必要的，不需要写也要保留空括号。//原来这里还少写了一个函数，重载的构造函数！
inline user_profile::user_profile()//用成员初始化列表。
:_login("gest"),user_level(beginner),login_number(1),guess_number(0),correct_number(0){}
inline bool user_profile::operator==(const user_profile &new1)
{
    if(_login == new1._login && user_name==new1.user_name)//注意命名。
    return true;
    return false;
}
inline bool user_profile::operator!=(const user_profile &new1)
{
    return !(*this==new1);//this指针指向函数调用的左值，也即正在编写的这个类。
}
inline string user_profile::level_search()const{
    static string level_table[]={//构造的一个字符串数组。
        "beginner","middle","senior","master"
    };
    return level_table[user_level];//将用户等级以字符串形式返回。
}
ostream& operator<<(ostream&os,const user_profile &new12)//因为没有定义为member function，参数要传递两个等待运算的值。
{
    os<<new12.login()<<' '
    <<new12.level_search()<<' '
    <<new12.login_count()<<' '
    <<new12.guess_count()<<' '
    <<new12.correct_count()<<' '
    <<new12.percentage_count()<<endl;//注意typo的问题。
    return os;
}
map<string,user_profile::U_level>user_profile::level_map;//显示定义。
void user_profile::init_map()
{
    level_map["beginner"]=beginner;//枚举类型。
    level_map["middle"]=middle;
    level_map["senior"]=senior;
    level_map["master"]=master;
}
inline void user_profile::reset_level(const string &n)
{
    map<string,U_level>::iterator it;
    if(level_map.empty())//未初始化。
    init_map();
    //确保用户等级是可以识别的等级，也即在范围之内，
    user_level=((it=level_map.find(n))!=level_map.end()?it->second:beginner);//枚举类型把当成一有标识符的int类型就行了。
}
istream& operator>>(istream&is,user_profile &new1)
{
    string login,level;
    is>>login>>level;
    int ln,gn,cn;
    is>>ln>>gn>>cn;
    new1.reset_login(login);
    new1.reset_level(level);
    new1.reset_login_count(ln);
    new1.reset_guess_count(gn);
    new1.reset_correct_count(cn);
    return is;//方便继续输入。接连右边剩下的>>符号
}
int main()
{
    user_profile anno;
    cout<<anno<<"\n";
    user_profile anno_too;
    cout<<anno_too<<"\n";
    user_profile anna("annal",user_profile::master);
    cout<<anna<<"\n";
    anna.bump_guess_count(27);
    anna.bump_correct_count(25);
    anna.bump_login_count();
    cout<<anna<<"\n";
    cin>>anno;
    cout<<anno<<"\n";
    getchar();
    getchar();
    return 0;

}


