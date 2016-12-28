//
//  user.c
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#include "user.h"
#include <stdlib.h>

Line *initDefaultLine();
void parseLine(Line *line, char *lineInfo);

int userHandle(void) {
    
    printf("Input search stations \n");
    char sStations[20];
    scanf("%s", sStations);
    printf("%s", sStations);
    
//    struct Line a;
    
    return 0;
}


LineArray *getLineArray() {
    static LineArray *lineArray = NULL;
    if (NULL == lineArray) {
        lineArray = (LineArray *)malloc(sizeof(LineArray));
        lineArray->line[0] = initDefaultLine();
    }
    return lineArray;
}

Line *initDefaultLine() {
    Line *line = (Line *)malloc(sizeof(Line));
    char *lineInfo = "52:北京大学,中关村,魏公村,国图,白石桥";
    parseLine(line, lineInfo);
    return line;
}

void parseLine(Line *line, char *lineInfo) {
    line->lineInfo = lineInfo;
    
}


