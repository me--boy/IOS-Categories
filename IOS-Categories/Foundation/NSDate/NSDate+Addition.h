//
//  NSDate+Addition.h
//  IOS-Categories
//
//  Created by Jakey on 14/12/30.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Addition)
/**
 *  返回指定日期格式的时间字符串
 *
 *  @param format 指定的日期格式
 */
+ (NSString *)currentDateStringWithFormat:(NSString *)format;
/**
 *  在当前时间上添加指定的秒数
 *
 *  @param seconds 添加的秒数
 */
+ (NSDate *)dateWithSecondsFromNow:(NSInteger)seconds;
/**
 *  返回指定 年 月 日的NSDate对象
 *
 *  @param year  指定的 年
 *  @param month 指定的 月
 *  @param day   指定的 天
 */
+ (NSDate *)dateWithYear:(NSInteger)year month:(NSUInteger)month day:(NSUInteger)day;
/**
 *  返回指定格式的NSDate的对象
 *
 *  @param format 指定的格式
 */
- (NSString *)dateWithFormat:(NSString *)format;

@end
