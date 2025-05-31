int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int isComposite(int n) {
    if (n < 2) return 0;
    return !isPrime(n);
}

int isTriangular(int n) {
    int sum = 0;
    for (int i = 1; sum <= n; i++) {
        sum += i;
        if (sum == n) return 1;
    }
    return 0;
}

int isEven(int n) {
    return n % 2 == 0;
}

int isOdd(int n) {
    return n % 2 != 0;
}

int areTwinPrimes(int a, int b) {
    return isPrime(a) && isPrime(b) && abs(a - b) == 2;
}
