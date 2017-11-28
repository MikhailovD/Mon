#include <stdio.h>
#include <stdlib.h>
get_value (char* result, char* field_name);
int main (){
    int i, k = 49;
    char type[] = {"TYPE_0"};
    char text[] = ("TEXT_0");
    char *out_type;
    char *out_text;
    for (i = 0; i < 5, k < 54; i++, k++){
        *(type + 5) = k;
        *(text + 5) = k;
        get_value(out_type, type);
        if (strcmp(, "Error") == 0) {
            get_value(out_text, text);
            printf("%s\n", out_text);
        }
        else printf("%s\n", "Operation was passed successfully");
    }
    return 0;
}
get_value (char* result, char* field_name){
}

