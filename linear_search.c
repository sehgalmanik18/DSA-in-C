#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int list[maxsize],size;
void create()
{
 int i;
 printf("enter the size of list");
 scanf("%d",&size);
 if(size>maxsize)
 printf("list overflow!!!");
 else{
    printf("enter list elements:");
    for(i=0;i<size;i++)
    scanf("%d",&list[i]);
 }
}
void display()
{
    if(size==0)
    printf("list is empty!!!");
    else{
        printf("list elements are:\n");
        int i;
        for(i=0;i<size;i++)
        printf("%d",list[i]);
    }
    printf("\n");
}
void insert()
{
    if(size==0)
    printf("list is empty!!!\n");
    else{
        int pos,value,i;
        printf("enter position where you want to insert new element");
        scanf("%d",&pos);
        printf("enter value to insert:");
        scanf("%d",&value);
        if(pos>0&&pos<=size){
            for(i=size;i>=pos;i--)
            list[i]=list[i-1];
            list[pos-1]=value;
            size++;
            printf("element added!!!\n");
        }
        else printf("invalid position!!!\n");
    }
}
void delete()
{
    int i,pos;
    if(size==0)
    printf("enter position of the element you want to delete\n");
    scanf("%d",&pos);
    if(pos>0&&pos<=size){
        for(i=pos-1;i<size;i++)
        list[i]=list[i+1];
        size--;
        printf("element deleted!!!\n");
    }
    else printf("invalid position!!!\n");
}
void search()
{
    if(size==0) printf("list is empty!!!\n");
    else{
        int val,i;
        printf("enter value to search");
        scanf("%d",&val);
        for(i=0;i<size;i++){
        if(list[i]==val)break;}
        if(i==size) printf("element not found");
        else printf("element found!!!\n");
}
    }
    void main()
    {
        create();
        insert();
        display();
        delete();
        search();
    }
   