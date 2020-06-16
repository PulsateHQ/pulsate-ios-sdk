//
//  PULCard.h
//  PULPulsate
//
//  Created by Michal on 23/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PULJSONSerializable.h"

@interface PULCard : NSObject<PULJSONSerializable>

@property (nonatomic) NSArray* viewBlocks;
@property (nonatomic) NSArray* backViewBlocks;
@property (nonatomic) NSString* campaignGUID;
@property (nonatomic) NSNumber* allowReply;
@property (nonatomic) NSDate* createdAt;
@property (nonatomic) NSNumber* expiresAtTimestamp;
@property (nonatomic) NSNumber* messagesUnread;
@property (nonatomic) NSNumber* bothReplied;
@property (nonatomic) BOOL lastSenderIsAdmin;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) BOOL containsMessage;

@end
