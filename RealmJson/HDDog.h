//
//  HDDog.h
//  RealmJson
//
//  Created by LiuHengye on 2017/9/17.
//  Copyright © 2017年 Hye. All rights reserved.
//

#import <Realm/Realm.h>

@interface HDDog : RLMObject

@property NSString *userid;

@property NSString *user_name;

@end
RLM_ARRAY_TYPE(HDDog)
