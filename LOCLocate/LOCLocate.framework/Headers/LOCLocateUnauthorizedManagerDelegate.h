//
//  PULPulsateUnauthorizedManagerDelegate.h
//  PULPulsate
//
//  Created by Rafael Skubisz on 10/25/16.
//  Copyright © 2016 Pulsatehq. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol LOCLocateUnauthorizedManagerDelegate
@required
    -(void)unauthorizedAction:(NSString*)action;
@end
