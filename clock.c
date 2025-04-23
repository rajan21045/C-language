/* Write a C program that continuously displays the current time (in 12-hour or 24-hour format) and date, updating every second with a clear screen refresh. */

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>

int input_format();
void fill_time(char*,int);
void fill_date(char*);
void clear_screen();


int main() {
    char time[50]; 
    char date[100]; 
    int format = input_format();
    while(1)
    {
        fill_time(time,format); 
        fill_date(date); 
        clear_screen();
        printf("Current Time Is %s\n",time); 
        printf("Date Is %s",date);
        sleep(1); // Sleep for 1 second
    }
    return 0;
}


int input_format(){
    int format;
    printf("\nChoose Time Format : ");
    printf("\n1. 24 Hour Format"); 
    printf("\n2. 12 Hour Format (default) ");
    printf("\nMake A Choice(1/2) : ");
    scanf("%d",&format);
    return format;
}



void fill_date(char* buffer)
{
    time_t raw_time;
    struct tm *current_time; 
    time(&raw_time); 
    current_time = localtime(&raw_time); 
    strftime(buffer, 100, "%A %B %d %Y", current_time);
}


void clear_screen()
{
   #ifdef _WIN32
        system("cls"); // For Windows
   #else
        system("clear"); // For Linux/Unix/Mac
   #endif

}
void fill_time(char* buffer,int format)
{
    time_t raw_time;
    struct tm *current_time; 
    time(&raw_time); 
    current_time = localtime(&raw_time); 
        if(format==1)
        {
            strftime(buffer, 50, "%H:%M:%S", current_time);  
        }
        else{
            strftime(buffer, 50, "%I:%M:%S %p", current_time);
        }
}