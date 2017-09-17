//
//  HDUser.h
//  RealmJson
//
//  Created by LiuHengye on 2017/9/17.
//  Copyright © 2017年 Hye. All rights reserved.
//

#import <Realm/Realm.h>
#import "HDDog.h"


@interface HDUser : RLMObject

@property NSString *userid;

@property NSString *user_name;

@property RLMArray <HDDog*><HDDog>*dogs;

@end
