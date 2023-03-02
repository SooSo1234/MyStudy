#include <stdio.h>
#include <time.h>

int main() {
    while (1) {
        fflush(stdout); 
        int start_time = time(NULL); 
        while (time(NULL)-start_time<1){
            
            if (time(NULL) % 2 == 0)
                system("color 7c");
            else
                system("color 89");

            if (kbhit()) {
                char input = getchar();
                break;
            }
        }
    }
    return 0;
}