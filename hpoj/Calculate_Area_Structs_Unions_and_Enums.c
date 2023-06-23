#include <stdio.h>
enum type{ circle, rectangle};
union dimensions{
    float length[2];
    float radius;
};
struct shape{
    enum type e;
    union dimensions dim;
};
int main(){
    int s;
    scanf("%d",&s);
    float area;
    float area1;
    struct shape sh;
    switch (s){
        case 1: 
        scanf("%f",&sh.dim.radius);
        area=3.14*sh.dim.radius*sh.dim.radius;
        printf("Area of the circle: %.4f units",area);
        break;
        
        case 2:
        scanf("%f",&sh.dim.length[0]);
        scanf("%f",&sh.dim.length[1]);
        area1=sh.dim.length[0]*sh.dim.length[1];
        printf("Area of the rectangle: %.4f units",area1);
        break;
        
        default:printf("Invalid choice!");
    }
    return 0;
}

