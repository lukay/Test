//
//  manager.h
//  inquiry
//
//  Created by Lukay on 2016/12/27.
//  Copyright © 2016年 Lukay. All rights reserved.
//

#ifndef manager_h
#define manager_h

#include <stdio.h>
#include <stdbool.h>


/**
 管理员登陆处理

 @return 处理结果
 */
int managerHandle(void);

/**
 验证管理员账号

 @param name 用户名
 @param pwd 密码
 @return 验证结果 yes or no
 */
bool verifyManager(char *name, char *pwd);

#endif /* manager_h */
