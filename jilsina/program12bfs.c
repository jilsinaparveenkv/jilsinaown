
#include<stdio.h>
#include<stdlib.h>
struct AdjList
{
	int key;
	struct AdjList *next;
};
struct AdjList *Vtx[5];






int queue[25];
int rear=-1,front=-1;
int add_item;
int temp;
int vtx[5];

int E,E1,E2;
int k;
int i;
int type;
int graph[5][5];
int visit[5]={0,0,0,0,0};
//int graph[5][5]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,1,0},{0,1,1,0,1},{0,1,0,1,0}};
int v;

void getMatrix()
{
	int i,j;
	for(i=0; i<v; i++)
	{
		for(j=0; j<v; j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
}
void createList(int v,int E)
{
//initializtion
	
	struct AdjList *newnode,*ptr;
	for( int i=0;i<v;i++)
		Vtx[i]=NULL;
		
	

	newnode=(struct AdjList *)malloc(sizeof(struct AdjList));
	newnode->key=E;
	newnode->next=NULL;
	if(Vtx[v]==NULL)
	{
		Vtx[v]==newnode;
	}
	else
	{
	ptr=Vtx[v];
	while(ptr->next !=NULL)
	{
	ptr=ptr->next;
	ptr->next=newnode;
	}
	}
}
	
void createMatrix()
{
	//initialization
	int i,j;
	int E1,E2;
	for(i=0; i<v; i++)
	{
		for(j=0; j<v; j++)
		{
			graph[i][j]=0;
		}
	}
	for(i=0; i<E; i++)
	{
		scanf("%d",&E1);
		scanf("%d",&E2);
		graph[E1][E2]=1;
		if(type==2)
		graph[E2][E1]=1;
	}
}

void enqueue(int add_item)
{
 	if(rear==25-1)
	{
		printf("\n queue is overflow.\n");
	}
	if(rear<25)
	{
		if(rear==-1 && front==-1)
		{ 
			front=rear=0;
			queue[rear]=add_item;
		}

		else
 		{
		rear=rear+1;
		queue[rear]=add_item;
		}
	}
}  
int dequeue()
{
   if(front==-1 )
   {
     printf("\n queue is underflow.\n");
   }
  else if(front==rear)
  {
    
    temp=queue[front];
    front=-1;
    rear=-1;
  }
  else
   {
     
     temp=queue[front];
     front=front+1;
   }
    return(temp);
    
}
int isVisited(int vtx)
{
	return(visit[vtx]);
}
void bfs(int s)
{
        int vtx;
	enqueue(s);
	while(front!=-1 && rear!=-1)
	{
		vtx=dequeue();
		if(!(isVisited(vtx)))
		{
			visit[vtx]=1;
			printf("%d\n",vtx);
			for(int i=0;i<5;i++)
			{
				if(graph[vtx][i]==1)
					enqueue(i);
			}
		} 
	}
}
void bfsList(int s)
{
        int x;
	struct AdjList *ptr;
	enqueue(s);
	while(front !=-1 && rear!=-1)
	{
		x=dequeue();
		if(!(isVisited(x)))
		{
			visit[x]=1;
			printf("%d\n",x);
			ptr=Vtx[x];
			while(ptr!=NULL)
			{
				enqueue(ptr->key);
				ptr=ptr->next;
			}
		} 
	}
}
		
int main()
{
	printf("Enter the number of vertices:");
	scanf("%d",&v);
	//getMatrix(v);
	printf("Enter the type of graph(enter 1 for directed or 2 for undirected graph):");
for( int i=0;i<v;i++)
		Vtx[i]=NULL;
		
	scanf("%d",&type);
	
	printf("Enter the number of edges:");
	scanf("%d",&E);
	for(i=0; i<E; i++)
	{
		scanf("%d",&E1);
		scanf("%d",&E2);

	createList(E1,E2);
	if(type==2)
	createList(E1,E2);
	}
	//createMatrix(v,E,type);
	
	//int i,j,k;
	//for (i=0;i<5;++i)
	//{
	//	for(j=0;j<5;++j)
	//	{
		//	printf("%d ",graph[i][j]);
		//}
		//printf("\n");
	//}
	printf("source vertex :");
        scanf("%d",&k);
       //bfs(k);
	bfsList;
}

	
	

	
