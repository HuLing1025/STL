/*
*@@@@ �������ߣ����� 
*@@@@ ���ʱ�� ��2018/8/20-2018/8/24 
*@@@@ ͷ�ļ����ܣ����ֲ�������
*/ 
#ifndef _OPERATION_
#define _OPERATION_ 
#pragma warning(disable:4786)
#include<stdlib.h> 
//����ʽ����
#include<vector>
#include<list>
#include<deque>
//����ʽ����
#include<set>
#include<map>
//��������
#include<stack>
#include<bitset>
#include<queue>
//�ַ���
#include<string>

/*���������˵�����ͷ�ļ�*/
#include"menu.h"


/*vector����ʹ��*/
void opra_vector()
{
	vector<char> V1,V2;
	cout<<"��ʼ������V1:"<<endl;
	cout<<"����Ҫ¼���Ԫ�ظ�����";
	int num;
	char temp;
	cin>>num;
	cin.get();
	cout<<"������"<<num<<"�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		V1.push_back(temp);
	} 
	cout<<"��ʼ������V2:"<<endl;
	cout<<"����Ҫ¼���Ԫ�ظ�����";
	cin>>num;
	cin.get();
	cout<<"������"<<num<<"�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		V2.push_back(temp);
	} 
	vector<char> V3(V1),V4(V2);		//ʹ��V1,V2����ʼ��V3,V4 
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
			case 1:{	//������ʾ 
				vector<char>::iterator it;
				cout<<"����V1��������:"<<endl;
				cout<<"V1.size():"<<V1.size()<<endl;
				cout<<"��������:";
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"����V2��������:"<<endl;
				cout<<"V2.size():"<<V2.size()<<endl;
				cout<<"��������:";
				for(it=V2.begin();it!=V2.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//����Ԫ�� 
				vector<char>::iterator it;
				cout<<"����Ҫ������ַ���";
				char temp;
				cin>>temp;
				cin.get();
				V1.insert(V1.end(),temp);
				cout<<"V1ĩβ�����ַ���";
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"V1ĩβ����V2����Ԫ�غ�";
				V1.insert(V1.end(),V2.begin(),V2.end());
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//ɾ��Ԫ�� 
				vector<char>::iterator it;
				cout<<"V1ɾ��V1.begin()λ��Ԫ�غ�";
				V1.erase(V1.begin());
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"V2ɾ��++V2.begin()��--V2.end()��Χ�ڵ�Ԫ�غ�";
				V2.erase(++V2.begin(),--V2.end());
				for(it=V2.begin();it!=V2.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//���Ԫ�� 
				vector<char>::iterator it;
				V1.clear();
				cout<<"������";
				cout<<"V1:";
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//����Ԫ�� 
				cout<<"ʹ��[]��������V1�����";
				int t=V1.size();
				for(int i=0;i<t;i++)
					cout<<V1[i]<<" ";
				cout<<endl;
				cout<<"ʹ��.at()��������V2�����";
				t=V2.size();
				for(int i=0;i<t;i++)
					cout<<V2.at(i)<<" ";
				cout<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 6:{	//�������� 
				V1.swap(V2);
				cout<<"V1��V2������ɣ�"<<endl;
				cout<<"V1:";
				vector<char>::iterator it;
				for(it=V1.begin();it!=V1.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"V2:";
				for(it=V2.begin();it!=V2.end();it++)
					cout<<*it<<" ";
				cout<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
		}
		V3=V1,V4=V2;
		system("cls");
	}	
}

/*list����ʹ��*/
void opra_list()
{
	list<char> L1,L2,L3,L4;
	char temp;
	int num;
	cout<<"����L1Ҫ¼���Ԫ�ظ�����";
	cin>>num;
	cin.get();
	cout<<"����L1�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		L1.push_front(temp);		//���뵽L1�׶� 
	}
	cout<<"����L2Ҫ¼���Ԫ�ظ�����";
	cin>>num;
	cin.get();
	cout<<"����L2�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		L2.push_back(temp);			//���뵽L2β�� 
	}
	L3=L1;							//������ʼֵ 
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
			case 1:{	//������ʾ 
				list<char>::iterator it;
				cout<<"L1.size():"<<L1.size()<<endl;
				cout<<"L2.size():"<<L2.size()<<endl;
				cout<<"L1(ʹ��push_front):";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"L2(ʹ��push_back):";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//���� 
				char temp;
				int num;
				cout<<"����Ҫ������ַ���";
				cin>>temp;
				cin.get();
				cout<<"����Ҫ�����������";
				cin>>num;
				cin.get();
				L1.insert(--L1.end(),temp);
				L2.insert(++L2.begin(),num,temp);
				cout<<"��L1��--L1.end()λ�ò���һ��"<<temp<<"�Ľ����";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"��L2��++L2.begin()λ�ò���"<<num<<"��"<<temp<<"�Ľ����";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L3.insert(--L3.end(),L4.begin(),L4.end());
				cout<<"��L1��--L1.end()λ�ò���L2�Ľ����";
				for(it=L3.begin();it!=L3.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//ɾ�� 
				L1.erase(++L1.begin());
				cout<<"ɾ��L1��++L1.begin()λ�ú�Ľ����";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L2.erase(++L2.begin(),--L2.end());
				cout<<"ɾ��L2��++L2.begin()��--L2.end()��Χ�ڵ�Ԫ�ؽ����";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//��� 
				cout<<"���ǰ��L1:"; 
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.clear();
				cout<<"��պ��L1:";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//���� 
				cout<<"����ǰ��L1��";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"����ǰ��L2��";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.swap(L2);	//���� 
				cout<<"\n�������L1��";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"�������L2��";
				for(it=L2.begin();it!=L2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 6:{	//���� 
				L1.sort();
				cout<<"L1��Ĭ��(��С����)������:";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.sort(greater<char>());
				cout<<"L1��greater<char>()����(��С����)������:";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 7:{	//���� 
				cout<<"����ǰ��L1��";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.reverse();			//����
				cout<<"���ú��L1��";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 8:{	//�ϲ� 
				L1.merge(L2);
				cout<<"L1��L2�ϲ�����Ľ����";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 9:{	//�Ƴ���ͬԪ�� 
				cout<<"�Ƴ���ͬԪ��֮ǰL1:";
				list<char>::iterator it;
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				L1.unique();			//�Ƴ���ͬԪ��
				cout<<"�Ƴ���ͬԪ��֮��L1:";
				for(it=L1.begin();it!=L1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
		}
		L3=L1;							
		L4=L2;	
		system("cls"); 
	} 
}


/*deque����ʹ��*/
void opra_deque()
{
	deque<char> D1,D2,D3,D4;
	int num;
	char temp;
	cout<<"����D1Ҫ¼���Ԫ�ظ�����";
	cin>>num;
	cin.get();
	cout<<"����D1�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		D1.push_back(temp);
	} 
	cout<<"����D2Ҫ¼���Ԫ�ظ�����";
	cin>>num;
	cin.get();
	cout<<"����D2�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		D2.push_front(temp);
	} 
	D3=D1;			//����ԭʼ���� 
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
			case 1:{	//������ʾ 
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
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			} 
			case 2:{	//���� 
				deque<char>::iterator it;
				cout<<"����Ҫ������ַ���";
				char temp;
				cin>>temp;
				cin.get();
				cout<<"����Ҫ�����������";
				int num;
				cin>>num;
				cin.get();
				D1.insert(D1.begin()+3,temp); 
				cout<<"��D1��D1.begin()+3��λ�ò���һ��"<<temp<<"�Ľ��:"; 
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1=D3;
				D1.insert(D1.end()-2,num,temp);
				cout<<"��D1��D1.end()-2��λ�ò���"<<num<<"��"<<temp<<"�Ľ��:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1=D3;
				D1.insert(D1.begin()+2,D2.begin()+1,D2.end()-1);
				cout<<"��D1��D1.begin()+2��λ�ò���D2��D2.begin+1��D2.end()-1��ΧԪ�غ�Ľ��:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			} 
			case 3:{	//ɾ�� 
				deque<char>::iterator it;
				D1.erase(D1.begin()+3);
				cout<<"D1ɾ��D1.begin()+3λ�õ�Ԫ�ع���Ľ��:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D2.erase(D2.begin()+2,D2.end()-2);
				cout<<"\nD2ɾ��D2.begin()+2��D2.end()-2λ�õķ�ΧԪ�ع���Ľ��:";
				for(it=D2.begin();it!=D2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			} 
			case 4:{	//��� 
				deque<char>::iterator it;
				cout<<"D1���ǰ:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1.clear();				//��� 
				cout<<"D1��պ�:";
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			} 
			case 5:{	//���� 
				deque<char>::iterator it;	
				cout<<"����ǰ:"<<endl;
				cout<<"D1:"; 
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"D2:"; 
				for(it=D2.begin();it!=D2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				D1.swap(D2);			//����
				cout<<"\n������:"<<endl;
				cout<<"D1:"; 
				for(it=D1.begin();it!=D1.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"D2:"; 
				for(it=D2.begin();it!=D2.end();it++)
					cout<<*it<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			} 
			case 6:{	//���� 
				int t=D1.size();
				cout<<"ʹ��[]����������D1�����Ľ����";
				for(int i=0;i<t;i++)
					cout<<D1[i]<<" ";
				cout<<endl;
				t=D2.size();
				cout<<"ʹ��.at()��������D2�Ľ����";
				for(int i=0;i<t;i++)
					cout<<D2.at(i)<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			} 
		}
		D1=D3;
		D2=D4;
		system("cls"); 
	}
	
}

/*set/multiset����ʹ��*/
void opra_set()
{
	set<char,less<char> > S1;
	multiset<char,greater<char> > S2;
	set<char,less<char> > S3;
	multiset<char,greater<char> > S4;
	int num;
	char temp;
	cout<<"����S1Ҫ¼���Ԫ�ظ�����";
	cin>>num;
	cin.get();
	cout<<"����S1�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;					//��Ϊ����ÿ¼��һ��Ԫ�أ�����������򣬹ʣ� 
		S1.insert(temp);			//set����ֻ�ṩinsert(����)�������г�ʼ������ 
	}
	cout<<"����S2Ҫ¼���Ԫ�ظ�����";
	cin>>num;
	cin.get();
	cout<<"����S2�����ݣ�";
	for(int i=0;i<num;i++)
	{
		cin>>temp;
		S2.insert(temp);
	}
	S3=S1;				//����ԭʼ���� 
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
			case 1:{	//������ʾ 
				set<char>::iterator itA;
				multiset<char>::iterator itB;
				cout<<"S1.size():"<<S1.size()<<endl;
				cout<<"S1.count('4'):"<<S1.count('4')<<endl;	//ͳ���ַ�'4'���ֵĴ���
				cout<<"S1(set):(less<char>()����) ";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"S2.size():"<<S2.size()<<endl;
				cout<<"S2.count('6'):"<<S2.count('6')<<endl;	//ͳ���ַ�'6'���ֵĴ��� 
				cout<<"S2(multiset):(greater<char>()����) ";
				for(itB=S2.begin();itB!=S2.end();itB++)
					cout<<*itB<<" ";
				cout<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//���� 
				set<char>::iterator itA;
				multiset<char>::iterator itB;
				cout<<"����Ҫ���뵽S1���ַ���";
				char temp;
				cin>>temp;
				cin.get();
				pair<set<char>::iterator,bool> mypair;
				mypair=S1.insert(temp);
				cout<<"���뷵��ֵ1(iterator):"<<*mypair.first<<endl;
				cout<<"���뷵��ֵ2(bool):"<<mypair.second<<endl;
				cout<<"����λ�þ�S1.begin():"<<distance(S1.begin(),mypair.first);
				cout<<"�����ַ����S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S2.insert(++S4.begin(),--S4.end());		//����һ����Χ 
				cout<<"\n��S2�в���++S4.begin()��++S4.end()��Χ��Ԫ�غ�Ľ��(����S4==S2):";
				for(itB=S2.begin();itB!=S2.end();itB++)
					cout<<*itB<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//ɾ�� 
				set<char>::iterator itA;
				multiset<char>::iterator itB;
				S1.erase(++S1.begin());					//1.ɾ��������ָ��Ԫ�� 
				cout<<"ɾ��++S1.begin()λ��Ԫ�ع���";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S2.erase(++S2.begin(),--S2.end());		//2.ɾ��һ����Χ����Ԫ�� 
				cout<<"ɾ��++S2.begin()��--S2.end()��ΧԪ�ع���:";
				for(itB=S2.begin();itB!=S2.end();itB++)
					cout<<*itB<<" ";
				cout<<endl;
				S3.erase('5');							//3.ɾ���ַ�Ϊ'5'��Ԫ�� 
				cout<<"S1ɾ��Key=='5'��Ԫ��:";
				for(itA=S3.begin();itA!=S3.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//��� 
				set<char>::iterator itA;
				cout<<"���ǰS1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S1.clear();			//���
				cout<<"��պ�S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//���� 
				set<char>::iterator itA;
				set<char,less<char> > S_temp;
				for(itA=S1.begin();itA!=S1.end();itA++)
					S_temp.insert(*itA+2);
				cout<<"����ǰ��S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"����ǰ��S_temp:";
				for(itA=S_temp.begin();itA!=S_temp.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				S1.swap(S_temp);			//����
				cout<<"�������S1:";
				for(itA=S1.begin();itA!=S1.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"�������S_temp:";
				for(itA=S_temp.begin();itA!=S_temp.end();itA++)
					cout<<*itA<<" ";
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
		}
		S1=S3;
		S2=S4;
		system("cls");	
	} 
}

/*map/multimap����ʹ��*/
void opra_map()
{
	map<char,char,less<char> > M1;
	multimap<char,char,greater<char> > M2;
	map<char,char,less<char> > M3;
	multimap<char,char,greater<char> > M4;
	pair<char,char> t_pair;
	int num;
	cout<<"����M1Ҫ¼������ݸ�����";
	cin>>num;
	cin.get();
	cout<<"�����������ݶԵ�Key��Value��"<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>t_pair.first;
		cin>>t_pair.second;
		M1.insert(t_pair);
	}
	cout<<"����M2Ҫ¼������ݸ�����";
	cin>>num;
	cin.get();
	cout<<"�����������ݶԵ�Key��Value��"<<endl;
	for(int i=0;i<num;i++)
	{
		cin>>t_pair.first;
		cin>>t_pair.second;
		M2.insert(t_pair);
	}
	M3=M1;			//����ԭʼ���� 
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
			case 1:{	//������ʾ 
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
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//���� 
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
				cout<<"����Ҫ�����Key��Value��";
				cin>>t_pair.first;
				cin>>t_pair.second;
				cin.get();
				M1.insert(++M1.begin(),t_pair);
				cout<<"������M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M1=M3;
				M1.insert(t_M.begin(),t_M.end());
				cout<<"\n�������t_M��"<<endl;
				for(itA=t_M.begin();itA!=t_M.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"����t_M.begin()��t_M.end()��ΧԪ�غ��M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//ɾ�� 
				map<char,char,less<char> >::iterator itA;
				multimap<char,char,greater<char> >::iterator itB;
				M1.erase(++M1.begin());
				cout<<"M1ɾ��--M1.begin()λ��Ԫ�ع���Ľ����"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M2.erase(++M2.begin(),--M2.end());
				cout<<"M2ɾ��++M2.begin()��--M2.end()��ΧԪ�ع���Ľ����"<<endl;
				for(itB=M2.begin();itB!=M2.end();itB++)
					cout<<(*itB).first<<" "<<(*itB).second<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//��� 
				map<char,char,less<char> >::iterator itA;
				cout<<"���ǰM1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M1.clear();				//���
				cout<<"��պ�M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//���� 
				map<char,char,less<char> >::iterator itA;
				map<char,char,less<char> > t_M;
				pair<char,char> t_pair;
				for(itA=M1.begin();itA!=M1.end();itA++)
				{
					t_pair=*itA;
					t_pair.second+='A';
					t_M.insert(t_pair);
				}
				cout<<"����ǰM1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"����ǰt_M(map/less<char>):"<<endl;
				for(itA=t_M.begin();itA!=t_M.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				M1.swap(t_M);			//����
				cout<<"������M1(map/less<char>):"<<endl;
				for(itA=M1.begin();itA!=M1.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"������t_M(map/less<char>):"<<endl;
				for(itA=t_M.begin();itA!=t_M.end();itA++)
					cout<<(*itA).first<<" "<<(*itA).second<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
		}
		M1=M3;
		M2=M4;
		system("cls");
	}
}

/*bitset����ʹ��*/
void opra_bitset()
{
	bitset<16> B1,B2;
	cout<<"����Ҫ¼���ʮ��������";
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
			case 1:{	//������ʾ 
				cout<<"B1.size():"<<B1.size()<<endl;
				cout<<"B1(16λ):";
				int temp=B1.size();
				for(int i=temp-1;i>=0;i--)
					cout<<B1[i];
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//����'1'��λ�� 
				int num=B1.count();
				cout<<"B1��Ϊ1�Ĺ���"<<num<<"��"<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//[]�������� 
				cout<<"ʹ��[]��������B1��";
				int temp=B1.size();
				for(int i=temp-1;i>=0;i--)
					cout<<B1[i];
				cout<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 4:{	//������ 
				cout<<"B1���ַ���ʽ����������Ϊ��"<<B1.to_string()<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 5:{	//ʮ���� 
				cout<<"B1����λ�����ʮ������Ϊ��"<<B1.to_ulong()<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}	
		}
		B1=B2;
		system("cls");
	}	
}

/*stack����ʹ��*/
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
			case 1:{	//������ʾ 
				cout<<"S.zize():"<<S.size()<<endl;
				if(!S.empty())
					cout<<"S.top():"<<S.top()<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//��ջ 
				cout<<"�����ջԪ��(��.��������)��";
				char temp;
				while(1)
				{
					cin>>temp;
					if(temp!='.')
						S.push(temp);
					else break;
				}
				cin.get();
				cout<<"\n��ջ�ɹ���"<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//��ջ 
				cout<<"�����ջ������";
				int num;
				cin>>num;
				cin.get();
				if(num>S.size())
				{
					cout<<"����"<<endl;
					cin.get();
					break; 
				}
				while(num--)	S.pop();
				cout<<"\n��ջ�ɹ���"<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
		}
		system("cls");
	} 
}

/*queue����ʹ��*/
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
			case 1:{	//������ʾ 
				cout<<"Q.zize():"<<Q.size()<<endl;
				if(!Q.empty())
					cout<<"Q.front():"<<Q.front()<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//����� 
				cout<<"���������Ԫ��(��.��������)��";
				char temp;
				while(1)
				{
					cin>>temp;
					if(temp!='.')
						Q.push(temp);
					else break;
				}
				cin.get();
				cout<<"\n����гɹ���"<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//������  
				cout<<"��������д�����";
				int num;
				cin>>num;
				cin.get();
				if(num>Q.size())
				{
					cout<<"����"<<endl;
					cin.get();
					break; 
				}
				while(num--)	Q.pop();
				cout<<"\n�����гɹ���"<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
		}
		system("cls");
	} 
}

/*prioruty_queue(���ȶ���)����ʹ��*/
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
			case 1:{	//������ʾ 
				cout<<"Q.zize():"<<Q.size()<<endl;
				if(!Q.empty())
					cout<<"Q.top()(�ڲ��Խ�������,Ĭ���������):"<<Q.top()<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//����� 
				cout<<"���������Ԫ��(��.��������)��";
				char temp;
				while(1)
				{
					cin>>temp;
					if(temp!='.')
						Q.push(temp);
					else break;
				}
				cin.get();
				cout<<"\n����гɹ���"<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 3:{	//������  
				cout<<"��������д�����";
				int num;
				cin>>num;
				cin.get();
				if(num>Q.size())
				{
					cout<<"����"<<endl;
					cin.get();
					break; 
				}
				while(num--)	Q.pop();
				cout<<"\n�����гɹ���"<<endl;
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
		}
		system("cls");
	} 
}

/*string��ģ��ʹ��*/
void opra_string()
{
	string s1,s2,s3,s4;
	cout<<"�������s1: ";
	getline(cin,s1);
	cout<<"�������s2: ";
	getline(cin,s2);
	system("cls"); 
	s3=s1;		//����s1,s2�ĳ�ʼֵ 
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
			case 1:{	//������ʾ 
				cout<<"s1��"<<s1<<endl;
				cout<<"s2��"<<s2<<endl;
				cout<<"s1.size()��"<<s1.size()<<endl;
				cout<<"s2.size()��"<<s2.size()<<endl;
				cout<<"s1.length()��"<<s1.length()<<endl;
				cout<<"s2.length()��"<<s2.length()<<endl;
				cout<<"s1+s2��"<<s1+s2<<endl; 
				cout<<"\n�����������һ��!"<<endl; 
				cin.get();
				break;
			}
			case 2:{	//���� 
				int address;
				string temp;
				cout<<"s1��"<<s1<<endl;
				cout<<"����s1Ҫ�����Ԫ���±�λ�ã�";
				cin>>address;
				cin.get();
				cout<<"����Ҫ��������ݣ�";
				getline(cin,temp);
				s1.insert(address,temp);
				cout<<"���������ɹ���s1:"<<s1<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get();
				break;
			}
			case 3:{	//ɾ�� 
				cout<<"s1��"<<s1<<endl;
				cout<<"���뿪ʼɾ����Ԫ���±�λ�ã�" ;
				int address;
				cin>>address;
				cin.get();
				s1.erase(address);
				cout<<"ɾ��������ɹ���s1:"<<s1<<endl; 
				cout<<endl;
				s1=s3;
				s1.erase(s1.begin());
				cout<<"s1ɾ����һ��Ԫ�غ�s1:"<<s1<<endl;
				s1=s3;
				s1.erase(--s1.end());
				cout<<"ɾ�����һ��Ԫ�أ�s1:"<<s1<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get(); 
				break;
			}
			case 4:{	//��� 
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				s1.clear();
				s2.clear(); 
				cout<<"s1,s2���������ղ���!"<<endl;
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				cout<<"s1.size()��"<<s1.size()<<endl;
				cout<<"s2.size()��"<<s2.size()<<endl;
				cout<<"s1.length()��"<<s1.length()<<endl;
				cout<<"s2.length()��"<<s2.length()<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get();
				break;
			}
			case 5:{	//C_string��� 
				cout<<"s1��C_string��ʽ�����"<<s1.c_str()<<endl;
				cout<<"s2��C_string��ʽ�����"<<s2.c_str()<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get();
				break;
			}
			case 6:{	//���� 
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				cout<<"�����ַ���"<<endl;
				cout<<"��������s1�б��������ַ���";
				char temp_ch;
				cin>>temp_ch;
				cin.get();
				string temp_str;
				cout<<"�����ַ�����"<<endl;
				cout<<"��������s2�б��������ַ�����";
				getline(cin,temp_str);
				int m,n;
				m=s1.find(temp_ch,0);
				n=s2.find(temp_str,0);
				cout<<"���������"<<endl; 
				cout<<"�ַ�"<<temp_ch<<"��s1�г��ֵ�λ�ã�"<<m<<endl;
				cout<<"�ַ���"<<temp_str<<"��s2�г��ֵ�λ�ã�"<<n<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get();
				break;
			}
			case 7:{	//�Ƚ� 
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
				cout<<"����s1�ĳ�ʼλ�ú�ĩλ��(�Կո���)��";
				cin>>addr_pre1>>addr_end1;
				cin.get();
				cout<<"����s2�ĳ�ʼλ�ú�ĩλ��(�Կո���)��";
				cin>>addr_pre2>>addr_end2;
				cin.get();
				int n=s1.compare(addr_pre1,addr_end1,s2,addr_pre2,addr_end2);	
				if(n==0)
					cout<<"s1["<<addr_pre1<<"]->s1["<<addr_end1<<"]==s2["<<addr_pre2<<"]->s2["<<addr_end2<<"]"<<endl;
				else if(n<0)
					cout<<"s1["<<addr_pre1<<"]->s1["<<addr_end1<<"]<s2["<<addr_pre2<<"]->s2["<<addr_end2<<"]"<<endl;	
				else
					cout<<"s1["<<addr_pre1<<"]->s1["<<addr_end1<<"]>s2["<<addr_pre2<<"]->s2["<<addr_end2<<"]"<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get();
				break;
			}
			case 8:{	//�滻 
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				int addr_pre,addr_end,size,count;
				char temp_ch; 
				cout<<"����Ҫ�滻���ַ���";
				cin>>temp_ch;
				cin.get();
				cout<<"����Ҫ�滻�ַ��ĸ�����";
				cin>>count;
				cin.get(); 
				cout<<"����s1Ҫ�滻��λ�úͳ���(�Կո����)��";
				cin>>addr_pre>>size;
				cin.get();
				s1.replace(addr_pre,size,count,temp_ch);
				string temp_str;
				cout<<"\n����Ҫ������ַ�����";
				getline(cin,temp_str);
				cout<<"����s2Ҫ�滻��λ�úͳ���(�Կո����)��";
				cin>>addr_pre>>size;
				cout<<"�����滻�ַ������ִ�λ�úͳ���(�Կո����)��";
				int address,length;
				cin>>address>>length;
				cin.get();
				s2.replace(addr_pre,size,temp_str.c_str(),address,length);
				cout<<"����滻���s1:"<<s1<<endl;
				cout<<"����滻�����s2��"<<s2<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get();
				break;
			}case 9:{	//���� 
				cout<<"����֮ǰ��"<<endl;
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				s1.swap(s2);
				cout<<"����֮��"<<endl;
				cout<<"s1:"<<s1<<endl;
				cout<<"s2:"<<s2<<endl;
				cout<<"\n�����������һ��!"<<endl;
				cin.get();
				break;
			}
		}
		s1=s3;		//ԭʼ���ݻָ� 
		s2=s4;
		system("cls");
	}
	system("cls");
}
#endif
