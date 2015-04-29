//
//  NSDictionary+Merge.m
//  IOS-Categories
//
//  Created by Jakey on 15/1/25.
//  Copyright (c) 2015年 www.skyfox.org. All rights reserved.
//

#import "NSDictionary+Merge.h"

@implementation NSDictionary (Merge)

+ (NSDictionary *)dictionaryByMerging:(NSDictionary *)dict1 with:(NSDictionary *)dict2 {
    NSMutableDictionary * result = [NSMutableDictionary dictionaryWithDictionary:dict1];
    [dict2 enumerateKeysAndObjectsUsingBlock: ^(id key, id obj, BOOL *stop) {
        if (![dict1 objectForKey:key]) {//在dict1这个字典不存在这个key 就添加到新的字典中(不添加具有相同key的数据)
            if ([obj isKindOfClass:[NSDictionary class]]) {
                
                //如果字典存在字典就递归调用这个方法
                NSDictionary * newVal = [[dict1 objectForKey: key] dictionaryByMergingWith: (NSDictionary *) obj];
        
                [result setObject: newVal forKey: key];
            } else {
                //添加
                [result setObject: obj forKey: key];
            }
        }
    }];
    return (NSDictionary *) [result mutableCopy];
}
- (NSDictionary *)dictionaryByMergingWith:(NSDictionary *)dict {
    return [[self class] dictionaryByMerging:self with: dict];
}
@end
