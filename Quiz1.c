#include <stdio.h>
#include <string.h>

int main() {
    int i, j, k;
    char input1[101];
    scanf("%[^\n] ", input1);
    int num = strlen(input1)*2;
    char input2[num];
    scanf("%[^\n] ", input2);
    char input3[1001];
    scanf("%[^\n]", input3);
    char def[strlen(input1)+(strlen(input2)/2)+1];
    char save[101][1001];
    int valuesave[101];
    int position_1 = 0;
    int position_2 = 0;
    int word = 0;
    int word_pos = 0;
    int count = 0;
    int most = 0;
    int value = 0;
    for(i=0; i<strlen(input1)+(strlen(input2)/2)+1; i++) {
        if(i%2==0) {
            def[i] = input1[position_1];
            position_1++;
        }
        else if(i%2!=0) {
            def[i] = input2[position_2];
            position_2+=2;
        }
    }
    for(j=0; j<strlen(input3)+1; j++) {
        for(k=0; k<strlen(input1)+(strlen(input2)/2); k++) {
            if(input3[j] == def[k]) {
                value += def[k+1]-48;
                break; //กันไปหาตัวมั่ว เจอแล้วหยุกไปเลย เพราะเวลากำหนดตัวซ้ำ ตอน input1 มันอาจจะเอาไปคิดด้วย !
            }
        }
        save[count][word_pos] = input3[j];
        word_pos++;
        if(input3[j] == ' ' || j==strlen(input3)) {
            word++;
            valuesave[count] = value;
            count++;
            word_pos = 0;
            value = 0;
        }
        if(value > most) most = value;
    }
    /*for(i=0; i<strlen(input1)+(strlen(input2)/2)+1; i++) {
        printf("%c\n", def[i]);
    }*/

    for(i=0; i<word; i++) {
        if(valuesave[i] == most)
            printf("%s %d\n", save[i], valuesave[i]);
    }
    return 0;
}
