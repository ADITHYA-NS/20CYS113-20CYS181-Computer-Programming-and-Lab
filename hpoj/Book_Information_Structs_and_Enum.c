#include<stdio.h>
#include<string.h>
enum Genre {FICTION, NON_FICTION, SCIENCE_FICTION, MYSTERY, THRILLER};
struct  Book{
    char title[100];
    char author[100];
    int puby;
    enum Genre g;
};
void displayBookInfo(struct  Book bk){
    printf("Title: %s",bk.title);
    printf("Author: %s\n",bk.author);
    printf("Publication Year: %d\n",bk.puby);
    switch(bk.g){
        case FICTION:
        printf("Genre: FICTION");
        break;
        case NON_FICTION:
        printf("Genre: NON_FICTION");
        break;
        case SCIENCE_FICTION:
        printf("Genre: SCIENCE_FICTION");
        break;
        case MYSTERY:
        printf("Genre: MYSTERY");
        break;
        case THRILLER:
        printf("Genre: THRILLER");
        break;
        default:
        printf("Invalid Input!");
    }
}
int main(){
    char a[100];
    int y;
    char gr[50];
    struct Book b;
    fgets(b.title,sizeof(b.title),stdin);
    scanf("%s",a);
    scanf("%d",&y);
    scanf("%s",gr);
    strcpy(b.author,a);
    b.puby=y;
    if(strcmp(gr,"FICTION")==0){
        b.g=FICTION;
    }
    else if(strcmp(gr,"NON_FICTION")==0){
        b.g=NON_FICTION;
    }
    else if(strcmp(gr,"SCIENCE_FICTION")==0){
        b.g=SCIENCE_FICTION;
    }
     else if(strcmp(gr,"MYSTERY")==0){
        b.g=MYSTERY;
    }
     else if(strcmp(gr,"THRILLER")==0){
        b.g=THRILLER;
    }
    else{
        printf("Invalid Input!");
    }
    displayBookInfo(b);
    return 0;
    
}