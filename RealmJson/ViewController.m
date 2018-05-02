//
//  ViewController.m
//  RealmJson
//
//  Created by LiuHengye on 2017/9/17.
//  Copyright © 2017年 Hye. All rights reserved.
//

#import "ViewController.h"
#import "HDUser.h"
#import "RLMObject+HDJson.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    HDUser *user = [[HDUser alloc]init];
    user.userid = @"2";
    user.user_name = @"解析";
    
    HDDog *dog1 = [[HDDog alloc]init];
    dog1.user_name = @"dog1";
    dog1.userid = @"1";
    
    HDDog *dog2 = [[HDDog alloc]init];
    dog2.user_name = @"dog2";
    dog2.userid = @"2";
    
    [user.dogs addObject:dog1];
    [user.dogs addObject:dog2];
    
    NSLog(@"%@",user.hd_keyValues);
    
    
    NSLog(@"更新了吗");
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
