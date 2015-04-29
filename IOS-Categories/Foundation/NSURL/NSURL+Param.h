//
//  NSURL+Param.h
//  IOS-Categories
//
//  Created by Jakey on 14/12/30.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (Param)
/**
 *  截取出指定URL中得包含的字典参数
 *   For example, in the URL http://www.example.com/index.php?key1=value1&key2=value2, 
     取出的字典包含key1=value1 key2=value2.
 */
- (NSDictionary *)parameters;
/**
 *  取出URL中包含的指定的字典参数
 *
 *  @param parameterKey 指定URL包含的某个参数的Key
 */
- (NSString *)valueForParameter:(NSString *)parameterKey;
@end
