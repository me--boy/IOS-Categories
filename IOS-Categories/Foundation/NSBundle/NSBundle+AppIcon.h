//
//  NSBundle+AppIcon.h
//  IOS-Categories
//
//  Created by Jakey on 14/12/15.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface NSBundle (AppIcon)
/**
 *  获取APP的icon的路径
 */
- (NSString*)appIconPath ;
/**
 *  返回APP的icon的image对象
 */
- (UIImage*)appIcon ;
@end
