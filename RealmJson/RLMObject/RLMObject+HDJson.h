//
//  RLMObject+HDJson.h
//  HyacinthBean
//
//  Created by LiuHengye on 2017/8/23.
//  Copyright © 2017年 Hye. All rights reserved.
//

#import <Realm/Realm.h>

@interface RLMObject (HDJson)


/**
 模型转字典

 @return 字典
 */
-(NSMutableDictionary*)hd_keyValues;


/**
 模型数组转字典数据

 @param objectArray 模型数组
 @return 字典数组
 */
-(NSMutableArray*)hd_keyValuesArrayWithObjectArray:(NSArray *)objectArray;

@end
