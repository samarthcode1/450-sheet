
char flip(char ch) { return (ch == '0') ? '1' : '0'; }
int getFlipWithStartingCharcter(string str, char expected)
{
    int flipCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != expected)
            flipCount++;
        expected = flip(expected);
    }
    return flipCount;
}

int minFlips (string S)
{
    // your code here
    return min(getFlipWithStartingCharcter(S, '0'),
               getFlipWithStartingCharcter(S, '1'));
    
}