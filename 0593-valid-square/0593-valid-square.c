long long sqDist(int* p1, int* p2) {
    long long dx = p1[0] - p2[0];
    long long dy = p1[1] - p2[1];
    return dx * dx + dy * dy;
}

bool validSquare(int* p1, int p1Size, int* p2, int p2Size, int* p3, int p3Size, int* p4, int p4Size) {
    (void)p1Size; (void)p2Size; (void)p3Size; (void)p4Size;

    // Calculate all 6 pairwise distances
    long long d1 = sqDist(p1, p2);
    long long d2 = sqDist(p1, p3);
    long long d3 = sqDist(p1, p4);
    long long d4 = sqDist(p2, p3);
    long long d5 = sqDist(p2, p4);
    long long d6 = sqDist(p3, p4);

    // Find the smallest distance (this must be the side)
    long long min = d1;
    if (d2 < min) min = d2;
    if (d3 < min) min = d3;
    if (d4 < min) min = d4;
    if (d5 < min) min = d5;
    if (d6 < min) min = d6;

    // Count how many distances match the side, and how many match the diagonal
    int sides = 0;
    int diags = 0;

    if (d1 == min) sides++; else if (d1 == 2 * min) diags++;
    if (d2 == min) sides++; else if (d2 == 2 * min) diags++;
    if (d3 == min) sides++; else if (d3 == 2 * min) diags++;
    if (d4 == min) sides++; else if (d4 == 2 * min) diags++;
    if (d5 == min) sides++; else if (d5 == 2 * min) diags++;
    if (d6 == min) sides++; else if (d6 == 2 * min) diags++;

    // Valid square must have exactly 4 sides, 2 diagonals, and side length > 0
    return (sides == 4 && diags == 2 && min > 0);
}