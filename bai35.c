//
//  main.c
//  bai 35
//
//  Created by Hiếu Hee on 10/06/2022.
//

#include <stdio.h>

int main()
{
    int a;
    float d;
    char ch, name[40];
    printf("Please enter the data\n");
    scanf("%d %f %c %s", &a,&d,&ch,name);
    printf("\n The values accepted are: %d,%f,%c,%s\n",a,d,ch,name);
}
