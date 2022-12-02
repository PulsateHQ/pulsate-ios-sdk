//
//  PULTalk.h
//  PULPulsate
//
//  Created by Michal on 11/12/2014.
//  Copyright (c) 2014 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"
#import "PULSortableByWeight.h"

@interface PULTalk : NSObject<PULJSONSerializable, PULSortableByWeight>

@property (nonatomic) NSDate* createdAt;
@property (nonatomic,copy) NSString* talkGUID;
@property (nonatomic,copy) NSString* userAvatarURL;
@property (nonatomic,copy) NSString* adminAvatarURL;
@property (nonatomic,copy) NSString* adminName;
@property (nonatomic,copy) NSString* adminTitle;
@property (nonatomic,copy) NSString* userName;
@property (nonatomic,copy) NSArray* lastMessages;
@property (nonatomic) NSNumber* messagesUnread;
@property (nonatomic) NSNumber* bothReplied;

@end
