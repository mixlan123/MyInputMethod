//
// Created by luowei on 15/7/1.
// Copyright (c) 2015 luowei. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface KeyboardConfiguration : NSObject



+ (NSString *)currentTheme;

+ (UIImage *)getBtnImageWithByName:(NSString *)name;

+ (UIImage *)getKBLabImageWithByName:(NSString *)name withText:(NSString *)text;

@end