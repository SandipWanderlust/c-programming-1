#include<stdio.h>
int main() {
int n = 0;
while (1) {
    printf("%d\n",++n);
    if (n == 10) {
        break;
    }
}
}
