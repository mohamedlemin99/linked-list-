#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
clock_t start,end;
struct birth{int day,month,year;};
struct student{
 int ID;
 char name[100];
 int score_last_year;
 struct birth dob;
 };
 struct node{
 struct student data;
 struct node* next;
 }*head,*tail;
 void insert_function()
{
    int insertion_k;
    printf("enter 1 to inert at beginning 2 to insert at end 3 to insert at middel");
    scanf("%d",&insertion_k);
    struct node *added, *temp;

    added = (struct node*)malloc(sizeof(struct node));

    if(added == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
    printf("\n enter new student data");
    printf("\n Name: ");
    fflush(stdin);
    fgets(added->data.name, sizeof(added->data.name), stdin);  // read string
    printf("\n enter the student ID ");
    scanf("%d",&added->data.ID);
    printf("\n enter the student score of last year ");
    scanf("%d",&head->data.score_last_year);
    printf("\n enter the birth date\n");
    printf(" year :\t");
    scanf("%d",&added->data.dob.year);
    printf("\n day :\t");
    scanf("%d",&added->data.dob.day);
    printf("\n month :\t");
    scanf("%d",&added->data.dob.month);
    added->next = NULL;

    if(insertion_k==1){start=clock();
            added->next=head;
     head=added;}
    if(insertion_k==2){
    tail->next=added;}
    if(insertion_k==3){
    int p= lengthLL(head);

    int index = (p%2==0)?(p/2):(p+1)/2;

     printf("\n %d",p);
        temp = head;



        while (index-- > 1)
        {
            temp = temp->next;
        }

        if(temp != NULL)
        {
            //to connect them
            added->next = temp->next;

            temp->next = added;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}}
 void createNodeList(int n_student)
{
    struct node *added;
    int counter;
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL) //check whether if the head is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the first node
        printf(" enter data for node 1 : ");
        printf("Name: ");
      fflush(stdin);
    fgets(head->data.name, sizeof(head->data.name), stdin);  // read name
    printf("\n enter the student ID ");
    scanf("%d",&head->data.ID);
    printf("\n enter the student score of last year ");
    scanf("%d",&head->data.score_last_year);
     printf("\n enter the new age of\n");
     printf("year \t:\t");
     scanf("%d",&head->data.dob.year);
     printf("day \t:\t");
     scanf("%d",&head->data.dob.day);
     printf("month \t:\t");
     scanf("%d",&head->data.dob.month);
        head-> next = NULL; //Links the address field to NULL
        tail = head;
//Creates n nodes and adds to linked list starting from number 2
        for(counter=2; counter<=n_student; counter++)
        {
            added = (struct node *)malloc(sizeof(struct node));
            if(added == NULL) //check if added allocated
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", counter);
                 printf("Name: ");
      fflush(stdin);
    fgets(added->data.name, sizeof(added->data.name), stdin);  // read string
     printf("\n enter the student ID ");
    scanf("%d",&added->data.ID);
    printf("\n enter the student score of last year ");
    scanf("%d",&head->data.score_last_year);
     printf("\n enter the birth date\n");
     printf("year \t:\t");
     scanf("%d",&added->data.dob.year);
     printf("day \t:\t");
     scanf("%d",&added->data.dob.day);
     printf("month \t:\t");
     scanf("%d",&added->data.dob.month);
                added->next = NULL; // links the address field of added with NULL
                tail->next = added; // links previous node i.e. tail to the added
                tail = tail->next;
            }
        }
    }
}
// function to calculate the length the linked list
int lengthLL(struct node* head)
{
    int length = 0;
    struct node* tmp = head;
    while (tmp != NULL) {
        tmp = tmp->next;
        length++;
    }
    return length;
}

 void display()
 {


     int counter=0;
struct node* temp=head;
while(temp!=NULL){
       counter++;
    printf("\n Node number %d : \n",counter);
    printf("Name: ");
    puts(temp->data.name);
    printf("ID number : %d\t",temp->data.ID);
    printf("\n birth date :\t%d/%d/%d\t",temp->data.dob.day,temp->data.dob.month,temp->data.dob.year);
    temp=temp->next;

}}
void linked_list()
{
    int n_student,num;
printf("enter the number of nodes you want to create :\t");
scanf("%d",&n_student);
createNodeList(n_student);
printf("the memory requried to store the data for stdent is %d\n",sizeof(struct student));
    printf("the memory requried to store the data for linked list array %d\n",sizeof(struct node)*n_student);
b:
printf("enter \n  1 to insert student \n  2 to display linked list \n ");
scanf("%d",&num);
switch(num){
case(1):
    insert_function();
    end=clock();
    break;
case(2): display();
break;
}
double cpu_time_used=((double)(end-start))/ CLOCKS_PER_SEC ;
printf(" time taken by inserted element at begenning in linked list is %lf\n",cpu_time_used);
goto b;
printf("the process is finish !\n");
}



struct student *newd,*dynam;
 static int n;

 void creat_dynarray()
 {
     printf("\tEnter number of the students?\n");
    scanf("%d",&n);
   dynam=(struct student*)malloc(sizeof(struct student));
   if(dynam==0)
   {
       printf("\tSorry no memory block has been allocated !\n");
   }
   else
   {

    for(int i=0;i<n; i++)
    {
     printf("\tEnter data for student no.%d\n:",i+1);
     printf("\tName:\n");
     fflush(stdin);
     fgets(dynam[i].name, sizeof(dynam[i].name), stdin);  // read name
     printf("\tEnter the student ID\n");
     scanf("%d",&dynam[i].ID);
     printf("\tEnter the student score_last_year\n");
     scanf("%d",&dynam[i].score_last_year);
     printf("\tday:\n");
     scanf("%d",&dynam[i].dob.day);
      printf("month \t:\t");
     scanf("%d",&dynam[i].dob.month);
     printf("year \t:\t");
     scanf("%d",&dynam[i].dob.year);
    }
   }

 }
 void disiplay()
 {
     for (int i=0; i<n; i++)
     {
         printf("Name: ");
          puts(dynam[i].name);

        printf("\tID number:%d\n",dynam[i].ID);
        printf("\t birth date :\t%d/%d/%d\n",dynam[i].dob.day,dynam[i].dob.month,dynam[i].dob.year);
     }
 }
 void insertatend()
 { n++;int i;
     newd= (struct student*)malloc(n*sizeof(struct student));
     for(i=0; i<n-1; i++)
     {
         newd[i]=dynam[i];
     }
   {
     printf("\tEnter data for student no.%d\n:",i+1);
     printf("\tName:\n");
     fflush(stdin);
     fgets(newd[i].name, sizeof(newd[i].name), stdin);  // read name
     printf("\tEnter the student ID\n");
     scanf("%d",&newd[i].ID);
     printf("\tEnter the student score_last_year\n");
     scanf("%d",&newd[i].score_last_year);
     printf("\tday:\n");
     scanf("%d",&newd[i].dob.day);
      printf("month \t:\t");
     scanf("%d",&newd[i].dob.month);
     printf("year \t:\t");
     scanf("%d",&newd[i].dob.year);
    }
    dynam=newd;
 }
 void insertatbeg()
 {
     n++;int i;
     newd= (struct student*)malloc(n*sizeof(struct student));
     for (i=1 ; i<n ; i++)
    newd [i] =dynam  [i-1];
    i=0;
    {
     printf("\tEnter data for student no.%d\n:",i+1);
     printf("\tName:\n");
     fflush(stdin);
     fgets(newd[i].name, sizeof(newd[i].name), stdin);  // read name
     printf("\tEnter the student ID\n");
     scanf("%d",&newd[i].ID);
     printf("\tEnter the student score_last_year\n");
     scanf("%d",&newd[i].score_last_year);
     printf("\tday:\n");
     scanf("%d",&newd[i].dob.day);
      printf("month \t:\t");
     scanf("%d",&newd[i].dob.month);
     printf("year \t:\t");
     scanf("%d",&newd[i].dob.year);
    }
    start=clock();
    dynam=newd;

 }
 void insertatmid()
 {

       n++;int i;
     newd= (struct student*)malloc(n*sizeof(struct student));
     int index = (n%2==0)?(n/2):(n+1)/2;

     for (i=0 ; i<index-1 ; i++)
    newd [i] =dynam  [i];
for (i=index ; i<n ; i++)
    newd [i] =dynam  [i-1];
    i=index-1;

  {
     printf("\tEnter data for student no.%d\n:",i+1);
     printf("\tName:\n");
     fflush(stdin);
     fgets(newd[i].name, sizeof(newd[i].name), stdin);  // read name
     printf("\tEnter the student ID\n");
     scanf("%d",&newd[i].ID);
     printf("\tEnter the student score_last_year\n");
     scanf("%d",&newd[i].score_last_year);
     printf("\tday:\n");
     scanf("%d",&newd[i].dob.day);
      printf("month \t:\t");
     scanf("%d",&newd[i].dob.month);
     printf("year \t:\t");
     scanf("%d",&newd[i].dob.year);
    }
    dynam=newd;
 }
void  dynamicarray()
 {
         int num;
         creat_dynarray();
    printf("the memory requried to store the data for stdent is %d\n",sizeof(struct student));
    printf("the memory requried to store the data for dynamic array %d\n",sizeof(struct student)*n);
b:
printf("enter \n  1 to insert student at beginning\n  2to insert at middel \n 3 to insert at end \n 4 to display all student \n ");
scanf("%d",&num);
switch(num){
         case(1):
               insertatbeg();
               end=clock();
                 break;
         case(2): insertatmid();
                break;
         case(3):   insertatend();
                    break;
         case(4): disiplay();
                    break;
}
double cpu_time_used=((double)(end-start))/ CLOCKS_PER_SEC ;
printf(" time taken by inserted element at begenning in dynamic array is %lf\n",cpu_time_used);
goto b;
printf("the process is finish !\n");
}


int main()
{
  printf("\tHello ! Dr.Omar welcome to our first project in Data structure !\n ");
  int s;

  printf("enter 1 to go to linked list \n enter 2 to go to dynamic array\n ");


  fflush(stdin);
  scanf("%d",&s);
switch(s){
    case(2): dynamicarray();
    break;
    case(1): linked_list();
    break;
}
    return 0;
}

