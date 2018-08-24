/*
*@@@@ 程序作者：胡令 
*@@@@ 完成时间 ：2018/8/20-2018/8/24 
*@@@@ 头文件功能：各种操作函数
*/ 
#ifndef _OPERATION_
#define _OPERATION_ 
#pragma warning(disable:4786)
#include<stdlib.h> 
//序列式容器
#include<vector>
#include<list>
#include<deque>
//关联式容器
#include<set>
#include<map>
//特殊容器
#include<stack>
#include<bitset>
#include<queue>
//字符类
#include<string>

/*包含操作菜单函数头文件*/
#include"menu.h"


/*vector容器使用*/
void opra_vector()
{
	vector<char> V1,V2;
	cout<<"初始化容器V1:"<<endl;
	cout<<"输入要录入的元素个数：";
	int num;
	char temp;
	cin>>num;
	cin.get();
	cout<<"请输入"<<num<<"个数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		V1.push_back(temp);
	} 
	cout<<"初始化容器V2:"<<endl;
	cout<<"输入要录入的元素个数：";
	cin>>num;
	cin.get();
	cout<<"请输入"<<num<<"个数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		V2.push_back(temp);
	} 
	vector<char> V3(V1),V4(V2);		//使用V1,V2来初始化V3,V4 
	system("cls"); 
	while(1)
	{
		show_vector(); 
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				vector<char>::iterator it;
				cout<<"容器V1参数如下:"<<endl;
				cout<<"V1.size():"<<V1.size()<<endl;
				cout<<"容器内容:";
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"容器V2参数如下:"<<endl;
				cout<<"V2.size():"<<V2.size()<<endl;
				cout<<"容器内容:";
				for(it=V2.begin();it!=V2.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//插入元素 
				vector<char>::iterator it;
				cout<<"输入要插入的字符：";
				char temp;
				cin>>temp;
				cin.get();
				V1.insert(V1.end(),temp);
				cout<<"V1末尾插入字符后：";
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"V1末尾插入V2所以元素后：";
				V1.insert(V1.end(),V2.begin(),V2.end());
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//删除元素 
				vector<char>::iterator it;
				cout<<"V1删除V1.begin()位置元素后：";
				V1.erase(V1.begin());
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"V2删除++V2.begin()到--V2.end()范围内的元素后：";
				V2.erase(++V2.begin(),--V2.end());
				for(it=V2.begin();it!=V2.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//清空元素 
				vector<char>::iterator it;
				V1.clear();
				cout<<"清空完成";
				cout<<"V1:";
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//访问元素 
				cout<<"使用[]访问容器V1结果：";
				int t=V1.size();
				for(int i=0;i<t;i++)
					cout<<V1[i]<<" ";
				cout<<endl;
				cout<<"使用.at()访问容器V2结果：";
				t=V2.size();
				for(int i=0;i<t;i++)
					cout<<V2.at(i)<<" ";
				cout<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 6:{	//容器交换 
				V1.swap(V2);
				cout<<"V1和V2交换完成！"<<endl;
				cout<<"V1:";
				vector<char>::iterator it;
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"V2:";
				for(it=V2.begin();it!=V2.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
		}
		V3=V1,V4=V2;
		system("cls");
	}	
}

/*list容器使用*/
void opra_list()
{
	list<char> L1,L2,L3,L4;
	char temp;
	int num;
	cout<<"输入L1要录入的元素个数：";
	cin>>num;
	cin.get();
	cout<<"输入L1的数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		L1.push_front(temp);		//插入到L1首端 
	}
	cout<<"输入L2要录入的元素个数：";
	cin>>num;
	cin.get();
	cout<<"输入L2的数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		L2.push_back(temp);			//插入到L2尾端 
	}
	L3=L1;							//保留初始值 
	L4=L2; 
	system("cls");
	while(1)
	{
		show_list();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				list<char>::iterator it;
				cout<<"L1.size():"<<L1.size()<<endl;
				cout<<"L2.size():"<<L2.size()<<endl;
				cout<<"L1(使用push_front):";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"L2(使用push_back):";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//插入 
				char temp;
				int num;
				cout<<"输入要插入的字符：";
				cin>>temp;
				cin.get();
				cout<<"输入要插入的数量：";
				cin>>num;
				cin.get();
				L1.insert(--L1.end(),temp);
				L2.insert(++L2.begin(),num,temp);
				cout<<"在L1的--L1.end()位置插入一个"<<temp<<"的结果：";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"在L2的++L2.begin()位置插入"<<num<<"个"<<temp<<"的结果：";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L3.insert(--L3.end(),L4.begin(),L4.end());
				cout<<"在L1的--L1.end()位置插入L2的结果：";
				for(it=L3.begin();it!=L3.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//删除 
				L1.erase(++L1.begin());
				cout<<"删除L1的++L1.begin()位置后的结果：";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L2.erase(++L2.begin(),--L2.end());
				cout<<"删除L2的++L2.begin()到--L2.end()范围内的元素结果：";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//清空 
				cout<<"清空前的L1:"; 
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.clear();
				cout<<"清空后的L1:";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//交换 
				cout<<"交换前的L1：";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"交换前的L2：";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.swap(L2);	//交换 
				cout<<"\n交换后的L1：";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"交换后的L2：";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 6:{	//排序 
				L1.sort();
				cout<<"L1按默认(从小到大)排序结果:";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.sort(greater<char>());
				cout<<"L1按greater<char>()规则(从小到大)排序结果:";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 7:{	//倒置 
				cout<<"倒置前的L1：";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.reverse();			//倒置
				cout<<"倒置后的L1：";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 8:{	//合并 
				L1.merge(L2);
				cout<<"L1和L2合并过后的结果：";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 9:{	//移除相同元素 
				cout<<"移除相同元素之前L1:";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.unique();			//移除相同元素
				cout<<"移除相同元素之后L1:";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
		}
		L3=L1;							
		L4=L2;	
		system("cls"); 
	} 
}


/*deque容器使用*/
void opra_deque()
{
	deque<char> D1,D2,D3,D4;
	int num;
	char temp;
	cout<<"输入D1要录入的元素个数：";
	cin>>num;
	cin.get();
	cout<<"输入D1的数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		D1.push_back(temp);
	} 
	cout<<"输入D2要录入的元素个数：";
	cin>>num;
	cin.get();
	cout<<"输入D2的数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		D2.push_front(temp);
	} 
	D3=D1;			//保留原始数据 
	D4=D2;
	system("cls");
	while(1)
	{
		show_deque();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				deque<char>::iterator it;
				cout<<"D1.size():"<<D1.size()<<endl;
				cout<<"D1(push_back):";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"D2.size():"<<D2.size()<<endl;
				cout<<"D2(push_front):";
				for(it=D2.begin();it!=D2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			} 
			case 2:{	//插入 
				deque<char>::iterator it;
				cout<<"输入要插入的字符：";
				char temp;
				cin>>temp;
				cin.get();
				cout<<"输入要插入的数量：";
				int num;
				cin>>num;
				cin.get();
				D1.insert(D1.begin()+3,temp); 
				cout<<"在D1的D1.begin()+3的位置插入一个"<<temp<<"的结果:"; 
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1=D3;
				D1.insert(D1.end()-2,num,temp);
				cout<<"在D1的D1.end()-2的位置插入"<<num<<"个"<<temp<<"的结果:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1=D3;
				D1.insert(D1.begin()+2,D2.begin()+1,D2.end()-1);
				cout<<"在D1的D1.begin()+2的位置插入D2的D2.begin+1到D2.end()-1范围元素后的结果:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			} 
			case 3:{	//删除 
				deque<char>::iterator it;
				D1.erase(D1.begin()+3);
				cout<<"D1删除D1.begin()+3位置的元素过后的结果:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D2.erase(D2.begin()+2,D2.end()-2);
				cout<<"\nD2删除D2.begin()+2到D2.end()-2位置的范围元素过后的结果:";
				for(it=D2.begin();it!=D2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			} 
			case 4:{	//清空 
				deque<char>::iterator it;
				cout<<"D1清空前:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1.clear();				//清空 
				cout<<"D1清空后:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			} 
			case 5:{	//交换 
				deque<char>::iterator it;	
				cout<<"交换前:"<<endl;
				cout<<"D1:"; 
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"D2:"; 
				for(it=D2.begin();it!=D2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1.swap(D2);			//交换
				cout<<"\n交换后:"<<endl;
				cout<<"D1:"; 
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"D2:"; 
				for(it=D2.begin();it!=D2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			} 
			case 6:{	//访问 
				int t=D1.size();
				cout<<"使用[]操作符访问D1容器的结果：";
				for(int i=0;i<t;i++)
					cout<<D1[i]<<" ";
				cout<<endl;
				t=D2.size();
				cout<<"使用.at()访问容器D2的结果：";
				for(int i=0;i<t;i++)
					cout<<D2.at(i)<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			} 
		}
		D1=D3;
		D2=D4;
		system("cls"); 
	}
	
}

/*set/multiset容器使用*/
void opra_set()
{
	set<char,less<char> > S1;
	multiset<char,greater<char> > S2;
	set<char,less<char> > S3;
	multiset<char,greater<char> > S4;
	int num;
	char temp;
	cout<<"输入S1要录入的元素个数：";
	cin>>num;
	cin.get();
	cout<<"输入S1的数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;					//因为容器每录入一个元素，都会就行排序，故： 
		S1.insert(temp);			//set容器只提供insert(插入)操作就行初始化容器 
	}
	cout<<"输入S2要录入的元素个数：";
	cin>>num;
	cin.get();
	cout<<"输入S2的数据：";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		S2.insert(temp);
	}
	S3=S1;				//保留原始数据 
	S4=S2;
	system("cls");
	while(1)
	{
		show_set();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				set<char>::iterator itA;
				multiset<char>::iterator itB;
				cout<<"S1.size():"<<S1.size()<<endl;
				cout<<"S1.count('4'):"<<S1.count('4')<<endl;	//统计字符'4'出现的次数
				cout<<"S1(set):(less<char>()规则) ";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"S2.size():"<<S2.size()<<endl;
				cout<<"S2.count('6'):"<<S2.count('6')<<endl;	//统计字符'6'出现的次数 
				cout<<"S2(multiset):(greater<char>()规则) ";
				for(itB=S2.begin();itB!=S2.end();itB++)
					cout<<*itB<<" ";
				cout<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//插入 
				set<char>::iterator itA;
				multiset<char>::iterator itB;
				cout<<"输入要插入到S1的字符：";
				char temp;
				cin>>temp;
				cin.get();
				pair<set<char>::iterator,bool> mypair;
				mypair=S1.insert(temp);
				cout<<"插入返回值1(iterator):"<<*mypair.first<<endl;
				cout<<"插入返回值2(bool):"<<mypair.second<<endl;
				cout<<"插入位置距S1.begin():"<<distance(S1.begin(),mypair.first);
				cout<<"插入字符后的S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S2.insert(++S4.begin(),--S4.end());		//插入一个范围 
				cout<<"\n在S2中插入++S4.begin()到++S4.end()范围的元素后的结果(其中S4==S2):";
				for(itB=S2.begin();itB!=S2.end();itB++)
					cout<<*itB<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//删除 
				set<char>::iterator itA;
				multiset<char>::iterator itB;
				S1.erase(++S1.begin());					//1.删除迭代器指定元素 
				cout<<"删除++S1.begin()位置元素过后：";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S2.erase(++S2.begin(),--S2.end());		//2.删除一个范围所有元素 
				cout<<"删除++S2.begin()到--S2.end()范围元素过后:";
				for(itB=S2.begin();itB!=S2.end();itB++)
					cout<<*itB<<" ";
				cout<<endl;
				S3.erase('5');							//3.删除字符为'5'的元素 
				cout<<"S1删除Key=='5'的元素:";
				for(itA=S3.begin();itA!=S3.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//清空 
				set<char>::iterator itA;
				cout<<"清空前S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S1.clear();			//清空
				cout<<"清空后S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//交换 
				set<char>::iterator itA;
				set<char,less<char> > S_temp;
				for(itA=S1.begin();itA!=S1.end();itA++)
					S_temp.insert(*itA+2);
				cout<<"交换前的S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"交换前的S_temp:";
				for(itA=S_temp.begin();itA!=S_temp.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S1.swap(S_temp);			//交换
				cout<<"交换后的S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"交换后的S_temp:";
				for(itA=S_temp.begin();itA!=S_temp.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
		}
		S1=S3;
		S2=S4;
		system("cls");	
	} 
}

/*map/multimap容器使用*/
void opra_map()
{
	map<char,char,less<char> > M1;
	multimap<char,char,greater<char> > M2;
	map<char,char,less<char> > M3;
	multimap<char,char,greater<char> > M4;
	pair<char,char> t_pair;
	int num;
	cout<<"输入M1要录入的数据个数：";
	cin>>num;
	cin.get();
	cout<<"依次输入数据对的Key和Value："<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>t_pair.first;
		cin>>t_pair.second;
		M1.insert(t_pair);
	}
	cout<<"输入M2要录入的数据个数：";
	cin>>num;
	cin.get();
	cout<<"依次输入数据对的Key和Value："<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>t_pair.first;
		cin>>t_pair.second;
		M2.insert(t_pair);
	}
	M3=M1;			//保留原始数据 
	M4=M2;
	system("cls");
	while(1)
	{
		show_map();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				map<char,char,less<char> >::iterator itA;
				multimap<char,char,greater<char> >::iterator itB;
				cout<<"M1.size():"<<M1.size()<<endl;
				cout<<"M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"M2.size():"<<M2.size()<<endl;
				cout<<"M2(multimap/greater<char>):"<<endl;
				for(itB=M2.begin();itB!=M2.end();itB++)
					cout<<(*itB).first<<" "<<(*itB).second<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//插入 
				map<char,char,less<char> >::iterator itA;
				multimap<char,char,greater<char> >::iterator itB;
				map<char,char,less<char> > t_M;
				pair<char,char> t_pair;
				for(itA=M1.begin();itA!=M1.end();itA++)
				{
					t_pair=*itA;
					t_pair.first+='A';
					t_M.insert(t_pair);
				}
				cout<<"输入要插入的Key和Value：";
				cin>>t_pair.first;
				cin>>t_pair.second;
				cin.get();
				M1.insert(++M1.begin(),t_pair);
				cout<<"插入后的M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M1=M3;
				M1.insert(t_M.begin(),t_M.end());
				cout<<"\n待插入的t_M："<<endl;
				for(itA=t_M.begin();itA!=t_M.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"插入t_M.begin()到t_M.end()范围元素后的M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//删除 
				map<char,char,less<char> >::iterator itA;
				multimap<char,char,greater<char> >::iterator itB;
				M1.erase(++M1.begin());
				cout<<"M1删除--M1.begin()位置元素过后的结果："<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M2.erase(++M2.begin(),--M2.end());
				cout<<"M2删除++M2.begin()到--M2.end()范围元素过后的结果："<<endl;
				for(itB=M2.begin();itB!=M2.end();itB++)
					cout<<(*itB).first<<" "<<(*itB).second<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//清空 
				map<char,char,less<char> >::iterator itA;
				cout<<"清空前M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M1.clear();				//清空
				cout<<"清空后M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//交换 
				map<char,char,less<char> >::iterator itA;
				map<char,char,less<char> > t_M;
				pair<char,char> t_pair;
				for(itA=M1.begin();itA!=M1.end();itA++)
				{
					t_pair=*itA;
					t_pair.second+='A';
					t_M.insert(t_pair);
				}
				cout<<"交换前M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"交换前t_M(map/less<char>):"<<endl;
				for(itA=t_M.begin();itA!=t_M.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M1.swap(t_M);			//交换
				cout<<"交换后M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"交换后t_M(map/less<char>):"<<endl;
				for(itA=t_M.begin();itA!=t_M.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
		}
		M1=M3;
		M2=M4;
		system("cls");
	}
}

/*bitset容器使用*/
void opra_bitset()
{
	bitset<16> B1,B2;
	cout<<"输入要录入的十进制数：";
	int temp;
	cin>>temp;
	cin.get();
	B1=temp;
	B2=B1;
	system("cls");
	while(1)
	{
		show_bitset();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				cout<<"B1.size():"<<B1.size()<<endl;
				cout<<"B1(16位):";
				int temp=B1.size();
				for(int i=temp-1;i>=0;i--)
					cout<<B1[i];
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//返回'1'的位数 
				int num=B1.count();
				cout<<"B1中为1的共有"<<num<<"个"<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//[]遍历容器 
				cout<<"使用[]遍历容器B1：";
				int temp=B1.size();
				for(int i=temp-1;i>=0;i--)
					cout<<B1[i];
				cout<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//二进制 
				cout<<"B1以字符形式输出其二进制为："<<B1.to_string()<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//十进制 
				cout<<"B1所有位代表的十进制数为："<<B1.to_ulong()<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}	
		}
		B1=B2;
		system("cls");
	}	
}

/*stack容器使用*/
void opra_stack()
{
	stack<char> S;
	while(1)
	{
		show_stack();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				cout<<"S.zize():"<<S.size()<<endl;
				if(!S.empty())
					cout<<"S.top():"<<S.top()<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//进栈 
				cout<<"输入进栈元素(以.结束输入)：";
				char temp;
				while(1)
				{
					cin>>temp;
					if(temp!='.')
						S.push(temp);
					else break;
				}
				cin.get();
				cout<<"\n进栈成功！"<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//出栈 
				cout<<"输入出栈次数：";
				int num;
				cin>>num;
				cin.get();
				if(num>S.size())
				{
					cout<<"错误！"<<endl;
					cin.get();
					break; 
				}
				while(num--)	S.pop();
				cout<<"\n出栈成功！"<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
		}
		system("cls");
	} 
}

/*queue容器使用*/
void opra_queue()
{
	queue<char> Q;
	while(1)
	{
		show_queue();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				cout<<"Q.zize():"<<Q.size()<<endl;
				if(!Q.empty())
					cout<<"Q.front():"<<Q.front()<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//入队列 
				cout<<"输入入队列元素(以.结束输入)：";
				char temp;
				while(1)
				{
					cin>>temp;
					if(temp!='.')
						Q.push(temp);
					else break;
				}
				cin.get();
				cout<<"\n入队列成功！"<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//出队列  
				cout<<"输入出队列次数：";
				int num;
				cin>>num;
				cin.get();
				if(num>Q.size())
				{
					cout<<"错误！"<<endl;
					cin.get();
					break; 
				}
				while(num--)	Q.pop();
				cout<<"\n出队列成功！"<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
		}
		system("cls");
	} 
}

/*prioruty_queue(优先队列)容器使用*/
void opra_pri_queue()
{
	priority_queue<char> Q;
	while(1)
	{
		show_pri_queue();
		int chooce;
		cin>>chooce;
		cin.get();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				cout<<"Q.zize():"<<Q.size()<<endl;
				if(!Q.empty())
					cout<<"Q.top()(内部以进行排序,默认排序规则):"<<Q.top()<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//入队列 
				cout<<"输入入队列元素(以.结束输入)：";
				char temp;
				while(1)
				{
					cin>>temp;
					if(temp!='.')
						Q.push(temp);
					else break;
				}
				cin.get();
				cout<<"\n入队列成功！"<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//出队列  
				cout<<"输入出队列次数：";
				int num;
				cin>>num;
				cin.get();
				if(num>Q.size())
				{
					cout<<"错误！"<<endl;
					cin.get();
					break; 
				}
				while(num--)	Q.pop();
				cout<<"\n出队列成功！"<<endl;
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
		}
		system("cls");
	} 
}

/*string类模板使用*/
void opra_string()
{
	string s1,s2,s3,s4;
	cout<<"输入对象s1: ";
	getline(cin,s1);
	cout<<"输入对象s2: ";
	getline(cin,s2);
	system("cls"); 
	s3=s1;		//保留s1,s2的初始值 
	s4=s2;
	while(1)
	{
		show_string();
		int chooce;
		cin>>chooce;
		cin.ignore();
		system("cls");
		if(chooce==0)	break;
		switch(chooce)
		{
			case 1:{	//参数显示 
				cout<<"s1："<<s1<<endl;
				cout<<"s2："<<s2<<endl;
				cout<<"s1.size()："<<s1.size()<<endl;
				cout<<"s2.size()："<<s2.size()<<endl;
				cout<<"s1.length()："<<s1.length()<<endl;
				cout<<"s2.length()："<<s2.length()<<endl;
				cout<<"s1+s2："<<s1+s2<<endl; 
				cout<<"\n任意键返回上一级!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//插入 
				int address;
				string temp;
				cout<<"s1："<<s1<<endl;
				cout<<"输入s1要插入的元素下标位置：";
				cin>>address;
				cin.get();
				cout<<"输入要插入的内容：";
				getline(cin,temp);
				s1.insert(address,temp);
				cout<<"插入操作完成过后，s1:"<<s1<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get();
				break;
			}
			case 3:{	//删除 
				cout<<"s1："<<s1<<endl;
				cout<<"输入开始删除的元素下标位置：" ;
				int address;
				cin>>address;
				cin.get();
				s1.erase(address);
				cout<<"删除操作完成过后，s1:"<<s1<<endl; 
				cout<<endl;
				s1=s3;
				s1.erase(s1.begin());
				cout<<"s1删除第一个元素后，s1:"<<s1<<endl;
				s1=s3;
				s1.erase(--s1.end());
				cout<<"删除最后一个元素，s1:"<<s1<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get(); 
				break;
			}
			case 4:{	//清空 
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				s1.clear();
				s2.clear(); 
				cout<<"s1,s2对象完成清空操作!"<<endl;
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				cout<<"s1.size()："<<s1.size()<<endl;
				cout<<"s2.size()："<<s2.size()<<endl;
				cout<<"s1.length()："<<s1.length()<<endl;
				cout<<"s2.length()："<<s2.length()<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get();
				break;
			}
			case 5:{	//C_string输出 
				cout<<"s1按C_string形式输出："<<s1.c_str()<<endl;
				cout<<"s2按C_string形式输出："<<s2.c_str()<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get();
				break;
			}
			case 6:{	//查找 
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				cout<<"搜索字符："<<endl;
				cout<<"请输入在s1中被搜索的字符：";
				char temp_ch;
				cin>>temp_ch;
				cin.get();
				string temp_str;
				cout<<"搜索字符串："<<endl;
				cout<<"请输入在s2中被搜索的字符串：";
				getline(cin,temp_str);
				int m,n;
				m=s1.find(temp_ch,0);
				n=s2.find(temp_str,0);
				cout<<"搜索结果："<<endl; 
				cout<<"字符"<<temp_ch<<"在s1中出现的位置："<<m<<endl;
				cout<<"字符串"<<temp_str<<"在s2中出现的位置："<<n<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get();
				break;
			}
			case 7:{	//比较 
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				int t=s1.compare(s2);
				if(t<0)
					cout<<"s1<s2"<<endl;
				else if(t==0)
					cout<<"s1=s2"<<endl;
				else
					cout<<"s1>s2"<<endl;
				int addr_pre1,addr_pre2,addr_end1,addr_end2;
				cout<<"输入s1的初始位置和末位置(以空格间隔)：";
				cin>>addr_pre1>>addr_end1;
				cin.get();
				cout<<"输入s2的初始位置和末位置(以空格间隔)：";
				cin>>addr_pre2>>addr_end2;
				cin.get();
				int n=s1.compare(addr_pre1,addr_end1,s2,addr_pre2,addr_end2);	
				if(n==0)
					cout<<"s1["<<addr_pre1<<"]->s1["<<addr_end1<<"]==s2["<<addr_pre2<<"]->s2["<<addr_end2<<"]"<<endl;
				else if(n<0)
					cout<<"s1["<<addr_pre1<<"]->s1["<<addr_end1<<"]<s2["<<addr_pre2<<"]->s2["<<addr_end2<<"]"<<endl;	
				else
					cout<<"s1["<<addr_pre1<<"]->s1["<<addr_end1<<"]>s2["<<addr_pre2<<"]->s2["<<addr_end2<<"]"<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get();
				break;
			}
			case 8:{	//替换 
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				int addr_pre,addr_end,size,count;
				char temp_ch; 
				cout<<"输入要替换的字符：";
				cin>>temp_ch;
				cin.get();
				cout<<"输入要替换字符的个数：";
				cin>>count;
				cin.get(); 
				cout<<"输入s1要替换的位置和长度(以空格隔开)：";
				cin>>addr_pre>>size;
				cin.get();
				s1.replace(addr_pre,size,count,temp_ch);
				string temp_str;
				cout<<"\n输入要插入的字符串：";
				getline(cin,temp_str);
				cout<<"输入s2要替换的位置和长度(以空格隔开)：";
				cin>>addr_pre>>size;
				cout<<"输入替换字符串的字串位置和长度(以空格隔开)：";
				int address,length;
				cin>>address>>length;
				cin.get();
				s2.replace(addr_pre,size,temp_str.c_str(),address,length);
				cout<<"完成替换后的s1:"<<s1<<endl;
				cout<<"完成替换过后的s2："<<s2<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get();
				break;
			}case 9:{	//交换 
				cout<<"交换之前："<<endl;
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				s1.swap(s2);
				cout<<"交换之后："<<endl;
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				cout<<"\n任意键返回上一级!"<<endl;
				cin.get();
				break;
			}
		}
		s1=s3;		//原始数据恢复 
		s2=s4;
		system("cls");
	}
	system("cls");
}
#endif
