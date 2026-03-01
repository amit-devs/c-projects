#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct Patient{
    int id;
    char name[50];
    int age;
    char gender[10];
    char disease[50]; 
} p;

void addPatient(){
    FILE *fp;
    fp= fopen("patients.dat","ab");
    
    printf("\nEnter Patient ID:");
    scanf("%d",&p.id);
    printf("\nEnter Patient Name:");
    scanf("%s",p.name);
    printf("\nEnter Patient Age:");
    scanf("%d",&p.age);
    printf("\nEnter Patient Gender:");
    scanf("%s",p.gender);
    printf("\nEnter Patient Disease:");
    scanf("%s",p.disease);

    fwrite(&p,sizeof(p),1,fp);
    fclose(fp);
    printf("\nPatint record added successfully!\n");
}

void viewPatient(){
    FILE *fp;
    fp=fopen("patients.dat","rb");
    if(fp==NULL){
        printf("\nNO RECORD FOUND !!!\n");
        return;
    }
    printf("\n---Patient Records---\n");
    while(fread(&p,sizeof(p),1,fp)){
        printf("\nID: %d\n",p.id);
        printf("\nName: %s\n",p.name);
        printf("\nAge: %d\n",p.age);
        printf("\nGender: %s\n",p.gender);
        printf("\nDisease: %s\n",p.disease);
    }
    fclose(fp);
}

void searchPatient(){
    FILE *fp;
    int id,found=0;
    fp=fopen("patients.dat","rb");

    printf("\nEnter Patient ID to search: ");
    scanf("%d",&id);
    while(fread(&p,sizeof(p),1,fp)){
        if(p.id==id){
            printf("\nPatient Found:\n");
            printf("Name: %s\nAge: %d\nGender:%s\nDisease: %s\n",p.name,p.age,p.gender,p.disease);
            found=1;
            break;
        }
    }
    if(!found){
        printf("\nPatient not found!\n");
        fclose(fp);
    }
}

int main(){
    int choice;
    char opinion[10];
    bool loop=true;
    printf("Welcome to Hospital Management System\n");
    printf("Do you want to use the system [YES/NO]\n");
    scanf("%s",opinion);
   
    if(strcmp(opinion,"yes")==0|| strcmp(opinion,"Yes")==0){
        do{
            printf("\n--- HOSPITAL MANAGEMENT SYSTEM ---\n");
            printf("1. Add Patient\n");
            printf("2. View Patient\n");
            printf("3. Search Patient\n");
            printf("4. Exit\n");
            printf("Enter your choice:\n");
            scanf("%d",&choice);
            
            switch(choice){
                case 1: addPatient(); break;
                case 2: viewPatient(); break;
                case 3: searchPatient(); break;
                case 4: exit(0);
                default: printf("Invalid choice!\n");
            }
        }while(loop);
    }else{
        printf("As Your wish !!!\n");
    }
    
}