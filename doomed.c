
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAXCHAR 1000
struct Food {
        
        char * name;
        int ghg;
        struct Food* next;

};
int main(int argc, char ** argv){

    if (argc != 2) {
        fprintf(stderr, "usage: ./doomed <filename>\n");
        exit(1);
    }
    FILE *fp;
    char row[MAXCHAR];
    char *token;
    char input[MAXCHAR];

    fp = fopen(argv[1],"r");
        
    // first pointer for linked list
    struct Food* f_head;

    // read in from csv file and make a linked list.
    int i = 0;
     while (feof(fp) != true)
    {
        fgets(row, MAXCHAR, fp);
       //printf("Row: %s", row);

        token = strtok(row, ",");

        while(token != NULL)
        {
            //printf("Token: %s\n", token);
            token = strtok(NULL, ",");
        }
        break;

    }
     int count = 0;
    float total_impact = 0.0;
    while (1){

    fprintf(stderr, "--------------\n");
    fprintf(stderr, "your total impact is: %f\n", total_impact);
    fprintf(stderr, "enter a foodname:\n");
    fgets(input, MAXCHAR, stdin);

        //fprintf(stderr, "i go here\n");
        if (strcmp(argv[1], "food-footprints.csv") == 0){
        //fprintf(stderr, "i go here!\n");
        fgets(row, MAXCHAR, fp);
        //printf("Row: %s", row);
        token = strtok(row, ",");
        token = strtok(NULL, ",");
        token = strtok(NULL, ",");
        char* new_str;
        printf("GHG emissions per kilogram: %s\n", token);
        sprintf(new_str, "%s", token);
        //strncpy(new_str, token, strlen(token)-1);
        //printf("strlen:%ld\n", strlen(new_str));
        if (strcmp(new_str,"0.43") == 0) printf("HEY!\n");
        //printf("new str:%s\n", new_str); 
        float x = atof(new_str);
        total_impact+= x;
        count++;
        fprintf(stderr, "your total impact is: %f\n", total_impact);
        fprintf(stderr, "your average impact is:%f\n", total_impact/count);
        //fprintf(stderr, "input: %s", input);
        //fprintf(stderr, "token: %s", token);
        if (strcmp(token, input) == 0){
            fprintf(stderr, "user input is equal\n");
            token = strtok(NULL, ",");
            token = strtok(NULL, ",");
            fprintf(stderr, "GHG emissions per kilogram:%s\n", token);
            continue; 
        }
        token = strtok (NULL, ",");
        token = strtok(NULL, ",");
        //f_temp->ghg = atoi(token);
        //printf("%d\n", f_temp->ghg);
        //printf("%s\n", f_temp->name);
        while(token != NULL)
        {
            //printf("Token: %s\n", token);
            token = strtok(NULL, ",");
        }

    }
    } 

    return 0;

}
