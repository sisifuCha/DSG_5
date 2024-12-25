#include "cranklogic.h"

CRankLogic::CRankLogic(QObject *parent) : QObject(parent)   //构造器
{
    crankdlg = CRankDlg::getCRankDlg();     //获取静态的图形界面对象
}

void CRankLogic::updateRank()
{
    crankdlg->getRank();                    //调用crankdao中的函数，从文件里面读取排名到程序
}

int CRankLogic::getIndex()
{
    int length = crankdlg->getRank();
    if(length == 0)
        return 0;
    int index;
    for(index = length; index > 0; index--)   //从排名中倒着找，如果成绩比已有的高，则继续找，直到找到合适的排名号，返回该号
        if(g_rank.nGrade < ranks[index - 1]->nGrade)
            break;
        else
            continue;
    return index;
}

void CRankLogic::insertIndex(int rankIndex)   //在某排名号处插入一个成绩g_rank
{
    if(rankIndex == 10 || g_rank.strName[0] == 0)//没有名字或者成绩在10名之后就不插入
        return;

    int length = crankdlg->getRank();
    int index;
    for(index = 0; index < length; index++)     //小到大遍历排名表
    {
        if(!strcmp(g_rank.strName, ranks[index]->strName))  //名字相同时进入if
        {
            if(g_rank.nGrade <= ranks[index]->nGrade)   //新成绩小于或等于原来成绩就不变（保证存储的总是该名字的最高记录）
                return;
            else                            //新成绩高于原来成绩就直接跳出循环
                break;
        }
    }
    delete ranks[index];    //删除原来成绩 || index=10，不会删掉数组里面的东西

    int moveNumber = index - rankIndex;//若是删除原来成绩则不会进入for循环，=0
    for(int i = 0; i < moveNumber; i++)     //插入排名的位置开始，其他排名往后挪一位
    {
        ranks[index - i] = ranks[index - 1 - i];
    }

    ranks[rankIndex] = new RANKINFOR();    //腾出的位置赋值
    ranks[rankIndex]->nGrade = g_rank.nGrade;
    strcpy(ranks[rankIndex]->strName, g_rank.strName);

    crankdlg->saveRank();               //存储新的排名到文件
    crankdlg->showRank();               //显示到图形界面
}
