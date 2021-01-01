#include <stdio.h>

void playingWIthChars() {
    char c;
    char string[100];
    char sentence[100];
    char temp[10];

    scanf("%c", &c);
    scanf("%s", string);
    scanf("%c",&temp);
    scanf("%[^\n]", sentence);

    printf("%c\n", c);
    printf("%s\n", string);
    printf("%s\n", sentence);

}
void sumAndDifferenceofTwoNumbers() {
void functions() {
    int a = 4;
    int b = 5;
    int x = 10;
    int w = 15;
    int greater = 0;

    int array[4] = {a, b, x, w};
    for (int i = 0; i < 4; i++) {
        if (array[i] >= array[0] && array[i] >= array[1] && array[i] >= array[2] && array[i] >= array[3]) {
            greater += array[i];

        }
    }


    printf("%d", greater);
}
    int x, y;
    double a, b;

    scanf("%d %d", &x, &y);
    scanf("%lf %lf", &a, &b);

    printf("%d %d \n", x + y, x - y);
    printf("%.1f %.1f", a + b, a - b);
}
void functions() {
void pointer() {
    void update(int *a,int *b) {
    // Complete this function
    int c = *a;
    (*a) = *a + *b;
    (*b) = abs(c - *b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
}
    int a = 4;
    int b = 5;
    int x = 10;
    int w = 15;
    int greater = 0;

    int array[4] = {a, b, x, w};
    for (int i = 0; i < 4; i++) {
        if (array[i] >= array[0] && array[i] >= array[1] && array[i] >= array[2] && array[i] >= array[3]) {
            greater += array[i];

        }
    }


    printf("%d", greater);
}
void recursion() {
    int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
    int x = a + b + c;
    if (n == 4) {
        return x;
    }
    return find_nth_term(--n, b,c,x);
}
int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);

    return 0;
}
}

int main() {
    return 0;
}










