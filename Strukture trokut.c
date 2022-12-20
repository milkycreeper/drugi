#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct d3{
    int x;
    int y;
    int z;
};


int main()
{  
    
    
    struct d3 p1={4,5,6};
         struct d3     p2={4,7,6};
         struct d3     p3={6,5,7};
    
    float a=sqrt(pow(p1.x-p2.x,2)+pow(p2.y-p1.y,2)+pow(p2.z-p1.z,2));
    float b=sqrt(pow(p2.x-p3.x,2)+pow(p3.y-p2.y,2)+pow(p2.z-p3.z,2));
    float c=sqrt(pow(p3.x-p1.x,2)+pow(p1.y-p3.y,2)+pow(p3.z-p1.z,2));
    
    if (a==b||a==c||c==b)
        printf("je");
    else printf("nije");    
        
}
