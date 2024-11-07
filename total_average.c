#include<stdio.h>
int main(){
    float tam,eng,mat,phy,chem,comp;
    float total,average,percentage;
    printf("Enter the mark in six subject :");
    scanf("%f %f %f %f %f %f",&tam,&eng,&mat,&phy,&chem,&comp);
    total=tam+eng+mat+phy+chem+comp;
    average = total/6.0;

    percentage=(total/600.0)*100;
    printf("%f\n",total);
    printf("%f\n",average);
    printf("%f\n",percentage);

}
