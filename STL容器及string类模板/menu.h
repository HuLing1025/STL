/*
*@@@@ �������ߣ����� 
*@@@@ ���ʱ�� ��2018/8/20-2018/8/24 
*@@@@ ͷ�ļ����ܣ�������ֲ��������˵� 
*/ 
#ifndef _MENU_
#define _MENU_ 
#include<iostream> 
using namespace std;
/*main��ӡ���˵�����*/ 
void show_main()
{
    cout<<"\t\t\t\t*----------����ʽ����------------*"<<endl;
    cout<<"\t\t\t\t| 1.vector����ʹ��               |"<<endl;
    cout<<"\t\t\t\t| 2.list����ʹ��                 |"<<endl;
    cout<<"\t\t\t\t| 3.deque����ʹ��                |"<<endl;
    cout<<"\t\t\t\t|----------����ʽ����------------|"<<endl;
    cout<<"\t\t\t\t| 4.set/multiset����ʹ��         |"<<endl;
    cout<<"\t\t\t\t| 5.map/multimap����ʹ��         |"<<endl;
    cout<<"\t\t\t\t|----------��������--------------|"<<endl;
    cout<<"\t\t\t\t| 6.bitset(λ����)����ʹ��       |"<<endl;
    cout<<"\t\t\t\t| 7.stack����ʹ��                |"<<endl;
    cout<<"\t\t\t\t| 8.queue����ʹ��                |"<<endl;
    cout<<"\t\t\t\t| 9.priority_queue(���ȶ���)ʹ�� |"<<endl;
    cout<<"\t\t\t\t|--------�ַ�����ģ��ʹ��--------|"<<endl;
	cout<<"\t\t\t\t| 10.string��ʹ��                |"<<endl; 
	cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0�˳�): ";
}

/*1.vector�������������˵�*/
void show_vector()
{
	cout<<"\t\t\t\t*-----------vector����-----------*"<<endl;
    cout<<"\t\t\t\t| 1.vector����������ʾ           |"<<endl;
    cout<<"\t\t\t\t| 2.insert(����)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(ɾ��)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(���)����              |"<<endl;
    cout<<"\t\t\t\t| 5.ʹ��[]��at()����Ԫ��         |"<<endl;
    cout<<"\t\t\t\t| 6.swap(����)��������           |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*2.list���������˵�����*/ 
void show_list()
{
	cout<<"\t\t\t\t*------------list����------------*"<<endl;
    cout<<"\t\t\t\t| 1.list����������ʾ             |"<<endl;
    cout<<"\t\t\t\t| 2.insert(����)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(ɾ��)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(���)����              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(����)��������           |"<<endl;
    cout<<"\t\t\t\t| 6.sort(����)��������           |"<<endl;
    cout<<"\t\t\t\t| 7.reverse(����)��������        |"<<endl;
    cout<<"\t\t\t\t| 8.merge(�ϲ�)��������          |"<<endl;
    cout<<"\t\t\t\t| 9.unique�Ƴ�������ͬԪ��       |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*3.deque�������������˵�*/
void show_deque()
{
	cout<<"\t\t\t\t*------------deque����-----------*"<<endl;
    cout<<"\t\t\t\t| 1.deque����������ʾ            |"<<endl;
    cout<<"\t\t\t\t| 2.insert(����)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(ɾ��)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(���)����              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(����)��������           |"<<endl;
    cout<<"\t\t\t\t| 6.ʹ��[]��.at()��������Ԫ��    |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";	
}

/*4.set/multiset�������������˵�*/
void show_set()
{
	cout<<"\t\t\t\t*--------set/multiset����--------*"<<endl;
    cout<<"\t\t\t\t| 1.set/multisetset����������ʾ  |"<<endl;
    cout<<"\t\t\t\t| 2.insert(����)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(ɾ��)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(���)����              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(����)��������           |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*5.map/multimap�������������˵�*/
void show_map()
{
	cout<<"\t\t\t\t*--------map/multimap����--------*"<<endl;
    cout<<"\t\t\t\t| 1.map/multimap����������ʾ     |"<<endl;
    cout<<"\t\t\t\t| 2.insert(����)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(ɾ��)Ԫ��             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(���)����              |"<<endl;
    cout<<"\t\t\t\t| 5.swap(����)��������           |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*6.bitset(λ����)�������������˵�*/
void show_bitset()
{
	cout<<"\t\t\t\t*------------bitset����-----------*"<<endl;
    cout<<"\t\t\t\t| 1.bitset����������ʾ            |"<<endl;
    cout<<"\t\t\t\t| 2.count()����ֵΪ'1'��λ�ĸ���  |"<<endl;
    cout<<"\t\t\t\t| 3.[]��������������              |"<<endl;
    cout<<"\t\t\t\t| 4.to_string()���ַ���ʾ������   |"<<endl;
    cout<<"\t\t\t\t| 5.to_ulong()��������λ���������|"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*stack�������������˵�*/ 
void show_stack()
{
	cout<<"\t\t\t\t*------------stack����------------*"<<endl;
    cout<<"\t\t\t\t| 1.stack����������ʾ             |"<<endl;
    cout<<"\t\t\t\t| 2.push()��ջ                    |"<<endl;
    cout<<"\t\t\t\t| 3.pop()��ջ                     |"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*queue�������������˵�*/ 
void show_queue()
{
	cout<<"\t\t\t\t*------------queue����------------*"<<endl;
    cout<<"\t\t\t\t| 1.queue����������ʾ             |"<<endl;
    cout<<"\t\t\t\t| 2.push()�����                  |"<<endl;
    cout<<"\t\t\t\t| 3.pop()������                   |"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*priority_queue�������������˵�*/ 
void show_pri_queue()
{
	cout<<"\t\t\t\t*--------priority_queue����-------*"<<endl;
    cout<<"\t\t\t\t| 1.priority_queue����������ʾ    |"<<endl;
    cout<<"\t\t\t\t| 2.push()�����                  |"<<endl;
    cout<<"\t\t\t\t| 3.pop()������                   |"<<endl;
    cout<<"\t\t\t\t*---------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}

/*10.string��ģ������˵�����*/
void show_string()
{
	cout<<"\t\t\t\t*----------string��ģ��ʹ��------*"<<endl;
    cout<<"\t\t\t\t| 1.string���������ʾ           |"<<endl;
    cout<<"\t\t\t\t| 2.insert(����)�ַ�             |"<<endl;
    cout<<"\t\t\t\t| 3.eracse(ɾ��)�ַ�             |"<<endl;
    cout<<"\t\t\t\t| 4.clear(���)����              |"<<endl;
    cout<<"\t\t\t\t| 5.��C_string��ʽ�������       |"<<endl;
    cout<<"\t\t\t\t| 6.find(����)�ַ�               |"<<endl;
    cout<<"\t\t\t\t| 7.compare(�Ƚ�)����            |"<<endl;
    cout<<"\t\t\t\t| 8.replace(�滻)�ַ�            |"<<endl;
    cout<<"\t\t\t\t| 9.swap(����)����               |"<<endl;
    cout<<"\t\t\t\t*--------------------------------*"<<endl;
	cout<<"ѡ��Ҫ���еĲ���(����0������һ��): ";
}
#endif
