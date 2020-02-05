//
//  PULSetPrivacyRequest.h
//  PULPulsate
//
//  Created by Michal on 02/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULBaseRequest.h"

@interface PULSetPrivacyRequest : PULBaseRequest

@property (nonatomic) NSUInteger privacyLevel;

-(instancetype)initWithDictionary:(NSDictionary*)dictionary;

@end
