#include <stdio.h>
#include <string.h>

int main()
{
    char vocab[1000001] = {0,};
    scanf("%s",vocab);
    
    int length = strlen(vocab);
    
    // 단어 길이만큼 반복해 알파벳의 갯수 추출
    int alphabet[26] = {0,};
    for(int i=0; i<length; i++)
    {
        if(vocab[i]>=65 && vocab[i]<=90) alphabet[vocab[i]-65]++;
        else alphabet[vocab[i]-97]++;        // 97로 수정
    }
    
    // 가장 많은 알파벳의 번호, 갯수 추출
    int result_num = 0, result_count = 0;
    for(int i=0; i<26; i++)
    {
        if(alphabet[i]>result_count)
        {
            result_count = alphabet[i];
            result_num = i;            
        }
    }
    
    // 최대 갯수를 가지고 있는 알파벳의 갯수 추출
    int count = 0;
    for (int i=0; i<26; i++)
    {
        if(result_count == alphabet[i]) count++;
    }
    
    // 결과 추출
    if(count>1) printf("?");
    else printf("%c", result_num+65);    //65대신 64로 수정
    
    return 0;
}