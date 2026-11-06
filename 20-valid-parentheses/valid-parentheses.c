bool isValid(char* s) {
    char stack[strlen(s) + 1];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Opening brackets
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        }

        // Closing brackets
        else {
            if (top == -1) {
                return false;
            }

            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == '}' && stack[top] == '{') ||
                (s[i] == ']' && stack[top] == '[')) {

                top--;
            }
            else {
                return false;
            }
        }
    }

    return top == -1;
}
