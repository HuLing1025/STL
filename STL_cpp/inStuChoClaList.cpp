#include<iostream>
#include<cstring>
#include<list>

using namespace std;

typedef struct stu{
	char name[5];
	list<int> L;
}STU;

int main()
{
	int stu_num,cls_num;
	int cls_name,in_cls_num;
	int i,j;
	char in_name[5];
	cin>>stu_num>>cls_num;
	STU stu[stu_num];
	for(i=0;i<stu_num;i++)
		stu[i].name[0]='\0';
	for(i=0;i<cls_num;i++)
	{
		cin>>cls_name;
		cin>>in_cls_num;
		for(int k=0;k<in_cls_num;k++)
		{
			for(j=0;j<4;j++)
				cin>>in_name[j];
			in_name[j]='\0';
			for(j=0;j<stu_num;j++)
			{
				if(strcmp(stu[j].name,in_name)==0)
				{
					stu[j].L.push_back(cls_name);
					break;
				}
				else if(stu[j].name[0]=='\0')
				{
					strcpy(stu[j].name,in_name);
					stu[j].L.push_back(cls_name);
					break;
				}
			}
		}
	}
	list<int>::iterator it;
	while(1)
	{
		for(j=0;j<4;j++)
			cin>>in_name[j];
		in_name[j]='\0';
		for(i=0;i<stu_num;i++)
		{
			if(strcmp(stu[i].name,in_name)==0)
			{
				cout<<stu[i].name<<" "<<stu[i].L.size();
				for(it=stu[i].L.begin();it!=stu[i].L.end();it++)
					cout<<" "<<*it;
				cout<<endl;
				break;
			}
		}
	}
	return 0;
}
