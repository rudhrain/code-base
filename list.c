/********************************************************************************
Name: STACK & QUEUE
Description: The program stores the user input in doubly linked list so that the 
elements can be accessed in both STACK and QUEUE order
********************************************************************************/


#include<stdio.h>
#include<stdlib.h>
struct node
{ struct node *prev;
  struct node *next;
  int data;
}linked_list;
int main()
{
	int count,loop,data,choice;
	struct node *pNode,*pTemp,*pFirst;
	printf("enter the value of count");
	scanf("%d",&count);

for(loop=0;loop<count;loop++)
{
	
	if (loop==0)
	{
		printf("enter the value of data");
	    scanf("%d",&data);
		pNode = calloc(1,sizeof(linked_list));
		pFirst = pNode;
		if(pNode == NULL)
		{
			printf("no memory");
		}
		else
		{
			pNode->data = data;
	    	pNode->prev = NULL;
	    	pNode->next = NULL;
	    }
	}
	else
	{
		printf("enter the value of data");
	    scanf("%d",&data);
        pTemp = pNode;
        pNode = calloc(1,sizeof(linked_list));
        if(pNode == NULL)
		{
			printf("no memory");
		}
		else
		{
			pNode->data = data;
	        pTemp->next = pNode;
		    pNode->prev = pTemp;
		    pNode->next = NULL;
		}

	}
}
printf("STACK ENTER 1\n");
printf("QUEUE ENTER 2\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
		printf("STACK\n");
		pTemp = pNode;
		for(loop =0;loop<count;loop++)
		{
			printf("->%d",pTemp->data);
			pTemp = pTemp->prev;
		}
		printf("\n");
		break;
case 2:
		printf("QUEUE\n");
		pTemp = pFirst;
		for(loop =0;loop<count;loop++)
		{
			printf("->%d",pTemp->data);
			pTemp = pTemp->next;
		}
		printf("\n");
        break;
    }

	printf("Hello");
}