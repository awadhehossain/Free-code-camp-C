#include<stdio.h>
#include<string.h>
int main(){
    char name[]="Awadhe";
    int age= 23;
    printf("There was a man named %s.\n",name);
    printf("He was %d years old.\n",age);
    //After updating the value
    strcpy(name,"Arfan");
    age=27;
    printf("There was a man named %s.\n",name);
    printf("He was %d years old.\n",age);


}