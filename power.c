double toPowerIteration(double num, int pow) {
    const double num_const = num;
    if (pow == 0) return 1;
    
    int i = 0;
    if (pow < 0) {
        for (i = -1; i > pow; i--)
            num = num * num_const;

        num = 1 / num;
        return num;
    }

    while (i < pow-1) {
        num = num * num_const;
        i++;
    }
    return num;
}

double toPowerRecursion(double num, int pow) {
    if(pow == 0) return 1;
    if(pow < 0) return 1.0 / toPowerRecursion(num, -pow);
    return num * toPowerRecursion(num, pow - 1);
}
