/*
*@@@@ 程序作者：胡令 
*@@@@ 完成时间 ：2018/8/20-2018/8/24 
*@@@@ 头文件功能：输出各种操作函数菜单 
*/ 
#ifndef _MENU_
#define _MENU_ 
#include<iostream> 
using namespace std;
/*main打印主菜单函数*/ 
void show_main()
{
    cout<<"\t\t\t\t*----------序列式容器------------*"<<endl;
    cout<<"\t\t\t\t| 1.vector容器使用               |"<<endl;
    cout<<"\t\t\t\t| 2.list容器使用                 |"<<endl;
    cout<<"\t\t\t\t| 3.deque容器使用                |"<<endl;
    cout<<"\t\t\t\t|----------关联式容器------------|"<<endl;
    cout<<"\t\t\t\t| 4.set/multiset容器使用         |"<<endl;
    cout<<"\t\t\t\t| 5.map/multimap容器使用         |"<<endl;
    cout<<"\t\t\t\t|----------特殊容器--------------|"<<endl;
    cout<<"\t\t\t\t| 6.bitset(位集合)容器使用       |"<<endl;
    cout<<"\t\t\t\t| 7.stack容器使用                |"<<endl;
    cout<<"\t\t\t\t| 8.queue容器使用                |"<<endl;
    cout<<"\t\t\t\t| 9.priority_queue(优先队列)使用 |"<<endl;
    cout<<"\t\t\t\t|--------字符串类模板使用--------|"<<endl;
	cout<<"\t\t\t\t| 10.string类使用                |"<<endl; 
	cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0退出): ";
}

/*1.vector容器操作函数菜单*/
void show_vector()
{
	cout<<"\t\t\t\t*-----------vector容器-----------*"<<endl;
    cout<<"\t\t\t\t| 1.vector容器参数显示           |"<<endl;
    cout<<"\t\t\t\t| 2.insert(插入)元素             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(删除)元素             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(清空)容器              |"<<endl;
    cout<<"\t\t\t\t| 5.使用[]、at()访问元素         |"<<endl;
    cout<<"\t\t\t\t| 6.swap(交换)容器内容           |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*2.list容器操作菜单函数*/ 
void show_list()
{
	cout<<"\t\t\t\t*------------list容器------------*"<<endl;
    cout<<"\t\t\t\t| 1.list容器参数显示             |"<<endl;
    cout<<"\t\t\t\t| 2.insert(插入)元素             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(删除)元素             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(清空)容器              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(交换)容器内容           |"<<endl;
    cout<<"\t\t\t\t| 6.sort(排序)容器内容           |"<<endl;
    cout<<"\t\t\t\t| 7.reverse(倒置)容器内容        |"<<endl;
    cout<<"\t\t\t\t| 8.merge(合并)容器内容          |"<<endl;
    cout<<"\t\t\t\t| 9.unique移除容器相同元素       |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*3.deque容器操作函数菜单*/
void show_deque()
{
	cout<<"\t\t\t\t*------------deque容器-----------*"<<endl;
    cout<<"\t\t\t\t| 1.deque容器参数显示            |"<<endl;
    cout<<"\t\t\t\t| 2.insert(插入)元素             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(删除)元素             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(清空)容器              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(交换)容器内容           |"<<endl;
    cout<<"\t\t\t\t| 6.使用[]、.at()访问容器元素    |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";	
}

/*4.set/multiset容器操作函数菜单*/
void show_set()
{
	cout<<"\t\t\t\t*--------set/multiset容器--------*"<<endl;
    cout<<"\t\t\t\t| 1.set/multisetset容器参数显示  |"<<endl;
    cout<<"\t\t\t\t| 2.insert(插入)元素             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(删除)元素             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(清空)容器              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(交换)容器内容           |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*5.map/multimap容器操作函数菜单*/
void show_map()
{
	cout<<"\t\t\t\t*--------map/multimap容器--------*"<<endl;
    cout<<"\t\t\t\t| 1.map/multimap容器参数显示     |"<<endl;
    cout<<"\t\t\t\t| 2.insert(插入)元素             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(删除)元素             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(清空)容器              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(交换)容器内容           |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*6.bitset(位集合)容器操作函数菜单*/
void show_bitset()
{
	cout<<"\t\t\t\t*------------bitset容器-----------*"<<endl;
    cout<<"\t\t\t\t| 1.bitset容器参数显示            |"<<endl;
    cout<<"\t\t\t\t| 2.count()返回值为'1'的位的个数  |"<<endl;
    cout<<"\t\t\t\t| 3.[]操作符遍历容器              |"<<endl;
    cout<<"\t\t\t\t| 4.to_string()以字符显示二进制   |"<<endl;
    cout<<"\t\t\t\t| 5.to_ulong()返回所有位代表的整数|"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*stack容器操作函数菜单*/ 
void show_stack()
{
	cout<<"\t\t\t\t*------------stack容器------------*"<<endl;
    cout<<"\t\t\t\t| 1.stack容器参数显示             |"<<endl;
    cout<<"\t\t\t\t| 2.push()进栈                    |"<<endl;
    cout<<"\t\t\t\t| 3.pop()出栈                     |"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*queue容器操作函数菜单*/ 
void show_queue()
{
	cout<<"\t\t\t\t*------------queue容器------------*"<<endl;
    cout<<"\t\t\t\t| 1.queue容器参数显示             |"<<endl;
    cout<<"\t\t\t\t| 2.push()入队列                  |"<<endl;
    cout<<"\t\t\t\t| 3.pop()出队列                   |"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*priority_queue容器操作函数菜单*/ 
void show_pri_queue()
{
	cout<<"\t\t\t\t*--------priority_queue容器-------*"<<endl;
    cout<<"\t\t\t\t| 1.priority_queue容器参数显示    |"<<endl;
    cout<<"\t\t\t\t| 2.push()入队列                  |"<<endl;
    cout<<"\t\t\t\t| 3.pop()出队列                   |"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}

/*10.string类模板操作菜单函数*/
void show_string()
{
	cout<<"\t\t\t\t*----------string类模板使用------*"<<endl;
    cout<<"\t\t\t\t| 1.string对象参数显示           |"<<endl;
    cout<<"\t\t\t\t| 2.insert(插入)字符             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(删除)字符             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(清空)对象              |"<<endl;
    cout<<"\t\t\t\t| 5.以C_string形式输出对象       |"<<endl;
    cout<<"\t\t\t\t| 6.find(查找)字符               |"<<endl;
    cout<<"\t\t\t\t| 7.compare(比较)对象            |"<<endl;
    cout<<"\t\t\t\t| 8.replace(替换)字符            |"<<endl;
    cout<<"\t\t\t\t| 9.swap(交换)对象               |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"选择将要进行的操作(输入0返回上一级): ";
}
#endif
