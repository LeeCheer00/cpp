#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 /*����������
 	�½�����ṹѧ�����ݿ⡣
	�����µ�ѧ����Ϣ��
	ɾ��ѧ����Ϣ��*/
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
	printf("��ѡ��Ҫ���������ͣ�����1���½�\t����2������\t����3��ɾ��\t����4�����\t����0���˳�\n");
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
	
/*�½�����ṹ��ѧ�����ݿ⡣*/
struct stud_node*Create_stud_Doc(struct stud_node *head)
{
	struct stud_node*p,*tail;
	head=tail=p=NULL;
	int size=sizeof(struct stud_node);
	p=(struct stud_node*)malloc(sizeof(struct stud_node));
	printf("������ѧ����ѧ�š������ͳɼ���");
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
	printf("������ѧ����ѧ�š������ͳɼ���");
	scanf("%d %s %d",&p->num,p->name,&p->score);
	p->next=NULL;
	}
	return head;
}

/*���ѧ����Ϣ��*/
void Print_Stud_Doc(struct stud_node *head)
{
	struct stud_node*ptr;
	if(head==NULL){
		printf("\nNo Records\n");
	}
	else
		printf("ѧ������ϢΪ��\n");
		printf("\tѧ�ţ�\t������\t�ɼ���\n");
		for(ptr=head;ptr!=NULL;ptr=ptr->next){
			printf("\t%d\t%s\t%d\n",ptr->num,ptr->name,ptr->score);
		} 
	return;
}
