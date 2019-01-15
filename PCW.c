#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 /*函数声明：
 	新建链表结构学生数据库。
	插入新的学生信息。
	删除学生信息。*/
struct stud_node*Create_stud_Doc(struct stud_node*head); 
//struct stud_node*Insert_stud_Doc(); 
//struct stud_node*Delete_stud_Doc(); 
struct stud_node*Print_Stud_Doc(struct stud_node*head); 

struct stud_node{
		int num,score;
		char name[20];
		struct stud_node*next;
	};

int main()
{	
	struct stud_node*head,*p;
	head=p=NULL;
	int choice;
	
	do
	{
	printf("请选择要操作的类型：输入1、新建\t输入2、插入\t输入3、删除\t输入4、输出\t输入0、退出\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			head=Create_stud_Doc(head); 
			break;
		}
		case 2:{
			
			break;
		}
		case 3:{
			
			break;
		}
		case 4:{
			Print_Stud_Doc(head); 
			break;
		case 0:
			break;
		}
	}
	}while(choice!=0);
	
	return 0;

}
	
/*新建链表结构的学生数据库。*/
struct stud_node*Create_stud_Doc(struct stud_node *head)
{
	struct stud_node*p,*tail;
	head=tail=p=NULL;
	int size=sizeof(struct stud_node);
	p=(struct stud_node*)malloc(sizeof(struct stud_node));
	printf("请输入学生的学号、姓名和成绩：");
	scanf("%d %s %d",&p->num,p->name,&p->score);
	p->next=NULL;
	printf("%d\t%s\t%d\n",p->num,p->name,p->score);
	
	while(p->num!=0){
		if(head==NULL)
			head=tail=p;
		else{
			tail->next=p;
			tail=p;
		}
	p=(struct stud_node*)malloc(sizeof(struct stud_node));
	printf("请输入学生的学号、姓名和成绩：");
	scanf("%d %s %d",&p->num,p->name,&p->score);
	p->next=NULL;
	}
	return head;
}

/*输出学生信息。*/
void Print_Stud_Doc(struct stud_node *head)
{
	struct stud_node*ptr;
	if(head==NULL){
		printf("\nNo Records\n");
	}
	else
		printf("学生的信息为：\n");
		printf("\t学号：\t姓名：\t成绩：\n");
		for(ptr=head;ptr!=NULL;ptr=ptr->next){
			printf("\t%d\t%s\t%d\n",ptr->num,ptr->name,ptr->score);
		} 
	return;
}
