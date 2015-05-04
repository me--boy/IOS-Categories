//
//  NSObject+Property.h
//  IOS-Categories
//
//  Created by Jakey on 14/12/20.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Property)
/**
 *  返回对象中所有的属性以及属性的值
 */
-(NSDictionary *)propertyDictionary;
/**
 *  返回类中所有的属性列表
 */
+ (NSArray *)classPropertyList;
@end
