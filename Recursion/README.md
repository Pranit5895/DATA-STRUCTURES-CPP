Recursion
Recursive Function : Function which is calling itself, then it is termed as a recursive function. There must be some base condition that will terminate recursion.

returnType function (parameters) {
    ...
    if (baseCondition) {
        ...  -> Ascendig Phase
        function();
        ...  -> Descending Phase
    }
}
Recursive functions are traced in form of a tree.
Recursive Functions are like rubber-bands, if we strech a rubber band, on releasing, it will come back.
Stack is utilised in Recursion.

T(n) = 1           if n=0
       T(n-1)+1    if n>0

Time Complexity?

T(n) = T(n-1) + 1
     = T(n-2) + 1 + 1
     = T(n-3) + 1 + 1 + 1
     = T(n-k) + k
                            Assuming n-k = 0
                                     k = n
     = T(n-n) + n
     = T(0) + n
     = 1 + n

So, the time complexity will be O(n).
Have a look at code here.

Static Variables in Recursion
Static variables are allocated memory for once only so the same value is achieved after the calling is complete.

Global Variables in Recursion
Global variables and Static Variables behave similarly in Recursion.

** Have a look at code here.**
