//
//  NSDateFormatter+Make.h
//  IOS-Categories
//
//  Created by Jakey on 15/4/25.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//  mobile.dzone.com/news/ios-threadsafe-date-formatting

#import <Foundation/Foundation.h>

@interface NSDateFormatter (Make)
/**
 *  返回指定格式的日期格式对象
 *
 *  @param format 指定的日期格式
 */
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format;
/**
 *  返回指定格式 指定时区的日期格式对象
 *
 */
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone;
/**
 *  返回指定格式 指定时区 指定地区的日期格式对象
 *
 */
+(NSDateFormatter *)dateFormatterWithFormat:(NSString *)format timeZone:(NSTimeZone *)timeZone locale:(NSLocale *)locale;

+(NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style;

+(NSDateFormatter *)dateFormatterWithDateStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;

+(NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style;


+(NSDateFormatter *)dateFormatterWithTimeStyle:(NSDateFormatterStyle)style timeZone:(NSTimeZone *)timeZone;
@end
