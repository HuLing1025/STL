/*
*@@@�������ߣ����� 
*@@@������ڣ�2018/8/20 -2018/8/24 
*@@@�����ܣ����STL�����Լ�string��ģ���ʹ�� 
*/ 
/*������������ͷ�ļ�*/
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
            case 1:{	//vector���� 
                opra_vector();
                break;
            }
            case  2 :{	//list����
                opra_list();
                break;
            }
            case  3 :{	//deque����
                opra_deque();
                break;
            }
            case  4 :{	//set/multiset����
                opra_set();
                break;
            }
            case  5 :{	//map/multimap����
                opra_map();
                break;
            }
            case  6 :{	//bitset����
                opra_bitset();
                break;
            }
            case  7 :{	//stack����
                opra_stack();
                break;
            }
            case  8 :{	//queue����
                opra_queue();
                break;
            }
            case  9 :{	//priority_queue����
                opra_pri_queue();
                break;
            }
            case 10:{	//string�� 
            	opra_string();
				break;
			}
        }
    }
    return 0;
}
