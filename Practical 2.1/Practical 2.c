#include<stdio.h>


struct Book
{
    int id;
    char tital[25];
    char author[25];
    int no_of_copies;


    void add_book();
    int issue_book(string name);
    int return_book(int ID);
    void diplay_books();
};
void add_book()
{

    printf("\nEnter book ID ");
    scanf("%d",id);
    fflush(stdin);
    cout<<"\nEnter book tital ";
    gets(tital);
    fflush(stdin);
    printf("\nEnter Author's name ");
    gets(author);
    printf("\nEnter number of copies: ");
    scanf("%d",no_of_copies);
}

int issue_book(string name)
{
    if(tital==name)
    {
        if(no_of_copies>0)
        {
            printf("\nBook found and issued successfully\n");
            no_of_copies--;
            return 1;
        }
        else
        {
            printf("\nNo copies of that book available!\n)";
        }
    }
    else
    {
        return 0;
    }
}

int return_book(int ID)
{
    if(id==ID)
    {
    printf("\nBook returned successfully\n");
    no_of_copies++;
    return 1;

    }
    else
    {
        return 0;
    }
}
void diplay_books()
{
    printf("\n=================================================================\n");
    printf("\nEnter book ID %d",id);
    printf("\nbook tital %s",tital);
    printf("\nAuthor's name %s ",author);
    printf("\nEnter number of copies %s",no_of_copies);
    printf("=================================================================\n)";
}

int main()
{
   struct Book b[25];
    char name[25];
    int ch,last=0,ID;
n:
    printf("=================================================================\n");
   printf("1.Add the details of book. \n2.Issue a book. \n3.Return the book. \n4.Display all the books. \n5.Exit");
    printf("=================================================================\n");
    scanf("%d",ch);

    switch(ch)
    {
    case 1:
        b[last].add_book();
        last++;
        goto n;

    case 2:
        printf("enter the book you want to issue: ");
         fflush(stdin);
        gets(name);
        for(int i=0; i<last ; i++)
        {
            if(b[i].issue_book(name)==1)
            {
                break;
            }
            if(i==last)
            {
                printf("Book not found!");
            }
        }
        goto n;
    case 3:
        printf("enter the book ID you want to return: ");
        scanf("%d",ID);
        for (int i=0 ; i<last ; i++)
        {
            if(b[i].return_book(ID)==1)
            {
                break;
            }
            if(i==last)
            {
                printf("Book not found!");
            }
        }

        goto n;

    case 4:
        for(int i=0 ; i<last ; i++)
        {
            b[i].diplay_books();
        }
        goto n;
    case 5:
        printf("Thnak you!");
    default:
        printf("Please enter a valid choice!");
        goto n;
    }
    return 0;
}

