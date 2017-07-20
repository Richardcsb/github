#include<stdio.h>
#include<stdlib.h>
struct Student
{
  char cName[20];
  int iNumber;
  struct Student*pNext;
};
int iCout;
stuct Student* Creat()
{
  struct Student* pHead=NULL;
  struct Student*pNew,*pEnd;
  iCount = 0;
  pEnd=pNew=(struct Student*)malloc(sizeof(struct Student));
  printf("please first enter Name ,then Number\n");
  scanf("%s",&pNew->cName);
  scanf("%d\n",&pNew->iNumber);
  while(pNew->iNumber!=0)
  {
    iCount++;
    if(iCount==1){
      pNew->pNext=pHead;
      pEnd=pNew;
      pHead=pNew;
    }
    else
    {
      pNew->pNext=NULL;
      pEnd->pNext=pNew;
      pEnd=pNew;
    }
    pNew=(struct Student*)malloc(sizeof(struct Student));
    scanf("%S",&pNew->cName);
    scanf("%d",&pNew->iNumber);
  }
  free (pNew);
  return pHead;
}
void Print(struct Student* pHead)
{
  stuct Student* pTenp;
  int iIndex=1;

  printf("------the List has %d menbers:------\n,iCount");
  printf("\n");
  while(pTenp !=NULL)
  {
    printf("the NO%D menber is:\n",iIndex);
    printf("the name is:%s\n",pTemp->cName);
    printf("the number is:%d\n",pTemp->iNumber);
    iIndex++;
  }
}
struct  Student*Insert(struct Student*pHead)
{
  struct Student *pNew;
  printf("-------Inser member at first-------\n");
  pNew=(struct Student*)malloc(sizeof(struct student));
  scanf("%s",&pNew -> cName);
  scanf("%d",&pNew -> iNumber);

  pNew -> pNext5 = pHead;
  pHead -> pNew;
  iCount++;
  return pHead;
}
void Delete(struct Student* pHead,int iIndex)
{
  int i;
  struct Student*pTemp;
  struct Student*pPre;
  pTemp = pHead;
  pPre = pTemp;

  printf("-------delete NO%d member-----\n",iIndex);
  for(i = 1;i < iIndex;i++)
  {
    pPre = pTemp;
    pTemp = pTem -> pNext;
  }
  pPre -> pNest = pTemp -> pNext;
  free(pTemp);
  iCount--;

}
int main()
{
struct Student* pHead;
pHead = Creat();
pHead =Insert(pHead);
Delete(pHea,2);
Print(pHead);
return 0;
}
