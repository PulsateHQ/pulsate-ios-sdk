//
//  PULPulsateConfiguration.h
//  PULPulsate
//
//  Created by Michal on 04/12/2014.
//  Copyright (c) 2014 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "PULAuthorizationData.h"
#import "PULConstants.h"
#import "PULLabelsConfiguration.h"
#import "PULSetPrivacyRequest.h"

@interface PULPulsateConfiguration : NSObject

+(PULAuthorizationData*)getAuthorizationDataFromConfigwithError:(NSError**)error;

+(void)saveUserFirstName:(NSString*)userFirstName;
+(void)saveUserLastName:(NSString*)userLastName;
+(void)saveUserEmail:(NSString*)userEmail;
+(void)saveAge:(NSUInteger)age;
+(void)saveGender:(BOOL)isMale;
+(void)saveDeviceToken:(NSString*)deviceToken;
+(NSString*)getDeviceToken;
+(void)storeDictionary:(NSDictionary*)dict ForKey:(NSString*)key;
+(NSDictionary*)getDictionaryForKey:(NSString*)key;
+(void)deleteDictionaryForKey:(NSString*)key;

+(void)setCurrentAlias:(NSString*)alias;
+(void)logoutAlias;
+(NSString*)getCurrentAlias;

+(NSString*)getUserFirstName;
+(NSString*)getUserLastName;
+(NSString*)getUserEmail;
+(NSNumber*)getAge;
+(NSNumber*)isMale;

+(void)saveSmallInAppDuration:(NSUInteger)duration;
+(NSUInteger)getSmallInAppDuration;
+(void)setUseInitialsForUserAvatar:(BOOL)enabled;
+(BOOL)getUseInitialsForUserAvatar;
+(void)setLocationUpdatesEnabled:(BOOL)enabled;
+(BOOL)getLocationUpdatesEnabled;
+(void)setPushNotificationEnabled:(BOOL)enabled;
+(BOOL)getPushNotificationEnabled;
/**
 *  Get Pulsate Basic Bundle
 *
 *  @return returns nill if not found
 */
+(NSBundle*)getPulsateBasicBundle;

/**
 *  Compares system versions
 *
 *  @param versionToCompare a string version
 *
 *  @return
 */
+(PULCompareResult)compareSystemVersionTo:(NSString*)versionToCompare;

+(void)incrementBadgeBy:(NSUInteger)incrementValue;
+(void)decrementBadgeBy:(NSUInteger)incrementValue;
+(PULLabelsConfiguration*)getConfigurationDictionary;
+(UIColor*)loadColorFromConfigWithId:(NSString*)identifier withDefaultColor:(UIColor*)defaultColor;
+(NSString*)getLocalisedStringFor:(NSString*)key;
@end
