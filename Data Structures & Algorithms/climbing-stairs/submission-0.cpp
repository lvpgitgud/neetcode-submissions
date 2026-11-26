class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int fib1 = 1;
        int fib2 =2;
        int current{0};
        for(int i =3; i<=n;i++)
        {
            current = fib1 + fib2;
            fib1 = fib2;
            fib2 = current;
        }
        return fib2;
    }
};
