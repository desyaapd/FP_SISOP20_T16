#include "types.h"
#include "stat.h"
#include "user.h"

char buf[1024]={'\\'};
char buf2[1024]={'\\'};

void tail(int fd,char *name, int x)
{
	int i,n,m,l;
	int tot_lines;
	tot_lines=0;
	int start;

	while((n=read(fd,buf,sizeof(buf)))>0)
	{
		for(i=0;i<=n ;i++)
		{
			if(buf[i]=='\n')
			{
			   tot_lines++;  
			   if(strcmp(name,"")==0){
				printf(1,"\n");}
			}
			else
			{ER
			if(strcmp(name,"")==0){
				if(buf[i] =='\0')  
				{
					exit();
				}
				if(buf[i]!='\n')
				{
				 printf(1,"%c",buf[i]);
				}
				else
				{
				 printf(1,"\n");}
				}

			}
		}

	}
	close(fd);
	start = tot_lines-x;
	l=0;
	int fd2 = open(name,0); 
	while((m=read(fd2,buf2,sizeof(buf2)))>0)
	{
		for(i=0;i<=m;i++)
		{
			if(buf2[i] == '\n')
			l++;
			if(l>=start)
			{
				if(buf2[i] !='\n' && l>=start)
				{
					printf(1,"%c",buf2[i]);
				}
				else
				{
					printf(1,"\n");
					l++;
				}
		   	}
		}
	}
	close(fd2);
	if(n<0)
	{
		printf(1,"tail: ERROR READING \n");
		exit();
	}
}

int
main(int argc,char *argv[])
{
	int fd,i;

	if(argc<=1)
	{
		tail(0,"",10);
		exit();
	}

	else if(argc==2)
	{
		for(i=1;i<argc;i++)
		{
			if((fd=open(argv[i],0))<0 )
			{
				printf(1,"ERROR WHILE READING");
				exit();

			}
			tail(fd,argv[i],10);

			close(fd);
		}

	}
	else if(argc==3)
	{
		char c[1024];
		strcpy(c,argv[1]);
		char *num_str=c;
		num_str=num_str+1;
		int x= atoi(num_str);

		for(i=2;i<argc;i++)
		{
			if((fd=open(argv[i],0))<0 )
			{
				printf(1,"tail: ERROR WHILE OPENING %s\n",argv[i]);
				exit();
			}
			tail(fd,argv[i],x);
			close(fd);
		}
	}

	else
	{
		printf(1,"tail: SYNTAX ERROR");
	}
	exit();
}

