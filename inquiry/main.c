//
//  main.c
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#include <stdio.h>
#include "manager.h"
#include "user.h"
#include <string.h>
#include "lkstring.h"

void asdf(char *ori, int index, char **res);
char * aa(char *ori, char*re);

int main(int argc, const char * argv[]) {
    // insert code here...
    char * a = "a,b,c,d,e,f,g";
    StrArray *array = componentsSeparatedByString(a, ",");
    
//    char *b;
//    b = aa(a,b);
    
    
    printf("Input your choice 0 or 1  (manager or user) \n");
    int choice;
    scanf("%d", &choice);
    if (choice == 0) {
        return managerHandle();
    }
    // choice == 1
    return userHandle();
}

char * aa(char *ori, char *re) {
    re = ori;
    return re;
}

void asdf(char *ori, int index, char **res) {
    int len = (int)strlen(ori);
    if (index >= len) {
        return ;
    }
    char c[0];
    int i = 0;
    while (i < index) {
        c[i] = ori[i];
        i++;
    }
    char *r;
    strcpy(r, c);
    res = &c;
}
