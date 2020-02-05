//
//  PULJSONSerializable.h
//  PULPulsate
//
//  Created by Michal on 23/03/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PULJSONSerializable <NSObject>

@required

-(NSDictionary*)getValueDictionary;
-(instancetype)initWithDictionary:(NSDictionary*)dictionary;

@end
