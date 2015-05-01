//
//  UIButton+Block.h
//  IOS-Categories
//
//  Created by Jakey on 14/12/30.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  按钮点击的回调的代码块
 *
 *  @param tag button的tag
 */
typedef void (^TouchedBlock)(NSInteger tag);

@interface UIButton (Block)
/**
 *  button的点击事件的 代码块 回调
 *  内部依然是tagget <---action 
 *  @param touchHandler 会掉的代码快
 */
-(void)addActionHandler:(TouchedBlock)touchHandler;
@end
