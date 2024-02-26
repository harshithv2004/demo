#include<stdio.h>
#include<math.h>
     //area of circle,triangle,rectangle and square
 
 int main()
 {   char code;
     
      printf("to find area of circle = c \ntriangle = t \nrectangle =r \nsquare = s");

      printf("\nenter the area code (c, t, r, s) : ");
      scanf("%c", &code );
      printf("\n your area code : %c\n", code);
    float a,b,c;
    switch(code)
    {
        case'c':{
        printf("\nenter the radius of circle a: ");
        scanf("%f", &a);
        printf(" area of circle : %f", 3.14*a*a);
        break;}

        case't':{
        printf("\nenter the breadth and height of triangle a & b :");
        scanf("%f %f", &a,&b);
        printf("\narea of trangle : %f", (a*b )/2);
        break;}
        case'r':{
        printf("\nenter the length and breadth of rectangle : ");
        scanf("%f %f",&a,&b);
        printf("\nthe area of rectangle is %f",a*b);
        break;
    }
        case's':{
		printf("\nenter the side of square: ");
        scanf("%f",&a);
        printf("\nthe area of square is %f",pow(a,2));
        break;
       }
       default: {
       	printf("laudeeeeee.........");
		break;
	   }
     }  
	  
     
      return 0;
 }



 


 
