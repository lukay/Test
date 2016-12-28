//
//  lkstring.h
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#ifndef string_h
#define string_h

#include <stdio.h>
#include <stdbool.h>

typedef struct _StrArray {
    int count;
    char *str[0];
}StrArray;

typedef struct _LKRange {
    int loaction;
    int length;
}LKRange;

/**
 对比两个字符串是否相同

 @param value 字符串1
 @param value2 字符串2
 @return yes or no
 */
bool compareString(char *value, char *value2);
int findstr(char *s_str,char *d_str);
char *stringFromIndex(char *ori, int index);
char *stringAtIndex(char *ori, int index);
StrArray * componentsSeparatedByString(char *ori, char *sep);
LKRange rangeOfString(char *ori, char *sep);
LKRange makeRange(int loc, int len);

#endif /* string_h */
