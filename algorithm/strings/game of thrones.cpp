void findPalind(char *arr)
{

    int flag = 0;
    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string

    int letter[26] = {0};

    for (int i = 0; i < strlen(arr); i++) {
        letter[arr[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (letter[i] % 2 == 1) {
            count++;
        }
    }

    if (count > 1) {
        flag = 1;
    }

    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");

    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
