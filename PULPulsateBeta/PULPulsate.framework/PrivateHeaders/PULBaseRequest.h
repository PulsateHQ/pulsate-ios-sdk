//
//  PULBaseRequest.h
//  PULPulsate
//
//  Created by Michal on 16/04/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PULBaseRequest : NSObject

@property (nonatomic,copy) NSString* deviceGUID;
@property (nonatomic,copy) NSString* alias;

-(NSDictionary*)getValueDictionary;


@end
