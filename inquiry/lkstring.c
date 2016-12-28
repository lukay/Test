//
//  lkstring.c
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#include "lkstring.h"
#include <string.h>
#include <stdlib.h>

bool compareString(char *v1, char *v2) {
    size_t vlen, v2len;
    vlen = strlen(v1);
    v2len = strlen(v2);
    if (vlen != v2len) {
        return false;
    }
    
    for (int i = 0; i < vlen; i++) {
        char s1 = v1[i];
        char s2 = v2[i];
        if (s1 != s2) {
            return false;
        }
    }
    return true;
}

int findstr(char *s_str,char *d_str) {
    int i,j,k,count=0;
    
    char temp[80];
    
    int length = (int) strlen(d_str);
    
    for(i=0;i<strlen(s_str);i++) {
        k=0;
        for(j=i;j<i+length;j++)
            temp[k++]=s_str[j];
        temp[k]='\0';
        if(!strcmp(temp,d_str)) count++;
    }
    return count;
}

char *stringFromIndex(char *ori, int index) {
    char c[strlen(ori)-index];
    int i = 0;
    char buf = ori[index+i];
    while (buf != '\0') {
        c[i] = buf;
        i++;
        buf = ori[index+i];
    }
    char *r = c;
    return r;
}

char *stringAtIndex(char *ori, int index) {
    int len = (int)strlen(ori);
    if (index >= len) {
        return NULL;
    }
    char c[0];
    int i = 0;
    while (i < index) {
        c[i] = ori[i];
        i++;
    }
    char *r = c;
    return r;
}
LKRange makeRange(int loc, int len) {
    LKRange range;
    range.loaction = loc;
    range.length = len;
    return range;
}

LKRange rangeOfString(char *ori, char *sep) {
    int sepLen = (int)strlen(sep);
    if (sepLen < 1) {
        return makeRange(0, 0);
    }
    char *loStr = strchr(ori, sep[0]);
    if (loStr == NULL) {
        return makeRange(0, 0);
    }
    int location = (int)strlen(ori) - (int)strlen(loStr);
    
    bool bl = true;
    for (int i = 0; i < sepLen; i++) {
        if (sep[i] != ori[location+i]) {
            bl = false;
            break;
        }
    }
    if (!bl) {
        return makeRange(0, 0);
    }
    return makeRange(location, sepLen);
}

StrArray * componentsSeparatedByString(char *ori, char *sep) {
    StrArray *array = (StrArray *)malloc(sizeof(StrArray));
    char n_str[(int)strlen(ori)];
    strcpy(n_str, ori);
    LKRange range = rangeOfString(n_str, sep);
    char *nstr = n_str;
    int i = 0;
    while (range.length > 0 && range.loaction >= 0) {
        array->count = i+1;
        array->str[i] = stringAtIndex(nstr, range.loaction);
        nstr = stringFromIndex(nstr, range.loaction+range.length);
        range = rangeOfString(nstr, sep);
    }
    
    
    
//    char * a = "a,b,c,d,e,f,g";
//    int len = (int)strlen(a);
//    char c[len];
//    strcpy(c, a);
//    char *b = strtok(c, ",");
    
    return array;
}
