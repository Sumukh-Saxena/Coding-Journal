bool isPowerOfThree(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 3 == 0) { //kee[p dividing the number while it is divisible by 3
        n /= 3;
    }

    return n == 1;
}
