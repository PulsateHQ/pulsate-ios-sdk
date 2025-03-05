//
//  PULSystemKeychain.h
//  PULPulsate
//
//  Created by Michal on 02/01/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PULSystemKeychain : NSObject

+ (void)save:(NSString *)service data:(id)data;

+ (id)load:(NSString *)service;

+ (void)delete:(NSString *)service;

+ (void)storeUUID:(NSString *)UUID;

+ (NSString *)getUUID;

+ (void)cleanUUID;

@end
