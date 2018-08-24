/*
*@@@程序作者：胡令 
*@@@完成日期：2018/8/20 -2018/8/24 
*@@@程序功能：完成STL容器以及string类模板的使用 
*/ 
/*包含操作函数头文件*/
#include"operation.h"

int main()
{
    while(1)
    {
        show_main();
        int chooce;
        cin>>chooce;
        cin.ignore();
        system("cls");
        if(chooce==0)	break;
        switch(chooce)
        {
            case 1:{	//vector容器 
                opra_vector();
                break;
            }
            case  2 :{	//list容器
                opra_list();
                break;
            }
            case  3 :{	//deque容器
                opra_deque();
                break;
            }
            case  4 :{	//set/multiset容器
                opra_set();
                break;
            }
            case  5 :{	//map/multimap容器
                opra_map();
                break;
            }
            case  6 :{	//bitset容器
                opra_bitset();
                break;
            }
            case  7 :{	//stack容器
                opra_stack();
                break;
            }
            case  8 :{	//queue容器
                opra_queue();
                break;
            }
            case  9 :{	//priority_queue容器
                opra_pri_queue();
                break;
            }
            case 10:{	//string类 
            	opra_string();
				break;
			}
        }
    }
    return 0;
}
