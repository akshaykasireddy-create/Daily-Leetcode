int romanToInt(char* s) {
   int sum = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'I' && s[i + 1] == 'V') { 
            sum += 4;
            i++; // we will increase the i by 1 as we don't want to check the i+1th condition
        } else if (s[i] == 'I' && s[i + 1] == 'X') { 
            sum += 9;
            i++; // we will increase the i by 1 as we don't want to check the i+1th condition
        } else if (s[i] == 'X' && s[i + 1] == 'L') { 
            sum += 40;
            i++; // we will increase the i by 1 as we don't want to check the i+1th condition
        } else if (s[i] == 'X' && s[i + 1] == 'C') {
            sum += 90;
            i++; // we will increase the i by 1 as we don't want to check the i+1th condition
        } else if (s[i] == 'C' && s[i + 1] == 'D') {
            sum += 400;
            i++; // we will increase the i by 1 as we don't want to check the i+1th condition
        } else if (s[i] == 'C' && s[i + 1] == 'M') {
            sum += 900;
            i++; // we will increase the i by 1 as we don't want to check the i+1th condition
        } else if (s[i] == 'I') {
            sum += 1;
        } else if (s[i] == 'V') {
            sum += 5;
        } else if (s[i] == 'X') {
            sum += 10;
        } else if (s[i] == 'L') {
            sum += 50;
        } else if (s[i] == 'C') {
            sum += 100;
        } else if (s[i] == 'D') {
            sum += 500;
        } else if (s[i] == 'M') {
            sum += 1000;
        }
    }
    return sum; 
}
