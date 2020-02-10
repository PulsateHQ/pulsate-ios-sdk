//
//  PULCallToActionButton.h
//  PULPulsate
//
//  Created by Michal on 31/07/2015.
//  Copyright (c) 2015 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, PULCallToActionType)
{
    PULDismissBackCard,
    PULDismiss,
    PULLinkBackCard,
    PULLink,
    PULOpenFeedBackCard,
    PULOpenFeed,
    PULShowFeedBackCard,
    PULShowFeed
};

@interface PULCallToActionButton : NSObject

@property (nonatomic,copy) NSString* buttonLabel;
@property (nonatomic) PULCallToActionType actionType;
@property (nonatomic) NSString* destination;
@property (nonatomic) NSArray* customEvents;

@end
