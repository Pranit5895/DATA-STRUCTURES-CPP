# 1. Tail Recursion
If a recursiVe function is calling itself and that recursive call is the last statement of a function then it is tail recursion.
It means that all the operations will be performed at calling time only. No operation at returning time.
Loop v/s Tail Recursion

Tail recursion can be easily converted to a loop.
Tail Recursion

void fun(int n) {
      if(n>0) {
        printf("%d", n);
        fun(n-1);
    }
}
Time Complexity: O(n)

Space Complexity: O(n)

Loop

void fun(int n) {
    while(n>0) {
        printf("%d", n);
        n--;
    }
}
Time Complexity: O(n)

Space Complexity: O(1)

It is better to convert tail recursion to a loop, as loop is efficient in terms of space. Even some of the smart compilers convert the tail recursion to loop themself.
