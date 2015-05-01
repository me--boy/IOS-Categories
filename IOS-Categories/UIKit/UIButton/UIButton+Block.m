//
//  UIButton+Block.m
//  IOS-Categories
//
//  Created by Jakey on 14/12/30.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import "UIButton+Block.h"
#import <objc/runtime.h>
//属性 与 对象 关联的key
static const void *UIButtonBlockKey = &UIButtonBlockKey;

@implementation UIButton (Block)

-(void)addActionHandler:(TouchedBlock)touchHandler{
    //将button对象与代码块 设置关联(代码块变为button的属性(nonatomic,copy修饰该block))
    objc_setAssociatedObject(self, UIButtonBlockKey, touchHandler, OBJC_ASSOCIATION_COPY_NONATOMIC);
    
    [self addTarget:self action:@selector(actionTouched:) forControlEvents:UIControlEventTouchUpInside];
}

-(void)actionTouched:(UIButton *)btn{
    //取出关联的代码块属性
    TouchedBlock block = objc_getAssociatedObject(self, UIButtonBlockKey);
    
    if (block) {
        block(btn.tag);
    }
}
@end

