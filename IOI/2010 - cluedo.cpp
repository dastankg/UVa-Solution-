#include "grader.h"
#include "cluedo.h"
void Solve(){
    int a = 1;
    int b = 1;
    int c = 1;
    while (true){
        int ans = Theory(a, b, c);
        if (ans == 0){
            return;
        } else if (ans == 1){
            a++;
        } else if (ans == 2){
            b++;
        } else {
            c++;
        }
    }
 
}
