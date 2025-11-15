#include <stdio.h>
#include <string.h>

int main(){
	char word[21];

	if (scanf("%20s", word) !=1){
		return 0;
	}

	int len = strlen(word);
	int x=0;
	int y=0;
	for(int i=0;i<len;i++){
		if(word[i]=='z'){
			x++;
		}else{
			break;
		}
	}

	y=len-x;
	if (2 * x == y) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

